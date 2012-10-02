%{

// INF01147 - Compiladores
// Nome: Vítor De Araújo

#include <stdio.h>
#include <stdlib.h>
#include "htable.h"
#include "scanner.h"
// #include "syntax.h"
#include "lispdata.c"
int yylex(void);
void yyerror(char *);
extern char *yytext;

%}

%token KW_INT        256
%token KW_FLOAT      257
%token KW_BOOL       258
%token KW_CHAR       259
%token KW_IF         261
%token KW_THEN       262
%token KW_ELSE       263
%token KW_WHILE      264
%token KW_DO         265
%token KW_PRINT      266
%token KW_RETURN     267
%token KW_READ       268

%token OPERATOR_LE   270
%token OPERATOR_GE   271
%token OPERATOR_EQ   272
%token OPERATOR_NE   273
%token OPERATOR_AND  274
%token OPERATOR_OR   275

%token <symbol> TK_IDENTIFIER 280
%token <symbol> LIT_INTEGER   281
%token LIT_FLOAT     282
%token LIT_FALSE     283
%token LIT_TRUE      284
%token <symbol> LIT_CHAR      285
%token <symbol> LIT_STRING    286

%token TOKEN_ERROR   290


%union {
	struct hnode_t *symbol;
	struct ldata_t *syntax;
	int num;
}

%left OPERATOR_OR
%left OPERATOR_AND
%nonassoc OPERATOR_EQ OPERATOR_NE
%nonassoc '<' '>' OPERATOR_LE OPERATOR_GE
%left '!'
%left '+' '-'
%left '*' '/' '%'
%left UNARY_MINUS

%type <syntax> atom expr arguments arg_list if_statement while_statement command simple_statement  command_list commands block empty_command lvalue identifier type vardecl fundecl parameters param_list param toplevel_decl toplevel_decls program

//%type <symbol> 

%%

program: toplevel_decls 
    {
    	print_ldata(cons(l_atom("program"), $1));
    	putchar('\n');
    } ;

toplevel_decls : /* nil */ { $$ = NULL; }
               | toplevel_decl toplevel_decls { $$ = cons($1, $2); }
               ;

toplevel_decl : vardecl | fundecl ;

vardecl : type identifier ';' 
    { $$ = cons(l_atom("defvar"), cons($1, cons($2, NULL))); }
        | type identifier '[' LIT_INTEGER ']' ';'
    { $$ = cons(l_atom("defvector"), cons($1, cons($2, cons(l_int($4->value.v_int), NULL)))); }
        ;

fundecl : type identifier '(' parameters ')' command
    { $$ = cons(l_atom("defun"), cons($1, cons($2, cons($4, cons($6, NULL))))); }
    ;

parameters : /* nil */ { $$ = NULL; }
           | param_list ;

param_list : param { $$ = cons($1, NULL); }
           | param ',' param_list { $$ = cons($1, $3); }
           ;

param : type identifier { $$ = cons($1, cons($2, NULL)); }

type : KW_INT { $$ = l_atom("int"); }
     | KW_CHAR { $$ = l_atom("char"); }
     ;

identifier : TK_IDENTIFIER { $$ = l_atom($1->key); } ;

command: simple_statement | block | empty_command;

block : '{' commands '}' { $$ = cons(l_atom("block"), $2); }

commands : command_list  /* NOTE: is {} a block with zero or one (empty) command? */
         ;

command_list : command { $$ = cons($1, NULL); }
             | command ';' command_list { $$ = cons($1, $3); } 
             ;

empty_command: /* nil */ { $$ = l_atom("nop"); }

simple_statement : expr
                 | KW_RETURN expr      { $$ = cons(l_atom("return"), cons($2, NULL)); }
                 | KW_READ lvalue      { $$ = cons(l_atom("read"), cons($2, NULL)); }
                 | KW_PRINT expr       { $$ = cons(l_atom("print"), cons($2, NULL)); }
                 | lvalue '=' expr     { $$ = cons(l_atom("setf"), cons($1, cons($3, NULL))); }
                 | if_statement
                 | while_statement
                 ;

lvalue : identifier
       | identifier '[' expr ']' { $$ = cons(l_atom("aref"), cons($1, cons ($3, NULL))); }
       ;

if_statement : KW_IF '(' expr ')' KW_THEN command
                 { $$ = cons(l_atom("if"), cons($3, cons($6, NULL))); }
             | KW_IF '(' expr ')' KW_THEN command KW_ELSE command
                 { $$ = cons(l_atom("if"), cons($3, cons($6, cons($8, NULL)))); }
             ;

while_statement : KW_WHILE '(' expr ')' command
                    { $$ = cons(l_atom("while"), cons($3, cons($5, NULL))); }

expr : atom  { $$ = $1; }
     | identifier '[' expr ']'
             { $$ = cons(l_atom("aref"), cons($1, cons($3, NULL))); }
     | identifier '(' arguments ')'
             { $$ = cons(l_atom("funcall"), cons($1, $3)); }
     | expr '+' expr { $$ = cons(l_atom("+"), cons($1, cons($3, NULL))); }
     | expr '-' expr { $$ = cons(l_atom("-"), cons($1, cons($3, NULL))); }
     | expr '*' expr { $$ = cons(l_atom("*"), cons($1, cons($3, NULL))); }
     | expr '/' expr { $$ = cons(l_atom("/"), cons($1, cons($3, NULL))); }
     | expr '%' expr { $$ = cons(l_atom("%"), cons($1, cons($3, NULL))); }
     | expr '<' expr { $$ = cons(l_atom("<"), cons($1, cons($3, NULL))); }
     | expr '>' expr { $$ = cons(l_atom(">"), cons($1, cons($3, NULL))); }
     | expr OPERATOR_LE  expr { $$ = cons(l_atom("<="), cons($1, cons($3, NULL))); }
     | expr OPERATOR_GE  expr { $$ = cons(l_atom(">="), cons($1, cons($3, NULL))); }
     | expr OPERATOR_EQ  expr { $$ = cons(l_atom("=="), cons($1, cons($3, NULL))); }
     | expr OPERATOR_NE  expr { $$ = cons(l_atom("!="), cons($1, cons($3, NULL))); }
     | expr OPERATOR_AND expr { $$ = cons(l_atom("and"), cons($1, cons($3, NULL))); }
     | expr OPERATOR_OR  expr { $$ = cons(l_atom("or"), cons($1, cons($3, NULL))); }
     | '!' expr { $$ = cons(l_atom("not"), cons($2, NULL)); }
     | '-' expr %prec UNARY_MINUS { $$ = cons(l_atom("-"), cons($2, NULL)); }
     | '(' expr ')'
             { $$ = $2; }
     ;

atom : TK_IDENTIFIER { $$ = l_atom($1->key); }
     | LIT_INTEGER   { $$ = l_int($1->value.v_int); }
     | LIT_CHAR      { $$ = l_char($1->value.v_char); }
     | LIT_STRING    { $$ = l_string($1->value.v_string); }
     ;

/*binop : '+' | '-' | '*' | '/' | '%' | '<' | '=' | '>' | '!'
      | OPERATOR_LE | OPERATOR_GE | OPERATOR_EQ | OPERATOR_NE | OPERATOR_AND | OPERATOR_OR ; */

arguments : /* nil */ { $$ = NULL; }
          | arg_list  { $$ = $1; }

arg_list : expr     
              { $$ = cons($1, NULL); }
         | expr ',' arg_list
              { $$ = cons($1, $3); }
         ;

%%

void yyerror(char *s) {
	fprintf(stderr, "Erro na linha %d: %s\n", getLineNumber(), s);
	exit(3);
}
