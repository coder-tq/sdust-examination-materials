/************************************************************
yyamucin.c
This file can be freely modified for the generation of
custom code.

[MBCS]

Copyright (c) 1999-2003 Bumble-Bee Software Ltd.
************************************************************/

#include "yympars.h"

#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif

_YL_BEGIN

#ifdef YYPROTOTYPE
YYEXPFUNC(YYBOOL) YYCDECL yymunclearin(yymparser_t YYFAR *yy)
#else
YYEXPFUNC(YYBOOL) YYCDECL yymunclearin(yy)
yymparser_t YYFAR *yy;
#endif
{
	yyassert(yy != NULL);
	if (!yy->yymlookahead && yy->yymchar != -1) {
		yy->yymlookahead = YYTRUE;
		return YYTRUE;
	}
	return YYFALSE;
}

_YL_END
