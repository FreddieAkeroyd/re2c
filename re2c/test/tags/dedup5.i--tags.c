/* Generated by re2c */
// This test revealed a bug in liveness analyses that takes place
// during tag deduplication: in loops, live tags added by non-looping
// child paths failed to propagate into looping paths.

// These two cases differ: in one case looping transition goes first (and tags are lost),
// in the other case non-looping transition goes first (and tags are not lost).


{
	YYCTYPE yych;
	YYCTXMARKER = YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt0p = (YYCURSOR - YYCTXMARKER);
		goto yy4;
	case 'b':	goto yy5;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{}
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'c':	goto yy7;
	default:	goto yy3;
	}
yy5:
	++YYCURSOR;
	p = YYCTXMARKER + yyt0p;
	{ p }
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt0p = (YYCURSOR - YYCTXMARKER);
		goto yy9;
	case 'b':	goto yy5;
	default:	goto yy8;
	}
yy8:
	YYCURSOR = YYMARKER;
	goto yy3;
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':	goto yy7;
	default:	goto yy8;
	}
}



{
	YYCTYPE yych;
	YYCTXMARKER = YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy14;
	case 'b':
		yyt0p = (YYCURSOR - YYCTXMARKER);
		goto yy16;
	default:	goto yy12;
	}
yy12:
	++YYCURSOR;
yy13:
	{}
yy14:
	++YYCURSOR;
	p = YYCTXMARKER + yyt0p;
	{ p }
yy16:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'c':	goto yy17;
	default:	goto yy13;
	}
yy17:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy14;
	case 'b':
		yyt0p = (YYCURSOR - YYCTXMARKER);
		goto yy19;
	default:	goto yy18;
	}
yy18:
	YYCURSOR = YYMARKER;
	goto yy13;
yy19:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':	goto yy17;
	default:	goto yy18;
	}
}

