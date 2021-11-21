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
#line 1 "..\\project.y"


#include "..\project.h"

extern FILE *yyin;


/* Line 371 of yacc.c  */
#line 76 "y.tab.c"

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
     SPACE = 258,
     OPERATOR = 259,
     SPECCHAR = 260,
     BEGINDOC = 261,
     ENDDOC = 262,
     DOCCLASS = 263,
     LCBR = 264,
     RCBR = 265,
     TITLE = 266,
     POW = 267,
     END = 268,
     USEPACKAGE = 269,
     MAKETITLE = 270,
     AUTHOR = 271,
     INDEX = 272,
     TABLEOFCONT = 273,
     MATH = 274,
     BSL = 275,
     LSBR = 276,
     RSBR = 277,
     NEWPAGE = 278,
     INPUT = 279,
     LSKF = 280,
     RSKF = 281,
     ENDIF = 282,
     IF = 283,
     BEGINENV = 284,
     ENDENV = 285,
     ERR = 286,
     FORMAT = 287,
     INTEGER = 288,
     WORD = 289
   };
#endif
/* Tokens.  */
#define SPACE 258
#define OPERATOR 259
#define SPECCHAR 260
#define BEGINDOC 261
#define ENDDOC 262
#define DOCCLASS 263
#define LCBR 264
#define RCBR 265
#define TITLE 266
#define POW 267
#define END 268
#define USEPACKAGE 269
#define MAKETITLE 270
#define AUTHOR 271
#define INDEX 272
#define TABLEOFCONT 273
#define MATH 274
#define BSL 275
#define LSBR 276
#define RSBR 277
#define NEWPAGE 278
#define INPUT 279
#define LSKF 280
#define RSKF 281
#define ENDIF 282
#define IF 283
#define BEGINENV 284
#define ENDENV 285
#define ERR 286
#define FORMAT 287
#define INTEGER 288
#define WORD 289



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 210 "y.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1136

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNRULES -- Number of states.  */
#define YYNSTATES  223

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    14,    17,    20,    23,    24,
      29,    37,    41,    47,    49,    52,    54,    57,    59,    64,
      68,    76,    87,    93,    98,   102,   105,   107,   110,   112,
     116,   120,   122,   124,   126,   130,   134,   139,   145,   150,
     155,   158,   161,   164,   169,   173,   177,   179,   181,   183,
     187,   193,   202,   210,   218,   225,   229,   235,   244,   252,
     260,   267,   271,   276,   282,   290,   298,   306,   313,   321,
     329,   336,   338,   344,   346,   348,   350,   352,   357,   365,
     372,   378,   385,   396,   410,   415,   419,   421,   423,   426,
     428,   430,   433
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,    36,    37,    -1,    37,    -1,     8,    38,
       6,    43,     7,    -1,    38,    39,    -1,    38,    42,    -1,
      38,    41,    -1,    -1,    14,     9,    47,    10,    -1,    14,
      21,    47,    22,     9,    47,    10,    -1,    14,     9,    10,
      -1,    14,    21,    22,     9,    10,    -1,    47,    -1,    41,
      40,    -1,    41,    -1,    42,    40,    -1,    42,    -1,    11,
       9,    47,    10,    -1,    11,     9,    10,    -1,    11,    21,
      47,    22,     9,    47,    10,    -1,    11,     9,    47,    10,
      21,    47,    22,     9,    47,    10,    -1,    11,    21,    22,
       9,    10,    -1,    16,     9,    47,    10,    -1,    16,     9,
      10,    -1,    46,    43,    -1,    46,    -1,    45,    44,    -1,
      45,    -1,     9,    47,    10,    -1,    21,    47,    22,    -1,
      47,    -1,    40,    -1,    48,    -1,    25,    47,    26,    -1,
      48,     9,    10,    -1,    48,     9,    47,    10,    -1,    48,
       3,     9,    47,    10,    -1,    48,     9,    48,    10,    -1,
      48,    21,    47,    22,    -1,    48,    50,    -1,    48,    51,
      -1,    48,    49,    -1,     3,     9,    47,    10,    -1,     9,
      48,    10,    -1,    21,    47,    22,    -1,    50,    -1,    51,
      -1,    49,    -1,    48,    12,    47,    -1,    48,    12,     9,
      47,    10,    -1,    48,    12,     9,    47,    10,     9,    47,
      10,    -1,    48,    12,     9,    10,     9,    47,    10,    -1,
      48,    12,     9,    47,    10,     9,    10,    -1,    48,    12,
       9,    10,     9,    10,    -1,    48,    17,    47,    -1,    48,
      17,     9,    47,    10,    -1,    48,    17,     9,    47,    10,
       9,    47,    10,    -1,    48,    17,     9,    10,     9,    47,
      10,    -1,    48,    17,     9,    47,    10,     9,    10,    -1,
      48,    17,     9,    10,     9,    10,    -1,    28,    47,    27,
      -1,    29,    44,    30,    44,    -1,    29,    44,    43,    30,
      44,    -1,    29,    44,     9,    43,    10,    30,    44,    -1,
       9,    29,     9,    51,    10,    47,    10,    -1,     9,    47,
      29,     9,    51,    10,    10,    -1,     9,    29,     9,    51,
      10,    10,    -1,     9,    30,     9,    51,    10,    47,    10,
      -1,     9,    47,    30,     9,    51,    10,    10,    -1,     9,
      30,     9,    51,    10,    10,    -1,    34,    -1,    20,     9,
      34,    20,    10,    -1,    32,    -1,     4,    -1,    23,    -1,
      15,    -1,    24,     9,    47,    10,    -1,    24,    21,    47,
      22,     9,    47,    10,    -1,    24,    21,    22,     9,    47,
      10,    -1,    24,    21,    22,     9,    10,    -1,    24,    21,
      47,    22,     9,    10,    -1,    24,    21,    47,    22,    21,
      47,    22,     9,    47,    10,    -1,    24,    21,    47,    22,
      21,    47,    22,    21,    47,    22,     9,    47,    10,    -1,
      32,     9,    47,    10,    -1,    21,     4,    22,    -1,    33,
      -1,     5,    -1,    20,    34,    -1,    18,    -1,    19,    -1,
      20,     4,    -1,    21,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    17,    17,    18,    22,    26,    27,    28,    29,    33,
      34,    35,    36,    37,    41,    42,    43,    44,    48,    49,
      50,    51,    52,    56,    57,    60,    61,    65,    66,    70,
      71,    75,    76,    80,    81,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   114,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SPACE", "OPERATOR", "SPECCHAR",
  "BEGINDOC", "ENDDOC", "DOCCLASS", "LCBR", "RCBR", "TITLE", "POW", "END",
  "USEPACKAGE", "MAKETITLE", "AUTHOR", "INDEX", "TABLEOFCONT", "MATH",
  "BSL", "LSBR", "RSBR", "NEWPAGE", "INPUT", "LSKF", "RSKF", "ENDIF", "IF",
  "BEGINENV", "ENDENV", "ERR", "FORMAT", "INTEGER", "WORD", "$accept",
  "start", "code", "preamble", "usepackage", "title", "titletype",
  "author", "body", "textenvir", "text", "part", "math", "operand", "if",
  "environment", "textoption", YY_NULL
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
     285,   286,   287,   288,   289
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    36,    37,    38,    38,    38,    38,    39,
      39,    39,    39,    39,    40,    40,    40,    40,    41,    41,
      41,    41,    41,    42,    42,    43,    43,    44,    44,    45,
      45,    46,    46,    47,    47,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    49,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     5,     2,     2,     2,     0,     4,
       7,     3,     5,     1,     2,     1,     2,     1,     4,     3,
       7,    10,     5,     4,     3,     2,     1,     2,     1,     3,
       3,     1,     1,     1,     3,     3,     4,     5,     4,     4,
       2,     2,     2,     4,     3,     3,     1,     1,     1,     3,
       5,     8,     7,     7,     6,     3,     5,     8,     7,     7,
       6,     3,     4,     5,     7,     7,     7,     6,     7,     7,
       6,     1,     5,     1,     1,     1,     1,     4,     7,     6,
       5,     6,    10,    13,     4,     3,     1,     1,     2,     1,
       1,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,     0,     3,     0,     1,     2,     0,    74,    87,
       0,     0,     0,     0,    76,     0,    89,    90,     0,     0,
      75,     0,     0,     0,     0,    73,    86,    71,     5,     7,
       6,    13,    33,    48,    46,    47,     0,    32,    15,    17,
       0,    26,    31,     0,     0,     0,    33,     0,     0,     0,
       0,     0,    91,     0,    88,    74,    92,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    42,    40,    41,     0,    14,    16,     4,    25,
       0,     0,     0,     0,    44,    19,     0,     0,     0,    11,
       0,     0,     0,    24,     0,     0,    85,    45,     0,     0,
       0,    34,    61,     0,     0,     0,     0,     0,    27,     0,
       0,    35,     0,    33,     0,    49,     0,    55,     0,    43,
      47,     0,     0,     0,     0,    18,     0,     0,     9,     0,
       0,    23,     0,    77,     0,     0,    29,    30,     0,    31,
      62,     0,    84,     0,    36,    38,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,     0,    22,     0,    12,
       0,    72,    80,     0,     0,     0,     0,    63,    37,     0,
      50,     0,    56,    67,     0,    70,     0,     0,     0,     0,
       0,     0,    79,    81,     0,     0,     0,    54,     0,     0,
      60,     0,     0,    65,    68,    66,    69,     0,    20,    10,
      78,     0,    64,    52,    53,     0,    58,    59,     0,     0,
       0,     0,    51,    57,     0,     0,     0,    21,    82,     0,
       0,     0,    83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    28,    37,    38,    39,    40,    64,
      65,    41,    42,    32,    33,    34,    35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -65
static const yytype_int16 yypact[] =
{
      28,   -65,    41,   -65,   206,   -65,   -65,     3,   -65,   -65,
     302,   494,    14,    54,   -65,    13,   -65,   -65,    44,   526,
     -65,    59,  1038,  1038,    61,    51,   -65,   -65,   -65,   -65,
     -65,   -65,   558,   -65,   -65,   -65,  1038,   -65,    79,    79,
      74,   302,   -65,    64,    83,   -21,   334,   590,   622,   654,
     686,   718,   -65,    62,   -65,    75,   -65,    77,  1038,   750,
      76,    73,  1038,  1038,   238,    61,  1038,    94,   366,  1070,
    1102,   526,   -65,   -65,   -65,    95,   -65,   -65,   -65,   -65,
    1038,     6,    99,   102,   -65,   -65,   103,   105,    82,   -65,
     106,   108,    93,   -65,   109,    98,   -65,   -65,   110,   112,
     101,   -65,   -65,   114,   104,   270,    61,    97,   -65,   115,
    1038,   -65,     4,   398,   430,   -65,   462,   -65,   107,   -65,
     118,     9,   121,     6,     6,   111,   123,   125,   -65,   126,
     128,   -65,   129,   -65,   782,    65,   -65,   -65,   130,   -21,
     -65,    61,   -65,   131,   -65,   -65,   133,    27,   134,    42,
     -65,   814,    75,   846,   135,   136,  1038,   -65,  1038,   -65,
    1038,   -65,   -65,   138,   878,  1038,   120,   -65,   -65,   910,
     142,   942,   144,   -65,   145,   -65,   147,   148,   149,   113,
     152,   153,   -65,   -65,   154,   116,    61,   -65,   156,   974,
     -65,   158,  1006,   -65,   -65,   -65,   -65,   160,   -65,   -65,
     -65,    70,   -65,   -65,   -65,   161,   -65,   -65,   162,  1038,
    1038,  1038,   -65,   -65,   163,   164,   122,   -65,   -65,   166,
    1038,   167,   -65
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   -65,   168,   -65,   -65,    50,   172,   174,   -36,   -64,
     -65,   -65,    -4,    -7,   -29,   -26,   -30
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      31,   108,    74,    72,    46,    79,    73,    45,    82,    83,
       8,     9,    36,   152,   144,    57,    74,    72,    60,    61,
      73,    14,    51,    47,    16,    17,    18,   121,   107,    20,
      21,    56,    75,    82,    83,    48,     1,   170,    25,    26,
      27,     5,   140,    86,    88,    90,    92,    94,    52,     1,
     120,   122,   172,    53,    98,   100,    82,    83,   103,   104,
      66,   113,   109,    49,   112,   115,   117,   118,    58,   138,
      62,    82,    83,    80,   164,    50,   103,   167,    54,   210,
      59,    78,    63,    74,    72,    63,   165,    73,    76,    77,
      12,   211,    81,   154,   155,    15,    95,    96,    46,    97,
     102,   139,   101,   110,   127,   119,   143,    46,   123,    46,
     147,   124,   149,   125,   126,   130,   128,   129,   132,   131,
     133,   134,   202,   135,   136,   142,   137,   141,   151,   150,
     163,   153,   156,   157,   158,   197,   159,   160,   201,   161,
     166,   168,   169,   171,   219,   177,   178,   174,   182,   176,
     186,   189,   179,   192,   180,   193,   181,   194,   195,   196,
     184,   185,   198,   199,   200,   188,   203,   191,   206,   209,
       6,   212,   213,   217,   218,   220,    29,   222,    30,     0,
       0,     0,     0,     0,     0,   205,     0,     0,   208,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   214,   215,   216,     0,     7,
       8,     9,    10,     0,     0,    11,   221,    12,     0,     0,
      13,    14,    15,     0,    16,    17,    18,    19,     0,    20,
      21,    22,     0,     0,    23,    24,     0,     0,    25,    26,
      27,     7,     8,     9,     0,     0,     0,   105,     0,    12,
       0,     0,     0,    14,    15,     0,    16,    17,    18,    19,
       0,    20,    21,    22,     0,     0,    23,    24,   106,     0,
      25,    26,    27,     7,     8,     9,     0,     0,     0,    11,
       0,    12,     0,     0,     0,    14,    15,     0,    16,    17,
      18,    19,     0,    20,    21,    22,     0,     0,    23,    43,
      44,     0,    25,    26,    27,     7,     8,     9,     0,     0,
       0,    11,     0,    12,     0,     0,     0,    14,    15,     0,
      16,    17,    18,    19,     0,    20,    21,    22,     0,     0,
      23,    24,     0,     0,    25,    26,    27,    67,     8,     9,
       0,     0,     0,    68,    84,     0,    69,     0,     0,    14,
       0,    70,    16,    17,    18,    71,     0,    20,    21,     0,
       0,     0,    23,    24,     0,     0,    25,    26,    27,     7,
       8,     9,     0,     0,     0,    11,   111,     0,     0,     0,
       0,    14,     0,     0,    16,    17,    18,    19,     0,    20,
      21,    22,     0,     0,    23,    43,    44,     0,    25,    26,
      27,    67,     8,     9,     0,     0,     0,    68,   145,     0,
      69,     0,     0,    14,     0,    70,    16,    17,    18,    71,
       0,    20,    21,     0,     0,     0,    23,    24,     0,     0,
      25,    26,    27,     7,     8,     9,     0,     0,     0,    11,
     146,     0,     0,     0,     0,    14,     0,     0,    16,    17,
      18,    19,     0,    20,    21,    22,     0,     0,    23,    43,
      44,     0,    25,    26,    27,     7,     8,     9,     0,     0,
       0,    11,   148,     0,     0,     0,     0,    14,     0,     0,
      16,    17,    18,    19,     0,    20,    21,    22,     0,     0,
      23,    43,    44,     0,    25,    26,    27,     7,     8,     9,
       0,     0,     0,    11,     0,     0,     0,     0,     0,    14,
       0,     0,    16,    17,    18,    19,     0,    20,    21,    22,
       0,     0,    23,    43,    44,     0,    25,    26,    27,     7,
      55,     9,     0,     0,     0,    11,     0,     0,     0,     0,
       0,    14,     0,     0,    16,    17,    18,    19,    56,    20,
      21,    22,     0,     0,    23,    24,     0,     0,    25,    26,
      27,    67,     8,     9,     0,     0,     0,    68,     0,     0,
      69,     0,     0,    14,     0,    70,    16,    17,    18,    71,
       0,    20,    21,     0,     0,     0,    23,    24,     0,     0,
      25,    26,    27,     7,     8,     9,     0,     0,     0,    11,
      85,     0,     0,     0,     0,    14,     0,     0,    16,    17,
      18,    19,     0,    20,    21,    22,     0,     0,    23,    24,
       0,     0,    25,    26,    27,     7,     8,     9,     0,     0,
       0,    11,     0,     0,     0,     0,     0,    14,     0,     0,
      16,    17,    18,    19,    87,    20,    21,    22,     0,     0,
      23,    24,     0,     0,    25,    26,    27,     7,     8,     9,
       0,     0,     0,    11,    89,     0,     0,     0,     0,    14,
       0,     0,    16,    17,    18,    19,     0,    20,    21,    22,
       0,     0,    23,    24,     0,     0,    25,    26,    27,     7,
       8,     9,     0,     0,     0,    11,     0,     0,     0,     0,
       0,    14,     0,     0,    16,    17,    18,    19,    91,    20,
      21,    22,     0,     0,    23,    24,     0,     0,    25,    26,
      27,     7,     8,     9,     0,     0,     0,    11,    93,     0,
       0,     0,     0,    14,     0,     0,    16,    17,    18,    19,
       0,    20,    21,    22,     0,     0,    23,    24,     0,     0,
      25,    26,    27,     7,     8,     9,     0,     0,     0,    11,
       0,     0,     0,     0,     0,    14,     0,     0,    16,    17,
      18,    19,    99,    20,    21,    22,     0,     0,    23,    24,
       0,     0,    25,    26,    27,     7,     8,     9,     0,     0,
       0,    11,   162,     0,     0,     0,     0,    14,     0,     0,
      16,    17,    18,    19,     0,    20,    21,    22,     0,     0,
      23,    24,     0,     0,    25,    26,    27,     7,     8,     9,
       0,     0,     0,    11,   173,     0,     0,     0,     0,    14,
       0,     0,    16,    17,    18,    19,     0,    20,    21,    22,
       0,     0,    23,    24,     0,     0,    25,    26,    27,     7,
       8,     9,     0,     0,     0,    11,   175,     0,     0,     0,
       0,    14,     0,     0,    16,    17,    18,    19,     0,    20,
      21,    22,     0,     0,    23,    24,     0,     0,    25,    26,
      27,     7,     8,     9,     0,     0,     0,    11,   183,     0,
       0,     0,     0,    14,     0,     0,    16,    17,    18,    19,
       0,    20,    21,    22,     0,     0,    23,    24,     0,     0,
      25,    26,    27,     7,     8,     9,     0,     0,     0,    11,
     187,     0,     0,     0,     0,    14,     0,     0,    16,    17,
      18,    19,     0,    20,    21,    22,     0,     0,    23,    24,
       0,     0,    25,    26,    27,     7,     8,     9,     0,     0,
       0,    11,   190,     0,     0,     0,     0,    14,     0,     0,
      16,    17,    18,    19,     0,    20,    21,    22,     0,     0,
      23,    24,     0,     0,    25,    26,    27,     7,     8,     9,
       0,     0,     0,    11,   204,     0,     0,     0,     0,    14,
       0,     0,    16,    17,    18,    19,     0,    20,    21,    22,
       0,     0,    23,    24,     0,     0,    25,    26,    27,     7,
       8,     9,     0,     0,     0,    11,   207,     0,     0,     0,
       0,    14,     0,     0,    16,    17,    18,    19,     0,    20,
      21,    22,     0,     0,    23,    24,     0,     0,    25,    26,
      27,     7,     8,     9,     0,     0,     0,    11,     0,     0,
       0,     0,     0,    14,     0,     0,    16,    17,    18,    19,
       0,    20,    21,    22,     0,     0,    23,    24,     0,     0,
      25,    26,    27,     7,     8,     9,     0,     0,     0,   114,
       0,     0,     0,     0,     0,    14,     0,     0,    16,    17,
      18,    19,     0,    20,    21,    22,     0,     0,    23,    24,
       0,     0,    25,    26,    27,     7,     8,     9,     0,     0,
       0,   116,     0,     0,     0,     0,     0,    14,     0,     0,
      16,    17,    18,    19,     0,    20,    21,    22,     0,     0,
      23,    24,     0,     0,    25,    26,    27
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-65)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       4,    65,    32,    32,    11,    41,    32,    11,    29,    30,
       4,     5,     9,     4,    10,    19,    46,    46,    22,    23,
      46,    15,     9,     9,    18,    19,    20,    21,    64,    23,
      24,    22,    36,    29,    30,    21,     8,    10,    32,    33,
      34,     0,   106,    47,    48,    49,    50,    51,     4,     8,
      80,    81,    10,     9,    58,    59,    29,    30,    62,    63,
       9,    68,    66,     9,    68,    69,    70,    71,     9,   105,
       9,    29,    30,     9,     9,    21,    80,   141,    34,     9,
      21,     7,    21,   113,   113,    21,    21,   113,    38,    39,
      11,    21,     9,   123,   124,    16,    34,    22,   105,    22,
      27,   105,    26,     9,    22,    10,   110,   114,     9,   116,
     114,     9,   116,    10,     9,    22,    10,     9,    20,    10,
      10,     9,   186,    22,    10,    10,    22,    30,    10,    22,
     134,    10,    21,    10,     9,    22,    10,     9,    22,    10,
      10,    10,     9,     9,    22,    10,    10,   151,    10,   153,
      30,     9,   156,     9,   158,    10,   160,    10,    10,    10,
     164,   165,    10,    10,    10,   169,    10,   171,    10,     9,
       2,    10,    10,    10,    10,     9,     4,    10,     4,    -1,
      -1,    -1,    -1,    -1,    -1,   189,    -1,    -1,   192,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   209,   210,   211,    -1,     3,
       4,     5,     6,    -1,    -1,     9,   220,    11,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    20,    21,    -1,    23,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,     3,     4,     5,    -1,    -1,    -1,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    -1,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    -1,    28,    29,    30,    -1,
      32,    33,    34,     3,     4,     5,    -1,    -1,    -1,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    -1,    18,    19,
      20,    21,    -1,    23,    24,    25,    -1,    -1,    28,    29,
      30,    -1,    32,    33,    34,     3,     4,     5,    -1,    -1,
      -1,     9,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,     3,     4,     5,
      -1,    -1,    -1,     9,    10,    -1,    12,    -1,    -1,    15,
      -1,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,     3,
       4,     5,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    18,    19,    20,    21,    -1,    23,
      24,    25,    -1,    -1,    28,    29,    30,    -1,    32,    33,
      34,     3,     4,     5,    -1,    -1,    -1,     9,    10,    -1,
      12,    -1,    -1,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,     3,     4,     5,    -1,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,
      20,    21,    -1,    23,    24,    25,    -1,    -1,    28,    29,
      30,    -1,    32,    33,    34,     3,     4,     5,    -1,    -1,
      -1,     9,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    -1,
      28,    29,    30,    -1,    32,    33,    34,     3,     4,     5,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    18,    19,    20,    21,    -1,    23,    24,    25,
      -1,    -1,    28,    29,    30,    -1,    32,    33,    34,     3,
       4,     5,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,     3,     4,     5,    -1,    -1,    -1,     9,    -1,    -1,
      12,    -1,    -1,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,     3,     4,     5,    -1,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,
      20,    21,    -1,    23,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,     3,     4,     5,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,     3,     4,     5,
      -1,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    18,    19,    20,    21,    -1,    23,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,     3,
       4,     5,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,     3,     4,     5,    -1,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,     3,     4,     5,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,     3,     4,     5,    -1,    -1,
      -1,     9,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,     3,     4,     5,
      -1,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    18,    19,    20,    21,    -1,    23,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,     3,
       4,     5,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    18,    19,    20,    21,    -1,    23,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,     3,     4,     5,    -1,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,     3,     4,     5,    -1,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,
      20,    21,    -1,    23,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,     3,     4,     5,    -1,    -1,
      -1,     9,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,     3,     4,     5,
      -1,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    18,    19,    20,    21,    -1,    23,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    34,     3,
       4,     5,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    18,    19,    20,    21,    -1,    23,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      34,     3,     4,     5,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,     3,     4,     5,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,
      20,    21,    -1,    23,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    34,     3,     4,     5,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    36,    37,    38,     0,    37,     3,     4,     5,
       6,     9,    11,    14,    15,    16,    18,    19,    20,    21,
      23,    24,    25,    28,    29,    32,    33,    34,    39,    41,
      42,    47,    48,    49,    50,    51,     9,    40,    41,    42,
      43,    46,    47,    29,    30,    47,    48,     9,    21,     9,
      21,     9,     4,     9,    34,     4,    22,    47,     9,    21,
      47,    47,     9,    21,    44,    45,     9,     3,     9,    12,
      17,    21,    49,    50,    51,    47,    40,    40,     7,    43,
       9,     9,    29,    30,    10,    10,    47,    22,    47,    10,
      47,    22,    47,    10,    47,    34,    22,    22,    47,    22,
      47,    26,    27,    47,    47,     9,    30,    43,    44,    47,
       9,    10,    47,    48,     9,    47,     9,    47,    47,    10,
      51,    21,    51,     9,     9,    10,     9,    22,    10,     9,
      22,    10,    20,    10,     9,    22,    10,    22,    43,    47,
      44,    30,    10,    47,    10,    10,    10,    47,    10,    47,
      22,    10,     4,    10,    51,    51,    21,    10,     9,    10,
       9,    10,    10,    47,     9,    21,    10,    44,    10,     9,
      10,     9,    10,    10,    47,    10,    47,    10,    10,    47,
      47,    47,    10,    10,    47,    47,    30,    10,    47,     9,
      10,    47,     9,    10,    10,    10,    10,    22,    10,    10,
      10,    22,    44,    10,    10,    47,    10,    10,    47,     9,
       9,    21,    10,    10,    47,    47,    47,    10,    10,    22,
       9,    47,    10
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
      
/* Line 1792 of yacc.c  */
#line 1770 "y.tab.c"
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
#line 154 "..\\project.y"


int main(int argc, char *argv[])
{
	
	if (argc == 2)
	{
		yyin = fopen(argv[1], "r");
		
		if (yyin == NULL)
		{
			yyerror("file was not opened");
			system("pause");
			return 0;
		}
	}
	else goto usage;
	
	outpFile = fopen ("output.txt","w");
    if (outpFile == NULL)
	{
		yyerror(" output file was not opened\n");
		system("pause");
		return 0;
	}

	if (!yyparse()) printf("\nyyparse(): parsing successful!\n\n");
	fclose(yyin);
	fclose(outpFile);
	system("pause");
	return 0;

usage:  printf("usage: %s [input file]\n\n", argv[0]);
		system("pause");
		return 0;
}

void yyerror(char *str, ...)
{
	if (str == NULL) return;

	printf("\nERROR: ");

	va_list ap;
	va_start(ap, str);
	while (*str != '\0')
	{
		if (*str == '%' && *(str + 1) != '\0')
		{
			str++;
			switch (*str)
			{
				case 'd':
					int i = va_arg(ap, int);
					printf("%d", i);
					break;
				case 'c':
					char c = va_arg(ap, char);
					printf("%c", c);
					break;
				case 's':
					char *s = va_arg(ap, char *);
					printf("%s", s);
					break;
				default:
					printf("yyerror: unknown parameter '%c'\n\n", *str);
					break;
			}
		} else
			printf("%c", *str);

		str++;
	}
	va_end(ap);

	printf(" :: (line #%d of the input file)\n\n", yylineno);

	system("pause");
	exit(-1);
}