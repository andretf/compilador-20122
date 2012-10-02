%{
/*
	INF01147 - COMPILADORES - TURMA B
	PROFESSOR: Marcelo Johann
	SEMESTRE: 2012-2
	
	André Trindade Figueiredo
	Gustavo Schimid de Jesus
*/

#include <stdlib.h>
#include <string.h>
#include "hash.h"
#include "tokens.h"

int INT;
double FLOAT;
char CHAR;
int lineNumber = 0;
int running = 1;

int getLineNumber(void);
void initMe(void);
%}

digit     			[0-9]
alphabet			[a-zA-Z_]
alphanum			[A-Za-z0-9]

%x					COMMENT_N_LINES
%x					COMMENT_LINE

%%

int				{return KW_INT;}
float 				{return KW_FLOAT;}
bool				{return KW_BOOL;}
char				{return KW_CHAR;}
if				{return KW_IF;}
then				{return KW_THEN;}
else				{return KW_ELSE;}
while				{return KW_WHILE;}
do				{return KW_DO;}
input				{return KW_INPUT;}
output				{return KW_OUTPUT;}
return				{return KW_RETURN;}

"<="				{return OPERATOR_LE;}
">="				{return OPERATOR_GE;}
"=="				{return OPERATOR_EQ;}
"!="				{return OPERATOR_NE;}
"&&"				{return OPERATOR_AND;}
"||"				{return OPERATOR_OR;}

"-"					{return (int)yytext[0];}
","					{return (int)yytext[0];}
":"					{return (int)yytext[0];}
"("					{return (int)yytext[0];}
")"					{return (int)yytext[0];}
"["					{return (int)yytext[0];}
"]"					{return (int)yytext[0];}
"{"					{return (int)yytext[0];}
"}"					{return (int)yytext[0];}
"+"					{return (int)yytext[0];}
"*"					{return (int)yytext[0];}
\\					{return (int)yytext[0];}
"/"					{return (int)yytext[0];}
"<"					{return (int)yytext[0];}
">"					{return (int)yytext[0];}
"="					{return (int)yytext[0];}
"!"					{return (int)yytext[0];}
"&"					{return (int)yytext[0];}
"$"					{return (int)yytext[0];}
";"					{return (int)yytext[0];}



{alphabet}({alphabet}|{digit})* 		{
										char *tmp = (char *) malloc(sizeof(char)*strlen(yytext) + 1);
										sprintf(tmp, "%s", yytext);
										InsertSymbol(TK_IDENTIFIER, yytext);
										return (TK_IDENTIFIER);
										}

\'(\\.|[^\\"])\' 						{
										CHAR = yytext[1];
										InsertSymbol(CHAR, yytext);
										return (CHAR);
										}

\"(\\.|[^\\"])*\"						{
										char *tmp = (char *)malloc(sizeof(char)*strlen(yytext) + 1);
										sprintf(tmp, "%s", yytext);
										InsertSymbol(LIT_STRING, yytext);
										return(LIT_STRING);
										}

{digit}+ 								{
										INT = atoi(yytext);
										InsertSymbol(LIT_INTEGER, yytext);
										return (LIT_INTEGER);
										}

{digit}*\.{digit}+([eE][+-]{digit}+)?	{
										FLOAT = atof(yytext);
										InsertSymbol(LIT_FLOA, yytext);
										return (LIT_FLOA);
										}

"/*"									BEGIN(COMMENT_N_LINES);
<COMMENT_N_LINES>[^*\n]*			{ }
<COMMENT_N_LINES>"*"+[^/\n]*		{ }
<COMMENT_N_LINES>\n				{ ++lineNumber; }
<COMMENT_N_LINES>"*/"			{ BEGIN(INITIAL); }

"//"									BEGIN(COMMENT_LINE);
<COMMENT_LINE>[^\n]*				{ }
<COMMENT_LINE>\n					{ ++lineNumber; BEGIN(INITIAL); }

					
[ \t]		
\n										{ lineNumber++; }
. 										{ printf("Erro léxico: identificador %c não reconhecido.\n", yytext[0]); return -1; }

%%

int yywrap(void) {
	running = 0;
	return 1;
}

void initMe(void) {
	running = 1;
	initHashTable(hashTable);
}

int getLineNumber(void){
	return lineNumber;
}
