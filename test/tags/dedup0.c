/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{}
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':	goto yy5;
	case 'b':
		YYCTXMARKER = YYCURSOR;
		goto yy7;
	case 'c':
		YYCTXMARKER = YYCURSOR;
		goto yy10;
	default:	goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'z':
		YYCTXMARKER = YYCURSOR;
		goto yy13;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	goto yy3;
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy7;
	default:	goto yy9;
	}
yy9:
	YYCURSOR = YYCTXMARKER;
	{}
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':	goto yy10;
	default:	goto yy12;
	}
yy12:
	YYCURSOR = YYCTXMARKER;
	{}
yy13:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'z':	goto yy13;
	default:	goto yy15;
	}
yy15:
	YYCURSOR = YYCTXMARKER;
	{}
}
