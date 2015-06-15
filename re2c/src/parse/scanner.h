#ifndef _RE2C_PARSE_SCANNER_
#define _RE2C_PARSE_SCANNER_

#include <string>

#include "src/codegen/output.h"
#include "src/ir/regexp/regexp.h"
#include "src/globals.h"
#include "src/parse/input.h"
#include "src/parse/token.h"
#include "src/util/forbid_copy.h"
#include "src/util/substr.h"

namespace re2c
{

struct ScannerState
{
	// positioning
	char * tok;
	char * ptr;
	char * cur;
	char * pos;
	char * ctx;

	// buffer
	char * bot;
	char * lim;
	char * top;
	char * eof;

	uint32_t tchar;
	uint32_t tline;
	uint32_t cline;
	uint32_t iscfg;

	bool in_parse;

	ScannerState ();
	ScannerState (const ScannerState &);
	ScannerState & operator = (const ScannerState &);
};

class Scanner: private ScannerState
{
private:
	Input & in;
	OutputFile & out;

private:
	char *fill(char*, uint32_t);
	void set_sourceline(char *& cursor);

public:
	Scanner(Input &, OutputFile &);
	~Scanner();

	enum ParseMode {
		Stop,
		Parse,
		Reuse,
		Rules
	};

	ParseMode echo();
	int scan();
	void reuse();
	
	size_t get_pos() const;
	void save_state(ScannerState&) const;
	void restore_state(const ScannerState&);

	uint32_t get_cline() const;
	const std::string & get_fname () const;
	void set_in_parse(bool new_in_parse);
	void fatal_at(uint32_t line, uint32_t ofs, const char *msg) const;
	void fatalf_at(uint32_t line, const char*, ...) const;
	void fatalf(const char*, ...) const;
	void fatal(const char*) const;
	void fatal(uint32_t, const char*) const;

	void config(const std::string &, int);
	void config(const std::string &, const std::string &);

	uint32_t unescape(SubStr &s) const;
	std::string& unescape(SubStr& str_in, std::string& str_out) const;

	Range * mkRange (SubStr & s) const;
	Range * getRange (SubStr & s) const;
	RegExp * matchSymbol (uint32_t c) const;
	RegExp * matchSymbolRange (Range * r) const;
	RegExp * strToRE (SubStr & s) const;
	RegExp * strToCaseInsensitiveRE (SubStr & s) const;
	RegExp * ranToRE (SubStr & s) const;
	RegExp * invToRE (SubStr & s) const;
	RegExp * mkDot () const;
	RegExp * mkDefault () const;

	FORBID_COPY (Scanner);
};

inline size_t Scanner::get_pos() const
{
	return cur - bot;
}

inline const std::string & Scanner::get_fname () const
{
	return in.file_name;
}

inline uint32_t Scanner::get_cline() const
{
	return cline;
}

inline void Scanner::save_state(ScannerState& state) const
{
	state = *this;
}

inline void Scanner::fatal(const char *msg) const
{
	fatal(0, msg);
}

} // end namespace re2c

#endif // _RE2C_PARSE_SCANNER_