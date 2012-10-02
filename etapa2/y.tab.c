
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"


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



/* Line 189 of yacc.c  */
#line 91 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 49 "parser.y"

	struct hnode_t *symbol;
	struct ldata_t *syntax;
	int num;



/* Line 214 of yacc.c  */
#line 193 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 205 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   348

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNRULES -- Number of states.  */
#define YYNSTATES  120

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,     2,     2,    36,     2,     2,
      41,    42,    34,    32,    43,    33,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
      29,    46,    30,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     4,     5,     6,
       2,     7,     8,     9,    10,    11,    12,    13,    14,     2,
      15,    16,    17,    18,    19,    20,     2,     2,     2,     2,
      21,    22,    23,    24,    25,    26,    27,     2,     2,     2,
      28,     1,     2,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    11,    13,    17,    24,
      31,    32,    34,    36,    40,    43,    45,    47,    49,    51,
      53,    55,    59,    61,    63,    67,    68,    70,    73,    76,
      79,    83,    85,    87,    89,    94,   101,   110,   116,   118,
     123,   128,   132,   136,   140,   144,   148,   152,   156,   160,
     164,   168,   172,   176,   180,   183,   186,   190,   192,   194,
     196,   198,   199,   201,   203
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    -1,    -1,    50,    49,    -1,    51,
      -1,    52,    -1,    56,    57,    38,    -1,    56,    57,    39,
      22,    40,    38,    -1,    56,    57,    41,    53,    42,    58,
      -1,    -1,    54,    -1,    55,    -1,    55,    43,    54,    -1,
      56,    57,    -1,     3,    -1,     6,    -1,    21,    -1,    63,
      -1,    59,    -1,    62,    -1,    44,    60,    45,    -1,    61,
      -1,    58,    -1,    58,    38,    61,    -1,    -1,    67,    -1,
      13,    67,    -1,    14,    64,    -1,    12,    67,    -1,    64,
      46,    67,    -1,    65,    -1,    66,    -1,    57,    -1,    57,
      39,    67,    40,    -1,     7,    41,    67,    42,     8,    58,
      -1,     7,    41,    67,    42,     8,    58,     9,    58,    -1,
      10,    41,    67,    42,    58,    -1,    68,    -1,    57,    39,
      67,    40,    -1,    57,    41,    69,    42,    -1,    67,    32,
      67,    -1,    67,    33,    67,    -1,    67,    34,    67,    -1,
      67,    35,    67,    -1,    67,    36,    67,    -1,    67,    29,
      67,    -1,    67,    30,    67,    -1,    67,    15,    67,    -1,
      67,    16,    67,    -1,    67,    17,    67,    -1,    67,    18,
      67,    -1,    67,    19,    67,    -1,    67,    20,    67,    -1,
      31,    67,    -1,    33,    67,    -1,    41,    67,    42,    -1,
      21,    -1,    22,    -1,    26,    -1,    27,    -1,    -1,    70,
      -1,    67,    -1,    67,    43,    70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    70,    70,    76,    77,    80,    80,    82,    84,    88,
      92,    93,    95,    96,    99,   101,   102,   105,   107,   107,
     107,   109,   111,   114,   115,   118,   120,   121,   122,   123,
     124,   125,   126,   129,   130,   133,   135,   139,   142,   143,
     145,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   166,   167,   168,
     169,   175,   176,   178,   180
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_INT", "KW_FLOAT", "KW_BOOL",
  "KW_CHAR", "KW_IF", "KW_THEN", "KW_ELSE", "KW_WHILE", "KW_DO",
  "KW_PRINT", "KW_RETURN", "KW_READ", "OPERATOR_LE", "OPERATOR_GE",
  "OPERATOR_EQ", "OPERATOR_NE", "OPERATOR_AND", "OPERATOR_OR",
  "TK_IDENTIFIER", "LIT_INTEGER", "LIT_FLOAT", "LIT_FALSE", "LIT_TRUE",
  "LIT_CHAR", "LIT_STRING", "TOKEN_ERROR", "'<'", "'>'", "'!'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "UNARY_MINUS", "';'", "'['", "']'", "'('",
  "')'", "','", "'{'", "'}'", "'='", "$accept", "program",
  "toplevel_decls", "toplevel_decl", "vardecl", "fundecl", "parameters",
  "param_list", "param", "type", "identifier", "command", "block",
  "commands", "command_list", "empty_command", "simple_statement",
  "lvalue", "if_statement", "while_statement", "expr", "atom", "arguments",
  "arg_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   291,   292,   256,   257,   258,   259,   261,   262,   263,
     264,   265,   266,   267,   268,   270,   271,   272,   273,   274,
     275,   280,   281,   282,   283,   284,   285,   286,   290,    60,
      62,    33,    43,    45,    42,    47,    37,   293,    59,    91,
      93,    40,    41,    44,   123,   125,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    51,    52,
      53,    53,    54,    54,    55,    56,    56,    57,    58,    58,
      58,    59,    60,    61,    61,    62,    63,    63,    63,    63,
      63,    63,    63,    64,    64,    65,    65,    66,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    68,    68,    68,
      68,    69,    69,    70,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     3,     6,     6,
       0,     1,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     3,     0,     1,     2,     2,     2,
       3,     1,     1,     1,     4,     6,     8,     5,     1,     4,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     3,     1,     1,     1,
       1,     0,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    15,    16,     0,     2,     3,     5,     6,     0,     1,
       4,    17,     0,     7,     0,    10,     0,     0,    11,    12,
       0,     0,    25,     0,    14,     8,     0,     0,     0,     0,
       0,    57,    58,    59,    60,     0,     0,     0,    25,    33,
       9,    19,    20,    18,     0,    31,    32,    26,    38,    13,
       0,     0,     0,    29,    27,    33,    28,    54,    55,     0,
      23,     0,    22,     0,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    25,    21,     0,    63,     0,    62,
      30,    48,    49,    50,    51,    52,    53,    46,    47,    41,
      42,    43,    44,    45,     0,    25,     0,     0,    24,    39,
       0,    40,    25,    37,    39,    34,    64,    35,    25,    36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,    17,    18,    19,     8,
      52,    60,    41,    61,    62,    42,    43,    44,    45,    46,
      47,    48,    88,    89
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -27
static const yytype_int16 yypact[] =
{
       2,   -27,   -27,     1,   -27,     2,   -27,   -27,   -17,   -27,
     -27,   -27,    -2,   -27,    -3,     2,   -11,   -14,   -27,    -5,
     -17,    -4,    68,     2,   -27,   -27,    19,    20,    46,    46,
     -17,    -6,   -27,   -27,   -27,    46,    46,    46,    68,   -26,
     -27,   -27,   -27,   -27,    23,   -27,   -27,   282,   -27,   -27,
      46,    46,    25,   282,   282,    26,   -27,   110,   -27,   120,
      32,    29,   -27,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,   148,
     176,    46,    46,   -27,    68,   -27,   204,    98,    41,   -27,
     282,    -9,    -9,    90,    90,   312,   290,    -9,    -9,     7,
       7,   -27,   -27,   -27,    63,    68,   230,   256,   -27,    38,
      46,   -27,    68,   -27,   -27,   -27,   -27,    77,    68,   -27
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -27,   -27,    83,   -27,   -27,   -27,   -27,    70,   -27,   -12,
      -8,   -20,   -27,   -27,    12,   -27,   -27,    72,   -27,   -27,
     -19,   -27,   -27,   -10
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -35
static const yytype_int8 yytable[] =
{
      12,     9,    40,    20,    11,     1,   -35,   -35,     2,    53,
      54,    20,    24,    63,    39,    64,    57,    58,    59,    16,
     -35,   -35,    55,    74,    75,    76,    77,    78,    22,    21,
      39,    79,    80,   -17,    25,   -17,    13,    14,    23,    15,
     -17,    76,    77,    78,    86,    87,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      50,    51,   106,   107,    81,    82,    64,    31,    32,    65,
      84,   112,    33,    34,    85,    26,    39,    35,    27,    36,
      28,    29,    30,   111,   -34,   113,   118,    37,    10,    31,
      32,    87,   117,    49,    33,    34,   108,    39,   119,    35,
     116,    36,    56,     0,    39,    66,    67,   -35,   -35,    37,
      39,     0,    38,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,    76,    77,    78,    72,    73,     0,
      74,    75,    76,    77,    78,    66,    67,    68,    69,    70,
      71,   110,    74,    75,    76,    77,    78,     0,     0,    72,
      73,     0,    74,    75,    76,    77,    78,     0,     0,     0,
       0,     0,    83,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,     0,
      74,    75,    76,    77,    78,     0,     0,     0,     0,     0,
     104,    66,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,     0,    74,    75,
      76,    77,    78,     0,     0,     0,     0,     0,   105,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,     0,    74,    75,    76,    77,
      78,     0,     0,     0,   109,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,     0,    74,    75,    76,    77,    78,     0,     0,     0,
     114,    66,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,     0,    74,    75,
      76,    77,    78,     0,     0,     0,   115,    66,    67,    68,
      69,    70,    71,     0,     0,    66,    67,    68,    69,    70,
       0,    72,    73,     0,    74,    75,    76,    77,    78,    72,
      73,     0,    74,    75,    76,    77,    78,    66,    67,    68,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,     0,    74,    75,    76,    77,    78
};

static const yytype_int8 yycheck[] =
{
       8,     0,    22,    15,    21,     3,    15,    16,     6,    28,
      29,    23,    20,    39,    22,    41,    35,    36,    37,    22,
      29,    30,    30,    32,    33,    34,    35,    36,    42,    40,
      38,    50,    51,    39,    38,    41,    38,    39,    43,    41,
      46,    34,    35,    36,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      41,    41,    81,    82,    39,    39,    41,    21,    22,    46,
      38,     8,    26,    27,    45,     7,    84,    31,    10,    33,
      12,    13,    14,    42,    46,   105,     9,    41,     5,    21,
      22,   110,   112,    23,    26,    27,    84,   105,   118,    31,
     110,    33,    30,    -1,   112,    15,    16,    17,    18,    41,
     118,    -1,    44,    15,    16,    17,    18,    19,    20,    29,
      30,    -1,    32,    33,    34,    35,    36,    29,    30,    -1,
      32,    33,    34,    35,    36,    15,    16,    17,    18,    19,
      20,    43,    32,    33,    34,    35,    36,    -1,    -1,    29,
      30,    -1,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    42,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      42,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    -1,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    40,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    -1,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      40,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    40,    15,    16,    17,
      18,    19,    20,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    29,    30,    -1,    32,    33,    34,    35,    36,    29,
      30,    -1,    32,    33,    34,    35,    36,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    -1,    32,    33,    34,    35,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,    48,    49,    50,    51,    52,    56,     0,
      49,    21,    57,    38,    39,    41,    22,    53,    54,    55,
      56,    40,    42,    43,    57,    38,     7,    10,    12,    13,
      14,    21,    22,    26,    27,    31,    33,    41,    44,    57,
      58,    59,    62,    63,    64,    65,    66,    67,    68,    54,
      41,    41,    57,    67,    67,    57,    64,    67,    67,    67,
      58,    60,    61,    39,    41,    46,    15,    16,    17,    18,
      19,    20,    29,    30,    32,    33,    34,    35,    36,    67,
      67,    39,    39,    42,    38,    45,    67,    67,    69,    70,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    42,    42,    67,    67,    61,    40,
      43,    42,     8,    58,    40,    40,    70,    58,     9,    58
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 71 "parser.y"
    {
    	print_ldata(cons(l_atom("program"), (yyvsp[(1) - (1)].syntax)));
    	putchar('\n');
    }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    { (yyval.syntax) = NULL; }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    { (yyval.syntax) = cons((yyvsp[(1) - (2)].syntax), (yyvsp[(2) - (2)].syntax)); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 83 "parser.y"
    { (yyval.syntax) = cons(l_atom("defvar"), cons((yyvsp[(1) - (3)].syntax), cons((yyvsp[(2) - (3)].syntax), NULL))); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    { (yyval.syntax) = cons(l_atom("defvector"), cons((yyvsp[(1) - (6)].syntax), cons((yyvsp[(2) - (6)].syntax), cons(l_int((yyvsp[(4) - (6)].symbol)->value.v_int), NULL)))); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    { (yyval.syntax) = cons(l_atom("defun"), cons((yyvsp[(1) - (6)].syntax), cons((yyvsp[(2) - (6)].syntax), cons((yyvsp[(4) - (6)].syntax), cons((yyvsp[(6) - (6)].syntax), NULL))))); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    { (yyval.syntax) = NULL; }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    { (yyval.syntax) = cons((yyvsp[(1) - (1)].syntax), NULL); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    { (yyval.syntax) = cons((yyvsp[(1) - (3)].syntax), (yyvsp[(3) - (3)].syntax)); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    { (yyval.syntax) = cons((yyvsp[(1) - (2)].syntax), cons((yyvsp[(2) - (2)].syntax), NULL)); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    { (yyval.syntax) = l_atom("int"); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    { (yyval.syntax) = l_atom("char"); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 105 "parser.y"
    { (yyval.syntax) = l_atom((yyvsp[(1) - (1)].symbol)->key); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 109 "parser.y"
    { (yyval.syntax) = cons(l_atom("block"), (yyvsp[(2) - (3)].syntax)); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    { (yyval.syntax) = cons((yyvsp[(1) - (1)].syntax), NULL); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    { (yyval.syntax) = cons((yyvsp[(1) - (3)].syntax), (yyvsp[(3) - (3)].syntax)); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    { (yyval.syntax) = l_atom("nop"); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    { (yyval.syntax) = cons(l_atom("return"), cons((yyvsp[(2) - (2)].syntax), NULL)); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    { (yyval.syntax) = cons(l_atom("read"), cons((yyvsp[(2) - (2)].syntax), NULL)); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    { (yyval.syntax) = cons(l_atom("print"), cons((yyvsp[(2) - (2)].syntax), NULL)); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    { (yyval.syntax) = cons(l_atom("setf"), cons((yyvsp[(1) - (3)].syntax), cons((yyvsp[(3) - (3)].syntax), NULL))); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    { (yyval.syntax) = cons(l_atom("aref"), cons((yyvsp[(1) - (4)].syntax), cons ((yyvsp[(3) - (4)].syntax), NULL))); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    { (yyval.syntax) = cons(l_atom("if"), cons((yyvsp[(3) - (6)].syntax), cons((yyvsp[(6) - (6)].syntax), NULL))); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 136 "parser.y"
    { (yyval.syntax) = cons(l_atom("if"), cons((yyvsp[(3) - (8)].syntax), cons((yyvsp[(6) - (8)].syntax), cons((yyvsp[(8) - (8)].syntax), NULL)))); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 140 "parser.y"
    { (yyval.syntax) = cons(l_atom("while"), cons((yyvsp[(3) - (5)].syntax), cons((yyvsp[(5) - (5)].syntax), NULL))); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 142 "parser.y"
    { (yyval.syntax) = (yyvsp[(1) - (1)].syntax); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    { (yyval.syntax) = cons(l_atom("aref"), cons((yyvsp[(1) - (4)].syntax), cons((yyvsp[(3) - (4)].syntax), NULL))); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 146 "parser.y"
    { (yyval.syntax) = cons(l_atom("funcall"), cons((yyvsp[(1) - (4)].syntax), (yyvsp[(3) - (4)].syntax))); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 147 "parser.y"
    { (yyval.syntax) = cons(l_atom("+"), cons((yyvsp[(1) - (3)].syntax), cons((yyvsp[(3) - (3)].syntax), NULL))); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 148 "parser.y"
    { (yyval.syntax) = cons(l_atom("-"), cons((yyvsp[(1) - (3)].syntax), cons((yyvsp[(3) - (3)].syntax), NULL))); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    { (yyval.syntax) = cons(l_atom("*"), cons((yyvsp[(1) - (3)].syntax), cons((yyvsp[(3) - (3)].syntax), NULL))); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    { (yyval.syntax) = cons(l_atom("/"), cons((yyvsp[(1) - (3)].syntax), cons((yyvsp[(3) - (3)].syntax), NULL))); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 151 "parser.y"
    { (yyval.syntax) = cons(l_atom("%"), cons((yyvsp[(1) - (3)].syntax), cons((yyvsp[(3) - (3)].syntax), NULL))); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 152 "parser.y"
    { (yyval.syntax) = cons(l_atom("<"), cons((yyvsp[(1) - (3)].syntax), cons((yyvsp[(3) - (3)].syntax), NULL))); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 153 "parser.y"
    { (yyval.syntax) = cons(l_atom(">"), cons((yyvsp[(1) - (3)].syntax), cons((yyvsp[(3) - (3)].syntax), NULL))); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 154 "parser.y"
    { (yyval.syntax) = cons(l_atom("<="), cons((yyvsp[(1) - (3)].syntax), cons((yyvsp[(3) - (3)].syntax), NULL))); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    { (yyval.syntax) = cons(l_atom(">="), cons((yyvsp[(1) - (3)].syntax), cons((yyvsp[(3) - (3)].syntax), NULL))); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 156 "parser.y"
    { (yyval.syntax) = cons(l_atom("=="), cons((yyvsp[(1) - (3)].syntax), cons((yyvsp[(3) - (3)].syntax), NULL))); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 157 "parser.y"
    { (yyval.syntax) = cons(l_atom("!="), cons((yyvsp[(1) - (3)].syntax), cons((yyvsp[(3) - (3)].syntax), NULL))); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 158 "parser.y"
    { (yyval.syntax) = cons(l_atom("and"), cons((yyvsp[(1) - (3)].syntax), cons((yyvsp[(3) - (3)].syntax), NULL))); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 159 "parser.y"
    { (yyval.syntax) = cons(l_atom("or"), cons((yyvsp[(1) - (3)].syntax), cons((yyvsp[(3) - (3)].syntax), NULL))); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    { (yyval.syntax) = cons(l_atom("not"), cons((yyvsp[(2) - (2)].syntax), NULL)); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 161 "parser.y"
    { (yyval.syntax) = cons(l_atom("-"), cons((yyvsp[(2) - (2)].syntax), NULL)); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 163 "parser.y"
    { (yyval.syntax) = (yyvsp[(2) - (3)].syntax); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
    { (yyval.syntax) = l_atom((yyvsp[(1) - (1)].symbol)->key); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 167 "parser.y"
    { (yyval.syntax) = l_int((yyvsp[(1) - (1)].symbol)->value.v_int); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 168 "parser.y"
    { (yyval.syntax) = l_char((yyvsp[(1) - (1)].symbol)->value.v_char); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 169 "parser.y"
    { (yyval.syntax) = l_string((yyvsp[(1) - (1)].symbol)->value.v_string); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    { (yyval.syntax) = NULL; }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    { (yyval.syntax) = (yyvsp[(1) - (1)].syntax); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    { (yyval.syntax) = cons((yyvsp[(1) - (1)].syntax), NULL); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    { (yyval.syntax) = cons((yyvsp[(1) - (3)].syntax), (yyvsp[(3) - (3)].syntax)); }
    break;



/* Line 1455 of yacc.c  */
#line 1917 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 184 "parser.y"


void yyerror(char *s) {
	fprintf(stderr, "Erro na linha %d: %s\n", getLineNumber(), s);
	exit(3);
}

