/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "parser.y"

	#include<stdio.h>
	#include<math.h> 
	#include<stdlib.h>
	#include<string.h>
	#include <cstdio>
	#include <iostream>

	using namespace std;
	#include"lex.yy.c"
	
	extern int yyparse();
	extern FILE *yyin;
    FILE *outputFile;

	void yyerror(const char *s);
	int yylex();
	int yywrap();

/* Line 371 of yacc.c  */
#line 88 "parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT_NUMBER = 258,
     REAL_NUMBER = 259,
     STR = 260,
     CHARACTER = 261,
     TRUE = 262,
     FALSE = 263,
     VAR = 264,
     INT = 265,
     REAL = 266,
     STRING = 267,
     CHAR = 268,
     BOOLEAN = 269,
     BEGINPROGRAM = 270,
     ENDBLOCK = 271,
     NEWLINE = 272,
     FUNC = 273,
     REPEAT = 274,
     WHILE = 275,
     IF = 276,
     ELSE = 277,
     RETURN = 278,
     PRINT = 279,
     SCAN = 280,
     ASSIGN = 281,
     RETURNTYPE = 282,
     SUM = 283,
     SUBTRACTION = 284,
     MULTIPLICATION = 285,
     DIVISION = 286,
     EXPONENTIATION = 287,
     RESTDIV = 288,
     QUESTION = 289,
     GT = 290,
     LT = 291,
     LE = 292,
     GE = 293,
     NE = 294,
     EQ = 295,
     AND = 296,
     OR = 297,
     NEG = 298,
     COLON = 299,
     OPENPAR = 300,
     CLOSEPAR = 301,
     OPENBR = 302,
     CLOSEBR = 303,
     OPENCUR = 304,
     CLOSECUR = 305,
     SEPARATOR = 306,
     DECIMAL = 307
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 22 "parser.y"
//used for semantic analysis to identify numbers, symbols, text, etc.
    char *str_val;


/* Line 387 of yacc.c  */
#line 188 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 216 "parser.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   204

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    10,    12,    15,    19,    21,    23,
      25,    27,    29,    31,    33,    35,    37,    39,    43,    47,
      51,    55,    59,    65,    71,    77,    83,    89,    95,    96,
     108,   110,   112,   114,   116,   118,   120,   122,   124,   126,
     128,   130,   132,   134,   136,   138,   140,   142,   144,   146,
     148,   152,   154,   156,   160,   162,   164,   166,   168,   170,
     172,   174,   176,   180,   183,   187,   190,   192,   194,   196,
     200,   202,   204,   206,   208,   210,   212,   214,   216,   220,
     226,   232,   238,   244,   245,   250,   251,   252,   260,   261,
     262,   269,   270,   271,   277,   278,   282,   283,   287,   290,
     292
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    -1,    15,     9,    44,    55,    56,    -1,
      16,    -1,    17,    56,    -1,    57,    17,    56,    -1,    58,
      -1,    67,    -1,    78,    -1,    80,    -1,    83,    -1,    86,
      -1,    77,    -1,    90,    -1,    59,    -1,    60,    -1,     9,
      44,    10,    -1,     9,    44,    11,    -1,     9,    44,    12,
      -1,     9,    44,    13,    -1,     9,    44,    14,    -1,     9,
      44,    10,    26,     3,    -1,     9,    44,    11,    26,     4,
      -1,     9,    44,    12,    26,     5,    -1,     9,    44,    13,
      26,     6,    -1,     9,    44,    14,    26,     7,    -1,     9,
      44,    14,    26,     8,    -1,    -1,     9,    44,    62,    26,
       9,    61,     9,    44,    62,    26,    63,    -1,    12,    -1,
      14,    -1,    10,    -1,    11,    -1,    13,    -1,    64,    -1,
      67,    -1,    77,    -1,    65,    -1,     5,    -1,     6,    -1,
      66,    -1,     4,    -1,     3,    -1,     7,    -1,     8,    -1,
       9,    -1,    68,    -1,    71,    -1,    74,    -1,    68,    70,
      68,    -1,    65,    -1,     9,    -1,    69,    68,    69,    -1,
      45,    -1,    46,    -1,    28,    -1,    29,    -1,    30,    -1,
      31,    -1,    32,    -1,    33,    -1,    69,    67,    69,    -1,
      72,     9,    -1,    67,    73,    67,    -1,    72,    72,    -1,
      43,    -1,    41,    -1,    42,    -1,    75,    76,    75,    -1,
      66,    -1,    67,    -1,    35,    -1,    36,    -1,    37,    -1,
      38,    -1,    39,    -1,    40,    -1,     9,    26,    25,    -1,
       9,    44,    12,    26,    25,    -1,     9,    44,    10,    26,
      25,    -1,     9,    44,    11,    26,    25,    -1,     9,    44,
      13,    26,    25,    -1,    -1,     9,    26,    79,    63,    -1,
      -1,    -1,    20,    81,    71,    19,    44,    82,    56,    -1,
      -1,    -1,    21,    84,    71,    34,    85,    56,    -1,    -1,
      -1,    22,    87,    44,    88,    56,    -1,    -1,    22,    89,
      83,    -1,    -1,    24,    91,    92,    -1,    92,    92,    -1,
      67,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    35,    35,    35,    38,    39,    40,    43,    44,    45,
      46,    47,    48,    49,    50,    53,    54,    57,    60,    63,
      66,    69,    74,    77,    80,    83,    86,    89,    92,    92,
     101,   103,   105,   107,   109,   113,   115,   117,   121,   122,
     124,   126,   129,   131,   135,   136,   139,   140,   141,   142,
     145,   146,   147,   148,   151,   152,   155,   156,   157,   158,
     159,   160,   163,   164,   165,   168,   169,   172,   174,   178,
     181,   182,   185,   186,   187,   188,   189,   190,   193,   196,
     199,   202,   205,   210,   210,   214,   214,   214,   217,   217,
     217,   220,   220,   220,   221,   221,   224,   224,   227,   228,
     229
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT_NUMBER", "REAL_NUMBER", "STR",
  "CHARACTER", "TRUE", "FALSE", "VAR", "INT", "REAL", "STRING", "CHAR",
  "BOOLEAN", "BEGINPROGRAM", "ENDBLOCK", "NEWLINE", "FUNC", "REPEAT",
  "WHILE", "IF", "ELSE", "RETURN", "PRINT", "SCAN", "ASSIGN", "RETURNTYPE",
  "SUM", "SUBTRACTION", "MULTIPLICATION", "DIVISION", "EXPONENTIATION",
  "RESTDIV", "QUESTION", "GT", "LT", "LE", "GE", "NE", "EQ", "AND", "OR",
  "NEG", "COLON", "OPENPAR", "CLOSEPAR", "OPENBR", "CLOSEBR", "OPENCUR",
  "CLOSECUR", "SEPARATOR", "DECIMAL", "$accept", "program", "$@1", "body",
  "command", "declaration", "declarenoassign", "declareassign", "$@2",
  "datatype", "value", "literal", "num", "bool", "exp", "arithmetic",
  "par", "operation", "logic", "negs", "logical", "relation",
  "relationterm", "relational", "read", "assignment", "$@3", "loop", "$@4",
  "$@5", "conditional", "$@6", "$@7", "else", "$@8", "$@9", "$@10",
  "write", "$@11", "content", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    54,    56,    56,    56,    57,    57,    57,
      57,    57,    57,    57,    57,    58,    58,    59,    59,    59,
      59,    59,    60,    60,    60,    60,    60,    60,    61,    60,
      62,    62,    62,    62,    62,    63,    63,    63,    64,    64,
      64,    64,    65,    65,    66,    66,    67,    67,    67,    67,
      68,    68,    68,    68,    69,    69,    70,    70,    70,    70,
      70,    70,    71,    71,    71,    72,    72,    73,    73,    74,
      75,    75,    76,    76,    76,    76,    76,    76,    77,    77,
      77,    77,    77,    79,    78,    81,    82,    80,    84,    85,
      83,    87,    88,    86,    89,    86,    91,    90,    92,    92,
      92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     5,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     5,     5,     5,     5,     5,     5,     0,    11,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     3,     2,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       5,     5,     5,     0,     4,     0,     0,     7,     0,     0,
       6,     0,     0,     5,     0,     3,     0,     3,     2,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     2,     0,    43,    42,    44,
      45,    46,     4,     0,    85,    88,    91,    96,    66,    54,
      55,     3,     0,     7,    15,    16,    51,    70,    71,    47,
       0,    48,     0,    49,     0,    13,     9,    10,    11,    12,
      14,    83,     0,     5,     0,     0,     0,     0,     0,     0,
      67,    68,     0,    56,    57,    58,    59,    60,    61,     0,
      46,    71,    47,    63,    65,    72,    73,    74,    75,    76,
      77,     0,    78,     0,    17,    18,    19,    20,    21,     0,
      71,    48,    48,    92,    95,   100,    99,    97,     6,    64,
      52,    50,     0,    62,    53,    69,    39,    40,    46,    84,
      35,    51,    70,    71,    37,     0,     0,     0,     0,     0,
       0,     0,    89,     0,    98,     0,     0,     0,    22,    80,
      23,    81,    24,    79,    25,    82,    26,    27,    28,    86,
       0,    93,     0,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,     0,    87,     0,    32,    33,    30,    34,
      31,     0,     0,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    21,    22,    23,    24,    25,   136,    79,
      99,   100,    26,    27,    28,    29,    30,    59,    31,    32,
      52,    33,    34,    71,    35,    36,    73,    37,    44,   137,
      38,    45,   130,    39,    46,   113,    47,    40,    48,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -72
static const yytype_int16 yypact[] =
{
       5,    13,    24,   -11,   -72,   -72,    44,   -72,   -72,   -72,
     -72,   116,   -72,    44,   -72,   -72,    19,   -72,   -72,   -72,
     -72,   -72,    39,   -72,   -72,   -72,   -72,   -72,     4,    97,
      95,   -72,    -2,   -72,    -9,   -72,   -72,   -72,   -72,   -72,
     -72,    34,   174,   -72,    95,    95,    40,    42,    88,    44,
     -72,   -72,    95,   -72,   -72,   -72,   -72,   -72,   -72,     9,
     150,    73,   122,   -72,    33,   -72,   -72,   -72,   -72,   -72,
     -72,    95,   -72,    66,    60,    62,    68,    75,    84,    87,
      64,   103,    82,   -72,   -72,   -72,   134,    88,   -72,    64,
     -72,    97,     9,   -72,   -72,    -9,   -72,   -72,   133,   -72,
     -72,   115,   118,     8,   -72,     7,    10,    12,    32,   100,
     127,    93,   -72,    44,    88,   122,    34,    67,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
      44,   -72,   113,   117,   130,   131,   149,    44,   -72,   169,
     170,   171,   172,   154,   -72,   179,   -72,   -72,   -72,   -72,
     -72,   173,    66,   -72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -72,   -13,   -72,   -72,   -72,   -72,   -72,    55,
      49,   -72,   -71,   -70,   -29,   -25,   -53,   -72,    76,   -21,
     -72,   -72,   132,   -72,   -69,   -72,   -72,   -72,   -72,   -72,
     155,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   156
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -95
static const yytype_int16 yytable[] =
{
      43,    61,   101,   102,   104,    62,    92,    63,    93,    94,
     118,    64,     7,     8,   120,    80,    80,   122,    90,    86,
       1,    -8,     3,    89,     4,   -36,    65,    66,    67,    68,
      69,    70,   119,     5,    91,   121,    88,   123,   124,    92,
     -94,    18,    80,    64,   103,    50,    51,     7,     8,    50,
      51,     9,    10,    11,    19,    20,    49,   125,    86,    72,
      12,    13,    94,    15,    14,    15,    16,   115,    17,     7,
       8,    96,    97,     9,    10,    98,    18,   132,   133,   134,
     135,   101,   102,   104,    83,    86,   105,    18,   106,    19,
      20,     7,     8,    85,   107,     9,    10,    60,     7,     8,
     131,   108,     9,    10,    60,    50,    51,   126,   127,    18,
     109,    19,    20,   110,    50,    51,   112,   138,    19,    20,
      81,    82,   111,   103,   144,    53,    54,    55,    56,    57,
      58,    18,   -38,    19,    20,   -41,   128,   129,    18,   139,
      19,    20,    41,   140,   -52,   -52,   -52,   -52,   -52,   -52,
      53,    54,    55,    56,    57,    58,   141,   142,   143,   116,
      42,   -52,   -52,   -52,   -52,   -52,   -52,    19,    20,   -71,
     -71,   -71,   -71,   -71,   -71,    50,    51,   117,   -52,   -52,
     -52,   -52,   -52,   -52,    74,    75,    76,    77,    78,   146,
     147,   148,   149,   150,   119,   121,   123,   125,   145,   152,
     151,   153,    84,    95,    87
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-72)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
      13,    30,    73,    73,    73,    30,    59,     9,    61,    62,
       3,    32,     3,     4,     4,    44,    45,     5,     9,    48,
      15,    17,     9,    52,     0,    17,    35,    36,    37,    38,
      39,    40,    25,    44,    59,    25,    49,    25,     6,    92,
      21,    43,    71,    64,    73,    41,    42,     3,     4,    41,
      42,     7,     8,     9,    45,    46,    17,    25,    87,    25,
      16,    17,   115,    21,    20,    21,    22,    92,    24,     3,
       4,     5,     6,     7,     8,     9,    43,    10,    11,    12,
      13,   152,   152,   152,    44,   114,    26,    43,    26,    45,
      46,     3,     4,     5,    26,     7,     8,     9,     3,     4,
     113,    26,     7,     8,     9,    41,    42,     7,     8,    43,
      26,    45,    46,    26,    41,    42,    34,   130,    45,    46,
      44,    45,    19,   152,   137,    28,    29,    30,    31,    32,
      33,    43,    17,    45,    46,    17,     9,    44,    43,    26,
      45,    46,    26,    26,    28,    29,    30,    31,    32,    33,
      28,    29,    30,    31,    32,    33,    26,    26,     9,    26,
      44,    28,    29,    30,    31,    32,    33,    45,    46,    35,
      36,    37,    38,    39,    40,    41,    42,    44,    28,    29,
      30,    31,    32,    33,    10,    11,    12,    13,    14,    10,
      11,    12,    13,    14,    25,    25,    25,    25,    44,    26,
     145,   152,    47,    71,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    54,     9,     0,    44,    55,     3,     4,     7,
       8,     9,    16,    17,    20,    21,    22,    24,    43,    45,
      46,    56,    57,    58,    59,    60,    65,    66,    67,    68,
      69,    71,    72,    74,    75,    77,    78,    80,    83,    86,
      90,    26,    44,    56,    81,    84,    87,    89,    91,    17,
      41,    42,    73,    28,    29,    30,    31,    32,    33,    70,
       9,    67,    68,     9,    72,    35,    36,    37,    38,    39,
      40,    76,    25,    79,    10,    11,    12,    13,    14,    62,
      67,    71,    71,    44,    83,     5,    67,    92,    56,    67,
       9,    68,    69,    69,    69,    75,     5,     6,     9,    63,
      64,    65,    66,    67,    77,    26,    26,    26,    26,    26,
      26,    19,    34,    88,    92,    68,    26,    44,     3,    25,
       4,    25,     5,    25,     6,    25,     7,     8,     9,    44,
      85,    56,    10,    11,    12,    13,    61,    82,    56,    26,
      26,    26,    26,     9,    56,    44,    10,    11,    12,    13,
      14,    62,    26,    63
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1792 of yacc.c  */
#line 35 "parser.y"
    {fprintf(outputFile, "int main(){\n");}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 57 "parser.y"
    {
    fprintf(outputFile, "int %s;\n", (yyvsp[(1) - (3)].str_val));
}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 60 "parser.y"
    {
    fprintf(outputFile, "float %s;\n", (yyvsp[(1) - (3)].str_val));
}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 63 "parser.y"
    {
    fprintf(outputFile, "string %s;\n", (yyvsp[(1) - (3)].str_val));
}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 66 "parser.y"
    {
    fprintf(outputFile, "char %s;\n", (yyvsp[(1) - (3)].str_val));
}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 69 "parser.y"
    {
    fprintf(outputFile, "bool %s;\n", (yyvsp[(1) - (3)].str_val));
}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 74 "parser.y"
    {
    fprintf(outputFile, "int %s = %s ;\n", (yyvsp[(1) - (5)].str_val), (yyvsp[(5) - (5)].str_val));
}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 77 "parser.y"
    {
    fprintf(outputFile, "float %s = %s;\n", (yyvsp[(1) - (5)].str_val), (yyvsp[(5) - (5)].str_val) );
}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 80 "parser.y"
    {
    fprintf(outputFile, "string %s = %s;\n", (yyvsp[(1) - (5)].str_val), (yyvsp[(5) - (5)].str_val) );
}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 83 "parser.y"
    {
    fprintf(outputFile, "char %s = %s;\n", (yyvsp[(1) - (5)].str_val), (yyvsp[(5) - (5)].str_val) );
}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 86 "parser.y"
    {
    fprintf(outputFile, "bool %s = %s;\n", (yyvsp[(1) - (5)].str_val), (yyvsp[(5) - (5)].str_val) );
}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 89 "parser.y"
    {
    fprintf(outputFile, "bool %s = %s;\n", (yyvsp[(1) - (5)].str_val), (yyvsp[(5) - (5)].str_val) );
}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 92 "parser.y"
    {
    fprintf(outputFile, "int %s = %s ;\n", (yyvsp[(1) - (5)].str_val), (yyvsp[(5) - (5)].str_val));
}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 95 "parser.y"
    {
    fprintf(outputFile, "int %s = %s ;\n", (yyvsp[(1) - (11)].str_val), (yyvsp[(5) - (11)].str_val));
}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 102 "parser.y"
    {(yyval.str_val) = (yyvsp[(1) - (1)].str_val);}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 104 "parser.y"
    {(yyval.str_val) = (yyvsp[(1) - (1)].str_val);}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 106 "parser.y"
    {(yyval.str_val) = (yyvsp[(1) - (1)].str_val);}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 108 "parser.y"
    {(yyval.str_val) = (yyvsp[(1) - (1)].str_val);}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 110 "parser.y"
    {(yyval.str_val) = (yyvsp[(1) - (1)].str_val);}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 114 "parser.y"
    {fprintf(outputFile, "%s", (yyvsp[(1) - (1)].str_val));}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 116 "parser.y"
    {(yyval.str_val) = (yyvsp[(1) - (1)].str_val);}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 118 "parser.y"
    {(yyval.str_val) = (yyvsp[(1) - (1)].str_val);}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 123 "parser.y"
    {(yyval.str_val) = (yyvsp[(1) - (1)].str_val);}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 125 "parser.y"
    {(yyval.str_val) = (yyvsp[(1) - (1)].str_val);}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 130 "parser.y"
    {(yyval.str_val) = (yyvsp[(1) - (1)].str_val);}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 132 "parser.y"
    {(yyval.str_val) = (yyvsp[(1) - (1)].str_val);}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 135 "parser.y"
    {fprintf(outputFile, "true");}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 136 "parser.y"
    {fprintf(outputFile, "false");}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 139 "parser.y"
    {fprintf(outputFile, "%s", (yyvsp[(1) - (1)].str_val));}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 146 "parser.y"
    {fprintf(outputFile, "%s", (yyvsp[(1) - (1)].str_val));}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 147 "parser.y"
    {fprintf(outputFile, "%s", (yyvsp[(1) - (1)].str_val));}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 151 "parser.y"
    {fprintf(outputFile, "(");}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 152 "parser.y"
    {fprintf(outputFile, ")");}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 155 "parser.y"
    {fprintf(outputFile, "+");}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 156 "parser.y"
    {fprintf(outputFile, "-");}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 157 "parser.y"
    {fprintf(outputFile, "*");}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 158 "parser.y"
    {fprintf(outputFile, "/");}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 159 "parser.y"
    {fprintf(outputFile, "^");}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 160 "parser.y"
    {fprintf(outputFile, "%");}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 164 "parser.y"
    {fprintf(outputFile, "%s", (yyvsp[(2) - (2)].str_val));}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 169 "parser.y"
    {fprintf(outputFile, "!");}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 173 "parser.y"
    {fprintf(outputFile, "&&");}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 175 "parser.y"
    {fprintf(outputFile, "||");}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 185 "parser.y"
    {fprintf(outputFile, ">");}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 186 "parser.y"
    {fprintf(outputFile, "<");}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 187 "parser.y"
    {fprintf(outputFile, "<=");}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 188 "parser.y"
    {fprintf(outputFile, ">=");}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 189 "parser.y"
    {fprintf(outputFile, "!=");}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 190 "parser.y"
    {fprintf(outputFile, "==");}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 193 "parser.y"
    {
    fprintf(outputFile, "cin >> %s;\n", (yyvsp[(1) - (3)].str_val));
}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 196 "parser.y"
    {
        fprintf(outputFile, "string %s;\ncin >> %s;\n", (yyvsp[(1) - (5)].str_val), (yyvsp[(1) - (5)].str_val));
    }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 199 "parser.y"
    {
        fprintf(outputFile, "int %s;\ncin >> %s;\n", (yyvsp[(1) - (5)].str_val), (yyvsp[(1) - (5)].str_val));
    }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 202 "parser.y"
    {
        fprintf(outputFile, "float %s;\ncin >> %s;\n", (yyvsp[(1) - (5)].str_val), (yyvsp[(1) - (5)].str_val));
    }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 205 "parser.y"
    {
        fprintf(outputFile, "char %s;\ncin >> %s;\n", (yyvsp[(1) - (5)].str_val), (yyvsp[(1) - (5)].str_val));
    }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 210 "parser.y"
    {fprintf(outputFile, "%s = ", (yyvsp[(1) - (2)].str_val));}
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 210 "parser.y"
    {fprintf(outputFile, ";\n");}
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 214 "parser.y"
    {fprintf(outputFile, "while (");}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 214 "parser.y"
    {fprintf(outputFile, "){\n");}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 214 "parser.y"
    {fprintf(outputFile, "}\n");}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 217 "parser.y"
    {fprintf(outputFile, "if (");}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 217 "parser.y"
    {fprintf(outputFile, "){\n");}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 217 "parser.y"
    {fprintf(outputFile, "}\n");}
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 220 "parser.y"
    {fprintf(outputFile, "else ");}
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 220 "parser.y"
    {fprintf(outputFile, "{\n");}
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 220 "parser.y"
    {fprintf(outputFile, "}\n");}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 221 "parser.y"
    {fprintf(outputFile, "else ");}
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 224 "parser.y"
    {fprintf(outputFile, "cout << ");}
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 224 "parser.y"
    {fprintf(outputFile, "endl;\n");}
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 228 "parser.y"
    {fprintf(outputFile, " << ");}
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 229 "parser.y"
    {fprintf(outputFile, "%s", (yyvsp[(1) - (1)].str_val)); fprintf(outputFile, " << ");}
    break;


/* Line 1792 of yacc.c  */
#line 2029 "parser.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 232 "parser.y"


int main(int argc, char *argv[]) {
    // Check if the correct number of command-line arguments is provided
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    // Check if the input file has the correct extension
    char *fileExtension = strrchr(argv[1], '.');
    if (fileExtension == NULL || strcmp(fileExtension, ".gr") != 0) {
        fprintf(stderr, "Error: Input file must have a .gr extension\n");
        return 1;
    }

    // Open the input file
    FILE *inputFile = fopen(argv[1], "r");
    if (!inputFile) {
        fprintf(stderr, "Error opening input file\n");
        return 1;
    }

    // Open the output file for writing
    outputFile = fopen("output_file.cpp", "w");
    if (!outputFile) {
        fprintf(stderr, "Error opening output file\n");
        fclose(inputFile);
        return 1;
    }

    fprintf(outputFile, "#include <iostream>\nusing namespace std;\n");

    // Set yyin to read from the input file
    yyin = inputFile;

    // Call yyparse to parse the yacc code
    if (yyparse() == 0) {
        printf("Grace program parsed successfully\n");
    } else {
        printf("Parsing error.\n");
    }

    // Write the ending of the C++ code
    fprintf(outputFile, "    return 0;\n");
    fprintf(outputFile, "}\n");

    // Close the input and output files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

void yyerror(const char* msg) {
    fprintf(stderr, "Error at line %d: %s\n", yylineno, msg);
}
