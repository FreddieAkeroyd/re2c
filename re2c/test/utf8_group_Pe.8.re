#include <stdio.h>
bool scan(const char * start, const char * const limit)
{
	__attribute__((unused)) const char * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCTYPE unsigned char
#	define YYCURSOR start
Pe:
	/*!re2c
		re2c:yyfill:enable = 0;
				Pe = [\x29-\x29\x5d-\x5d\x7d-\x7d\u0f3b-\u0f3b\u0f3d-\u0f3d\u169c-\u169c\u2046-\u2046\u207e-\u207e\u208e-\u208e\u232a-\u232a\u2769-\u2769\u276b-\u276b\u276d-\u276d\u276f-\u276f\u2771-\u2771\u2773-\u2773\u2775-\u2775\u27c6-\u27c6\u27e7-\u27e7\u27e9-\u27e9\u27eb-\u27eb\u27ed-\u27ed\u27ef-\u27ef\u2984-\u2984\u2986-\u2986\u2988-\u2988\u298a-\u298a\u298c-\u298c\u298e-\u298e\u2990-\u2990\u2992-\u2992\u2994-\u2994\u2996-\u2996\u2998-\u2998\u29d9-\u29d9\u29db-\u29db\u29fd-\u29fd\u2e23-\u2e23\u2e25-\u2e25\u2e27-\u2e27\u2e29-\u2e29\u3009-\u3009\u300b-\u300b\u300d-\u300d\u300f-\u300f\u3011-\u3011\u3015-\u3015\u3017-\u3017\u3019-\u3019\u301b-\u301b\u301e-\u301f\ufd3f-\ufd3f\ufe18-\ufe18\ufe36-\ufe36\ufe38-\ufe38\ufe3a-\ufe3a\ufe3c-\ufe3c\ufe3e-\ufe3e\ufe40-\ufe40\ufe42-\ufe42\ufe44-\ufe44\ufe48-\ufe48\ufe5a-\ufe5a\ufe5c-\ufe5c\ufe5e-\ufe5e\uff09-\uff09\uff3d-\uff3d\uff5d-\uff5d\uff60-\uff60\uff63-\uff63];
		Pe { goto Pe; }
		* { return YYCURSOR == limit; }
	*/
}
static const char buffer_Pe [] = "\x29\x5D\x7D\xE0\xBC\xBB\xE0\xBC\xBD\xE1\x9A\x9C\xE2\x81\x86\xE2\x81\xBE\xE2\x82\x8E\xE2\x8C\xAA\xE2\x9D\xA9\xE2\x9D\xAB\xE2\x9D\xAD\xE2\x9D\xAF\xE2\x9D\xB1\xE2\x9D\xB3\xE2\x9D\xB5\xE2\x9F\x86\xE2\x9F\xA7\xE2\x9F\xA9\xE2\x9F\xAB\xE2\x9F\xAD\xE2\x9F\xAF\xE2\xA6\x84\xE2\xA6\x86\xE2\xA6\x88\xE2\xA6\x8A\xE2\xA6\x8C\xE2\xA6\x8E\xE2\xA6\x90\xE2\xA6\x92\xE2\xA6\x94\xE2\xA6\x96\xE2\xA6\x98\xE2\xA7\x99\xE2\xA7\x9B\xE2\xA7\xBD\xE2\xB8\xA3\xE2\xB8\xA5\xE2\xB8\xA7\xE2\xB8\xA9\xE3\x80\x89\xE3\x80\x8B\xE3\x80\x8D\xE3\x80\x8F\xE3\x80\x91\xE3\x80\x95\xE3\x80\x97\xE3\x80\x99\xE3\x80\x9B\xE3\x80\x9E\xE3\x80\x9F\xEF\xB4\xBF\xEF\xB8\x98\xEF\xB8\xB6\xEF\xB8\xB8\xEF\xB8\xBA\xEF\xB8\xBC\xEF\xB8\xBE\xEF\xB9\x80\xEF\xB9\x82\xEF\xB9\x84\xEF\xB9\x88\xEF\xB9\x9A\xEF\xB9\x9C\xEF\xB9\x9E\xEF\xBC\x89\xEF\xBC\xBD\xEF\xBD\x9D\xEF\xBD\xA0\xEF\xBD\xA3\xFF";
int main ()
{
	if (!scan (buffer_Pe, buffer_Pe + sizeof (buffer_Pe) - 1))
		printf("test 'Pe' failed\n");
}