
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     KW_INT = 256,
     KW_FLOAT = 257,
     KW_BOOL = 258,
     KW_CHAR = 259,
     KW_IF = 261,
     KW_THEN = 262,
     KW_ELSE = 263,
     KW_WHILE = 264,
     KW_DO = 265,
     KW_PRINT = 266,
     KW_RETURN = 267,
     KW_READ = 268,
     OPERATOR_LE = 270,
     OPERATOR_GE = 271,
     OPERATOR_EQ = 272,
     OPERATOR_NE = 273,
     OPERATOR_AND = 274,
     OPERATOR_OR = 275,
     TK_IDENTIFIER = 280,
     LIT_INTEGER = 281,
     LIT_FLOAT = 282,
     LIT_FALSE = 283,
     LIT_TRUE = 284,
     LIT_CHAR = 285,
     LIT_STRING = 286,
     TOKEN_ERROR = 290,
     UNARY_MINUS = 293
   };
#endif
/* Tokens.  */
#define KW_INT 256
#define KW_FLOAT 257
#define KW_BOOL 258
#define KW_CHAR 259
#define KW_IF 261
#define KW_THEN 262
#define KW_ELSE 263
#define KW_WHILE 264
#define KW_DO 265
#define KW_PRINT 266
#define KW_RETURN 267
#define KW_READ 268
#define OPERATOR_LE 270
#define OPERATOR_GE 271
#define OPERATOR_EQ 272
#define OPERATOR_NE 273
#define OPERATOR_AND 274
#define OPERATOR_OR 275
#define TK_IDENTIFIER 280
#define LIT_INTEGER 281
#define LIT_FLOAT 282
#define LIT_FALSE 283
#define LIT_TRUE 284
#define LIT_CHAR 285
#define LIT_STRING 286
#define TOKEN_ERROR 290
#define UNARY_MINUS 293




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 49 "parser.y"

	struct hnode_t *symbol;
	struct ldata_t *syntax;
	int num;



/* Line 1676 of yacc.c  */
#line 118 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


