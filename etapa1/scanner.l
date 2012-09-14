%{

#include "tokens.h"
#include "hash.c"

#define TRUE 1
#define FALSE 0

int running = TRUE;
int lineNumber = 1;

int getLineNumber (void) { return lineNumber; }

%}

%x COMM

%%

integer		{ return KW_INTEGER; }
floating		{ return KW_FLOATING; }
boolean		{ return KW_BOOLEAN; }
character		{ return KW_CHARACTER; }
declare		{ return KW_DECLARE; }
if			{ return KW_IF; }
then			{ return KW_THEN; }
else			{ return KW_ELSE; }
while			{ return KW_WHILE; }
do			{ return KW_DO; }
input			{ return KW_INPUT; }
return		{ return KW_RETURN; }
output		{ return KW_OUTPUT; }

[0-9]+		{ hashAdd(yytext, LIT_INTEGER); return LIT_INTEGER; }
[0-9]+\.[0-9]+	{ hashAdd(yytext, LIT_FLOATING); return LIT_FLOATING; }
false			{ return LIT_FALSE; }
true			{ return LIT_TRUE; }
\'.\'			{ hashAdd(yytext, LIT_CHARACTER); return LIT_CHARACTER; }
\".*\"		{ hashAdd(yytext, LIT_STRING); return LIT_STRING; }

[,;:\(\)\[\]{}+\-*/<>=!&$]	{ return yytext[0]; }

"<="			{ return OPERATOR_LE; }
">="			{ return OPERATOR_GE; }
"=="			{ return OPERATOR_EQ; }
"!="			{ return OPERATOR_NE; }
"&&"			{ return OPERATOR_AND; }
"||"			{ return OPERATOR_OR; }			
"\n"			{ ++lineNumber; }

[a-zA-Z][a-zA-Z0-9_]*	{ hashAdd(yytext, TK_IDENTIFIER); return TK_IDENTIFIER; }

"//".*
"/*"		BEGIN(COMM);
<COMM>"*/"	BEGIN(INITIAL);
<COMM>"\n"	{ ++lineNumber; }
<COMM>.

(" "|"\t"|"\r"|"\n")
.				{ return TOKEN_ERROR; }

%%

#include "main.c"

int yywrap() {
	return 1;
}

void initMe() {
	hashInit();
}
