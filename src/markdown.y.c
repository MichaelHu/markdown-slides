/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TEXT = 258,
     SPECIALCHAR = 259,
     CODETEXT = 260,
     H = 261,
     QUOTEH = 262,
     HTMLBLOCK = 263,
     SECTION = 264,
     VSECTION = 265,
     SCRIPTSTART = 266,
     SCRIPTEND = 267,
     STYLESTART = 268,
     STYLEEND = 269,
     SVGSTART = 270,
     SVGEND = 271,
     LINK = 272,
     BACKTICK = 273,
     TRIPLEBACKTICK = 274,
     TABLEROWSTART = 275,
     TABLECEILEND = 276,
     ULINDENT = 277,
     OLINDENT = 278,
     TEXTINDENT = 279,
     PRE_INDENT = 280,
     INDENTED_PRE_INDENT = 281,
     EXCLAMATION = 282,
     MINUS = 283,
     PLUS = 284,
     RIGHTPARENTHESES = 285,
     LEFTPARENTHESES = 286,
     RIGHTSQUARE = 287,
     LEFTSQUARE = 288,
     UNDERSCORE = 289,
     STAR = 290,
     BLANKLINE = 291,
     LINEBREAK = 292,
     LARGERTHAN = 293,
     DOUBLESTAR = 294,
     DOUBLEUNDERSCORE = 295,
     OLSTART = 296,
     ULSTART = 297,
     QUOTEBLANKLINE = 298,
     QUOTEOLSTART = 299,
     QUOTEULSTART = 300,
     STARX = 301
   };
#endif
/* Tokens.  */
#define TEXT 258
#define SPECIALCHAR 259
#define CODETEXT 260
#define H 261
#define QUOTEH 262
#define HTMLBLOCK 263
#define SECTION 264
#define VSECTION 265
#define SCRIPTSTART 266
#define SCRIPTEND 267
#define STYLESTART 268
#define STYLEEND 269
#define SVGSTART 270
#define SVGEND 271
#define LINK 272
#define BACKTICK 273
#define TRIPLEBACKTICK 274
#define TABLEROWSTART 275
#define TABLECEILEND 276
#define ULINDENT 277
#define OLINDENT 278
#define TEXTINDENT 279
#define PRE_INDENT 280
#define INDENTED_PRE_INDENT 281
#define EXCLAMATION 282
#define MINUS 283
#define PLUS 284
#define RIGHTPARENTHESES 285
#define LEFTPARENTHESES 286
#define RIGHTSQUARE 287
#define LEFTSQUARE 288
#define UNDERSCORE 289
#define STAR 290
#define BLANKLINE 291
#define LINEBREAK 292
#define LARGERTHAN 293
#define DOUBLESTAR 294
#define DOUBLEUNDERSCORE 295
#define OLSTART 296
#define ULSTART 297
#define QUOTEBLANKLINE 298
#define QUOTEOLSTART 299
#define QUOTEULSTART 300
#define STARX 301




/* Copy the first part of user declarations.  */
#line 1 "markdown.y"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "strutils.h"
#include "htmltags.h" 
#include "blocknode.h" 
#include "node.h"
#include "nodetree.h"

#define YYERROR_VERBOSE

/* prototypes */
extern int yylex(void);
extern void yyerror(char *s);
extern void markdown(void);

int _inner_pre_level = -1;
t_tag_info *tag_info;
t_node *_node, *_tail_node;

/**
 * @sed_append_to_tail_and_return_the_first
 */




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 31 "markdown.y"
{
    char *text;
    t_blocknode *block_node;
    t_node *node;
}
/* Line 193 of yacc.c.  */
#line 223 "markdown.y.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 248 "markdown.y.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   751

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNRULES -- Number of states.  */
#define YYNSTATES  181

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    49,    53,    57,    60,    63,    66,
      68,    71,    73,    76,    80,    84,    87,    89,    91,    94,
      96,   100,   103,   105,   109,   112,   115,   117,   122,   125,
     127,   131,   134,   136,   140,   143,   146,   148,   153,   156,
     158,   162,   165,   167,   171,   174,   176,   179,   184,   187,
     189,   192,   196,   199,   203,   206,   210,   213,   215,   218,
     221,   224,   226,   230,   233,   235,   238,   241,   243,   245,
     247,   251,   255,   259,   263,   267,   271,   274,   281,   289,
     291,   294,   297,   300,   303,   304,   306,   309,   311,   313,
     315,   318,   320,   322
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    -1,     1,    -1,    49,    50,    -1,
      -1,    53,    -1,    51,    -1,    80,    -1,    54,    -1,    60,
      -1,    66,    -1,    62,    -1,    68,    -1,    72,    -1,    64,
      -1,    70,    -1,    56,    -1,    58,    -1,    74,    -1,    76,
      -1,    52,    -1,    78,    -1,     6,    86,    37,    -1,     7,
      86,    37,    -1,     8,     3,    37,    -1,     8,    37,    -1,
       8,     1,    -1,    53,    79,    -1,    79,    -1,    54,    55,
      -1,    55,    -1,    84,    37,    -1,    19,    90,     1,    -1,
      11,    84,     1,    -1,    56,    57,    -1,    57,    -1,    36,
      -1,    58,    59,    -1,    59,    -1,    38,    84,    37,    -1,
      60,    61,    -1,    61,    -1,    42,    84,    37,    -1,    42,
      37,    -1,    62,    63,    -1,    63,    -1,    22,    42,    84,
      37,    -1,    64,    65,    -1,    65,    -1,    45,    84,    37,
      -1,    66,    67,    -1,    67,    -1,    41,    84,    37,    -1,
      41,    37,    -1,    68,    69,    -1,    69,    -1,    23,    41,
      84,    37,    -1,    70,    71,    -1,    71,    -1,    44,    84,
      37,    -1,    72,    73,    -1,    73,    -1,    24,    84,    37,
      -1,    74,    75,    -1,    75,    -1,    25,     5,    -1,    19,
      90,    19,    37,    -1,    76,    77,    -1,    77,    -1,    26,
       5,    -1,    11,    84,    12,    -1,    11,    12,    -1,    13,
      84,    14,    -1,    13,    14,    -1,    15,    84,    16,    -1,
      15,    16,    -1,    43,    -1,     9,    37,    -1,    10,    37,
      -1,    80,    81,    -1,    81,    -1,    20,    82,    37,    -1,
      82,    83,    -1,    83,    -1,    84,    21,    -1,    84,    85,
      -1,    85,    -1,     3,    -1,     4,    -1,    35,    84,    35,
      -1,    34,    84,    34,    -1,    39,    84,    39,    -1,    40,
      84,    40,    -1,    18,    90,    18,    -1,    18,    90,     1,
      -1,    18,     1,    -1,    33,    88,    32,    31,    88,    30,
      -1,    27,    33,    88,    32,    31,    88,    30,    -1,    87,
      -1,    86,     3,    -1,    86,    87,    -1,    86,     5,    -1,
      86,     4,    -1,    -1,    17,    -1,    88,    89,    -1,    89,
      -1,     3,    -1,     4,    -1,    90,    91,    -1,    91,    -1,
       5,    -1,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    68,    68,    83,    89,   106,   119,   122,   125,   128,
     131,   134,   137,   140,   143,   146,   149,   152,   155,   158,
     161,   164,   167,   173,   197,   223,   245,   267,   292,   295,
     308,   315,   329,   350,   365,   382,   389,   402,   416,   423,
     438,   461,   468,   481,   502,   524,   531,   544,   569,   576,
     589,   615,   622,   635,   655,   677,   684,   697,   722,   729,
     742,   766,   773,   787,   842,   849,   865,   891,   915,   922,
     938,   971,   994,  1017,  1040,  1063,  1086,  1113,  1118,  1123,
    1130,  1137,  1149,  1156,  1163,  1177,  1192,  1193,  1197,  1198,
    1200,  1201,  1202,  1203,  1205,  1212,  1218,  1224,  1227,  1230,
    1236,  1237,  1238,  1239,  1240,  1244,  1254,  1255,  1259,  1260,
    1264,  1265,  1269,  1270
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TEXT", "SPECIALCHAR", "CODETEXT", "H",
  "QUOTEH", "HTMLBLOCK", "SECTION", "VSECTION", "SCRIPTSTART", "SCRIPTEND",
  "STYLESTART", "STYLEEND", "SVGSTART", "SVGEND", "LINK", "BACKTICK",
  "TRIPLEBACKTICK", "TABLEROWSTART", "TABLECEILEND", "ULINDENT",
  "OLINDENT", "TEXTINDENT", "PRE_INDENT", "INDENTED_PRE_INDENT",
  "EXCLAMATION", "MINUS", "PLUS", "RIGHTPARENTHESES", "LEFTPARENTHESES",
  "RIGHTSQUARE", "LEFTSQUARE", "UNDERSCORE", "STAR", "BLANKLINE",
  "LINEBREAK", "LARGERTHAN", "DOUBLESTAR", "DOUBLEUNDERSCORE", "OLSTART",
  "ULSTART", "QUOTEBLANKLINE", "QUOTEOLSTART", "QUOTEULSTART", "STARX",
  "$accept", "markdownfile", "blocks", "block", "header", "htmlblock",
  "lines", "block_p", "line_p", "block_blank", "line_blank",
  "block_quote_p", "line_quote_p", "block_ul", "line_ul",
  "block_indent_ul", "line_indent_ul", "block_quote_ul", "line_quote_ul",
  "block_ol", "line_ol", "block_indent_ol", "line_indent_ol",
  "block_quote_ol", "line_quote_ol", "block_indent_text",
  "line_indent_text", "block_pre", "line_pre", "block_indented_pre",
  "line_indented_pre", "pairedblock", "line", "tablerows", "tablerow",
  "tableceils", "tableceil", "inlineelements", "inlineelement",
  "headertext", "link", "plaintext", "text_list", "codespan", "code_list", 0
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    51,    51,    52,    52,    52,    53,    53,
      54,    54,    55,    55,    55,    56,    56,    57,    58,    58,
      59,    60,    60,    61,    61,    62,    62,    63,    64,    64,
      65,    66,    66,    67,    67,    68,    68,    69,    70,    70,
      71,    72,    72,    73,    74,    74,    75,    75,    76,    76,
      77,    78,    78,    78,    78,    78,    78,    79,    79,    79,
      80,    80,    81,    82,    82,    83,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      86,    86,    86,    86,    86,    87,    88,    88,    89,    89,
      90,    90,    91,    91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     2,     2,     2,     1,
       2,     1,     2,     3,     3,     2,     1,     1,     2,     1,
       3,     2,     1,     3,     2,     2,     1,     4,     2,     1,
       3,     2,     1,     3,     2,     2,     1,     4,     2,     1,
       3,     2,     1,     3,     2,     1,     2,     4,     2,     1,
       2,     3,     2,     3,     2,     3,     2,     1,     2,     2,
       2,     1,     3,     2,     1,     2,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     6,     7,     1,
       2,     2,     2,     2,     0,     1,     2,     1,     1,     1,
       2,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     2,     1,    88,    89,   104,   104,     0,
       0,     0,     0,     0,     0,   105,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,    77,     0,     0,     4,     7,    21,
       6,     9,    31,    17,    36,    18,    39,    10,    42,    12,
      46,    15,    49,    11,    52,    13,    56,    16,    59,    14,
      62,    19,    65,    20,    69,    22,    29,     8,    81,     0,
      87,    99,     0,     0,    27,     0,    26,    78,    79,    72,
       0,    74,     0,    76,     0,    96,   113,   112,     0,   111,
       0,     0,    84,     0,     0,     0,     0,    66,    70,     0,
     108,   109,     0,   107,     0,     0,     0,     0,     0,    54,
       0,    44,     0,     0,     0,    28,     0,     0,    30,    35,
      38,    41,    45,    48,    51,    55,    58,    61,     0,    64,
      68,    80,    32,    86,   100,   103,   102,    23,   101,    24,
      25,    34,    71,    73,    75,    95,    94,   110,    33,     0,
      82,    83,    85,     0,     0,    63,     0,     0,   106,    91,
      90,    40,    92,    93,    53,    43,    60,    50,     0,     0,
       0,    67,    47,    57,     0,     0,     0,     0,     0,    97,
      98
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    91,    92,    69,    70,    72,
      71,   102,   103,    88,    89
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -96
static const yytype_int16 yypact[] =
{
     119,   -96,    35,   162,   -96,   -96,   -96,   -96,   -96,     7,
       5,    37,   248,   259,   286,   -96,   189,   102,   645,    16,
      43,   645,    73,    88,    66,   105,   645,   645,   -96,   645,
     645,   645,   297,   324,   -96,   645,   645,   -96,   -96,   -96,
       2,   210,   -96,    75,   -96,    78,   -96,    71,   -96,    96,
     -96,    76,   -96,    83,   -96,   108,   -96,    89,   -96,   111,
     -96,     9,   -96,   114,   -96,   -96,   -96,   129,   -96,   335,
     -96,   -96,    33,    68,   -96,   130,   -96,   -96,   -96,   -96,
      29,   -96,   362,   -96,   382,   -96,   -96,   -96,    21,   -96,
      91,   401,   -96,   426,   645,   645,   445,   -96,   -96,   105,
     -96,   -96,    45,   -96,   648,   673,   470,   692,   711,   -96,
     495,   -96,   520,   545,   570,   -96,   645,   102,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   102,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   137,
     -96,   -96,   -96,   595,   620,   -96,    62,   125,   -96,   159,
     159,   -96,   159,   159,   -96,   -96,   -96,   -96,   207,   211,
      93,   -96,   -96,   -96,   147,   105,   105,    72,    87,   -96,
     -96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   142,   -96,
     148,   -96,   154,   -96,   172,   -96,   143,   -96,   158,   -96,
     167,   -96,   168,   -96,   165,   -96,   171,   -96,   170,   -96,
     163,   -96,   192,   -96,   166,   -96,   144,   -12,   -53,   228,
     145,   -95,   -89,   -14,   -83
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -6
static const yytype_int16 yytable[] =
{
      80,    82,    84,    90,   156,   147,    93,   147,    74,    96,
      75,    10,    11,   158,   104,   105,   133,   106,   107,   108,
     110,   112,   145,   113,   114,    86,    87,   133,   128,   133,
     141,   133,     5,     6,    22,     4,   134,   135,   136,   146,
     133,   142,    77,   133,    76,    34,    15,    16,   100,   101,
      15,   133,   133,   133,   133,   133,    24,   133,    94,   133,
     133,   133,    25,    26,    27,   100,   101,   158,    30,    31,
     137,   134,   135,   136,    78,   100,   101,   157,    97,    93,
     177,   178,   153,   154,    95,    15,   147,   147,   158,   158,
     100,   101,   148,    98,   174,    86,    87,    86,    87,    99,
     133,   133,   179,   169,   168,   139,    86,    87,   100,   101,
     149,    28,   149,    33,   170,   133,    29,   180,    19,    -5,
       1,    36,    -5,    -5,    32,    -5,    -5,    -5,    -5,    -5,
      -5,    20,    -5,    35,    -5,    21,    -5,    -5,    -5,    -5,
      23,    -5,    -5,    -5,    -5,    -5,    -5,   104,   105,    18,
     107,   108,    -5,    -5,    -5,    -5,   175,    -5,    -5,    -5,
      -5,    -5,    -5,    -5,    -5,     5,     6,   140,     7,     8,
       9,    10,    11,    12,   171,    13,    15,    14,   176,    15,
      16,    17,    18,   118,    19,    20,    21,    22,    23,    24,
      85,   119,   122,    86,    87,    25,    26,    27,    28,   120,
      29,    30,    31,    32,    33,    34,    35,    36,   141,   123,
       5,     6,   148,     5,     6,    86,    87,   138,   138,   121,
     124,   116,   126,   125,    15,    16,   130,    15,    16,   117,
     127,   129,   115,   131,    24,   151,    73,    24,     0,     0,
      25,    26,    27,    25,    26,    27,    30,    31,     0,    30,
      31,     5,     6,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     5,     6,     0,    15,    16,     0,     0,     0,
       0,     0,     0,    81,     0,    24,    15,    16,     0,     0,
       0,    25,    26,    27,     0,     0,    24,    30,    31,     5,
       6,     0,    25,    26,    27,     0,     0,     0,    30,    31,
       5,     6,    83,    15,    16,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    15,    16,     0,     0,     0,    25,
      26,    27,     0,     0,    24,    30,    31,     5,     6,     0,
      25,    26,    27,     0,   109,     0,    30,    31,     5,     6,
       0,    15,    16,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    15,    16,     0,     0,     0,    25,    26,    27,
       0,   111,    24,    30,    31,     5,     6,     0,    25,    26,
      27,     0,   132,     0,    30,    31,   143,     0,     0,    15,
      16,     0,     0,     0,     0,     5,     6,     0,     0,    24,
       0,     0,     0,     0,     0,    25,    26,    27,   144,    15,
      16,    30,    31,     0,     5,     6,     0,     0,     0,    24,
       0,     0,     0,     0,     0,    25,    26,    27,    15,    16,
       0,    30,    31,     0,     0,     0,     0,     0,    24,     5,
       6,     0,     0,     0,    25,    26,    27,     0,   150,     0,
      30,    31,     0,    15,    16,     0,     0,   152,     5,     6,
       0,     0,     0,    24,     0,     0,     0,     0,     0,    25,
      26,    27,    15,    16,     0,    30,    31,     0,     0,     0,
       0,     0,    24,     5,     6,     0,     0,     0,    25,    26,
      27,     0,   155,     0,    30,    31,     0,    15,    16,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     5,     6,
       0,     0,     0,    25,    26,    27,     0,   161,     0,    30,
      31,     0,    15,    16,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     5,     6,     0,     0,     0,    25,    26,
      27,     0,   164,     0,    30,    31,     0,    15,    16,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     5,     6,
       0,     0,     0,    25,    26,    27,     0,   165,     0,    30,
      31,     0,    15,    16,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     5,     6,     0,     0,     0,    25,    26,
      27,     0,   166,     0,    30,    31,     0,    15,    16,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     5,     6,
       0,     0,     0,    25,    26,    27,     0,   167,     0,    30,
      31,     0,    15,    16,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     5,     6,     0,     0,     0,    25,    26,
      27,     0,   172,     0,    30,    31,     0,    15,    16,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     5,     6,
       0,     5,     6,    25,    26,    27,     0,   173,     0,    30,
      31,     0,    15,    16,     0,    15,    16,     0,     0,     0,
       0,     0,    24,     0,     0,    24,     5,     6,    25,    26,
      27,    25,   159,    27,    30,    31,     0,    30,    31,     0,
      15,    16,     0,     0,     0,     5,     6,     0,     0,     0,
      24,     0,     0,     0,     0,     0,    25,    26,   160,    15,
      16,     0,    30,    31,     5,     6,     0,     0,     0,    24,
       0,     0,     0,     0,     0,    25,    26,    27,    15,    16,
       0,   162,    31,     0,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,    25,    26,    27,     0,     0,     0,
      30,   163
};

static const yytype_int16 yycheck[] =
{
      12,    13,    14,    17,    99,    88,    18,    90,     1,    21,
       3,     9,    10,   102,    26,    27,    69,    29,    30,    31,
      32,    33,     1,    35,    36,     4,     5,    80,    19,    82,
       1,    84,     3,     4,    25,     0,     3,     4,     5,    18,
      93,    12,    37,    96,    37,    43,    17,    18,     3,     4,
      17,   104,   105,   106,   107,   108,    27,   110,    42,   112,
     113,   114,    33,    34,    35,     3,     4,   156,    39,    40,
      37,     3,     4,     5,    37,     3,     4,    32,     5,    91,
     175,   176,    94,    95,    41,    17,   169,   170,   177,   178,
       3,     4,     1,     5,    32,     4,     5,     4,     5,    33,
     153,   154,    30,   117,   116,    37,     4,     5,     3,     4,
      19,    36,    19,    42,   128,   168,    38,    30,    22,     0,
       1,    45,     3,     4,    41,     6,     7,     8,     9,    10,
      11,    23,    13,    44,    15,    24,    17,    18,    19,    20,
      26,    22,    23,    24,    25,    26,    27,   159,   160,    20,
     162,   163,    33,    34,    35,    36,    31,    38,    39,    40,
      41,    42,    43,    44,    45,     3,     4,    37,     6,     7,
       8,     9,    10,    11,    37,    13,    17,    15,    31,    17,
      18,    19,    20,    41,    22,    23,    24,    25,    26,    27,
       1,    43,    49,     4,     5,    33,    34,    35,    36,    45,
      38,    39,    40,    41,    42,    43,    44,    45,     1,    51,
       3,     4,     1,     3,     4,     4,     5,    72,    73,    47,
      53,    11,    57,    55,    17,    18,    63,    17,    18,    19,
      59,    61,    40,    67,    27,    91,     8,    27,    -1,    -1,
      33,    34,    35,    33,    34,    35,    39,    40,    -1,    39,
      40,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,     3,     4,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    27,    17,    18,    -1,    -1,
      -1,    33,    34,    35,    -1,    -1,    27,    39,    40,     3,
       4,    -1,    33,    34,    35,    -1,    -1,    -1,    39,    40,
       3,     4,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    17,    18,    -1,    -1,    -1,    33,
      34,    35,    -1,    -1,    27,    39,    40,     3,     4,    -1,
      33,    34,    35,    -1,    37,    -1,    39,    40,     3,     4,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    17,    18,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    27,    39,    40,     3,     4,    -1,    33,    34,
      35,    -1,    37,    -1,    39,    40,    14,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    16,    17,
      18,    39,    40,    -1,     3,     4,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    17,    18,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    27,     3,
       4,    -1,    -1,    -1,    33,    34,    35,    -1,    37,    -1,
      39,    40,    -1,    17,    18,    -1,    -1,    21,     3,     4,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    17,    18,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    27,     3,     4,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    -1,    39,    40,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,     3,     4,
      -1,    -1,    -1,    33,    34,    35,    -1,    37,    -1,    39,
      40,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,     3,     4,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    -1,    39,    40,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,     3,     4,
      -1,    -1,    -1,    33,    34,    35,    -1,    37,    -1,    39,
      40,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,     3,     4,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    -1,    39,    40,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,     3,     4,
      -1,    -1,    -1,    33,    34,    35,    -1,    37,    -1,    39,
      40,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,     3,     4,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    -1,    39,    40,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,     3,     4,
      -1,     3,     4,    33,    34,    35,    -1,    37,    -1,    39,
      40,    -1,    17,    18,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    27,     3,     4,    33,    34,
      35,    33,    34,    35,    39,    40,    -1,    39,    40,    -1,
      17,    18,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    17,
      18,    -1,    39,    40,     3,     4,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    17,    18,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,    -1,
      39,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    48,    49,     0,     3,     4,     6,     7,     8,
       9,    10,    11,    13,    15,    17,    18,    19,    20,    22,
      23,    24,    25,    26,    27,    33,    34,    35,    36,    38,
      39,    40,    41,    42,    43,    44,    45,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    84,
      85,    87,    86,    86,     1,     3,    37,    37,    37,    12,
      84,    14,    84,    16,    84,     1,     4,     5,    90,    91,
      90,    82,    83,    84,    42,    41,    84,     5,     5,    33,
       3,     4,    88,    89,    84,    84,    84,    84,    84,    37,
      84,    37,    84,    84,    84,    79,    11,    19,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    19,    75,
      77,    81,    37,    85,     3,     4,     5,    37,    87,    37,
      37,     1,    12,    14,    16,     1,    18,    91,     1,    19,
      37,    83,    21,    84,    84,    37,    88,    32,    89,    34,
      35,    37,    39,    40,    37,    37,    37,    37,    84,    90,
      90,    37,    37,    37,    32,    31,    31,    88,    88,    30,
      30
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 68 "markdown.y"
    { 
            blocknode_create(TAG_EOF, -2, 1, ""); 
            blocklist_parse(); 

            complement_block_nodes((yyvsp[(1) - (1)].node)); 
            rearrange_block_nodes((yyvsp[(1) - (1)].node));
            // fprintf( stderr, "==== traverse ====\n" ); 
            // traverse_nodes($1); 
            fprintf( stderr, "==== merge block nodes ====\n" ); 
            merge_block_nodes((yyvsp[(1) - (1)].node));
            // fprintf( stderr, "==== traverse again ====\n" ); 
            // traverse_nodes($1); 
            fprintf( stderr, "==== parse doc tree ====\n" ); 
            parse_node_tree((yyvsp[(1) - (1)].node));
        ;}
    break;

  case 3:
#line 83 "markdown.y"
    { 
            fprintf( stderr, "==== error ====\n" ); 
        ;}
    break;

  case 4:
#line 89 "markdown.y"
    {
            if (!(yyvsp[(1) - (2)].node)->children) {
                (yyvsp[(1) - (2)].node)->children = (yyvsp[(2) - (2)].node);
                (yyvsp[(2) - (2)].node)->parent = (yyvsp[(1) - (2)].node);
            }

            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);

            // must avoid self-linking
            if (_tail_node != (yyvsp[(2) - (2)].node)) {
                _tail_node->next = (yyvsp[(2) - (2)].node);
                (yyvsp[(2) - (2)].node)->prev = _tail_node;
                (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            }

            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 5:
#line 106 "markdown.y"
    {
            _node = block_node_create(
                TAG_ROOT
                , -100
                , 0
            );
            (yyval.node) = _node;
        ;}
    break;

  case 6:
#line 119 "markdown.y"
    { 
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 7:
#line 122 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 8:
#line 125 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 9:
#line 128 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 10:
#line 131 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 11:
#line 134 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 12:
#line 137 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 13:
#line 140 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 14:
#line 143 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 15:
#line 146 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 16:
#line 149 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 17:
#line 152 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 18:
#line 155 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 19:
#line 158 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 20:
#line 161 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 21:
#line 164 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 22:
#line 167 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 23:
#line 173 "markdown.y"
    {              
            tag_check_stack(TAG_H, 0); 
            tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));
            blocknode_create(
                TAG_H
                , 0
                , 3
                , (yyvsp[(1) - (3)].text)
                , tag_info->attr
                , tag_info->content
            );

            _node = block_node_create(
                TAG_H
                , 0
                , 3
                , tag_info->attr
                , tag_info->content
                , (yyvsp[(1) - (3)].text)
            );

            (yyval.node) = _node;
        ;}
    break;

  case 24:
#line 197 "markdown.y"
    { 
            tag_check_stack(TAG_QUOTE_H, 0); 
            tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));
            blocknode_create(
                TAG_QUOTE_H
                , 0
                , 3
                , (yyvsp[(1) - (3)].text)
                , tag_info->attr
                , tag_info->content
            );

            _node = block_node_create(
                TAG_QUOTE_H
                , 0
                , 3
                , tag_info->attr
                , tag_info->content
                , (yyvsp[(1) - (3)].text)
            );

            (yyval.node) = _node;
        ;}
    break;

  case 25:
#line 223 "markdown.y"
    {
            tag_check_stack(TAG_HTMLBLOCK, 0);
            blocknode_create(
                    TAG_HTMLBLOCK
                    , 0
                    , 2
                    , (yyvsp[(1) - (3)].text)
                    , (yyvsp[(2) - (3)].text)
                );

            _node = block_node_create(
                TAG_HTMLBLOCK
                , 0
                , 2
                , (yyvsp[(1) - (3)].text)
                , (yyvsp[(2) - (3)].text)
            );

            (yyval.node) = _node;
            fprintf(stderr, "htmlblock 1: %s\n", (yyvsp[(1) - (3)].text));
        ;}
    break;

  case 26:
#line 245 "markdown.y"
    {
            tag_check_stack(TAG_HTMLBLOCK, 0);
            blocknode_create(
                    TAG_HTMLBLOCK
                    , 0
                    , 2
                    , (yyvsp[(1) - (2)].text)
                    , ""
                );

            _node = block_node_create(
                TAG_HTMLBLOCK
                , 0
                , 2
                , (yyvsp[(1) - (2)].text)
                , ""
            );

            (yyval.node) = _node;
            fprintf(stderr, "htmlblock 2: %s\n", (yyvsp[(1) - (2)].text));
        ;}
    break;

  case 27:
#line 267 "markdown.y"
    {
            tag_check_stack(TAG_HTMLBLOCK, 0);
            blocknode_create(
                    TAG_HTMLBLOCK
                    , 0
                    , 2
                    , (yyvsp[(1) - (2)].text)
                    , ""
                );

            _node = block_node_create(
                TAG_HTMLBLOCK
                , 0
                , 2
                , (yyvsp[(1) - (2)].text)
                , ""
            );

            (yyval.node) = _node;
            fprintf(stderr, "htmlblock 3: %s\n", (yyvsp[(1) - (2)].text));
        ;}
    break;

  case 28:
#line 292 "markdown.y"
    {
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 29:
#line 295 "markdown.y"
    {
            _node = block_node_create(
                TAG_LINES
                , 0
                , 0
            );    

            (yyval.node) = _node;
        ;}
    break;

  case 30:
#line 308 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 31:
#line 315 "markdown.y"
    { 
            _node = block_node_create(
                TAG_BLOCK_P
                , 0
                , 1
                , *((yyvsp[(1) - (1)].node)->ops)
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 32:
#line 329 "markdown.y"
    { 
            tag_check_stack(TAG_P, 0); 
            tag_info = markdown_get_tag_info((yyvsp[(1) - (2)].text));
            blocknode_create(
                TAG_P
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );

            _node = block_node_create(
                TAG_P
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
            (yyval.node) = _node;
        ;}
    break;

  case 33:
#line 350 "markdown.y"
    { 
            blocknode_create(TAG_EOF, -2, 1, str_concat( (yyvsp[(1) - (3)].text), (yyvsp[(2) - (3)].text) )); 
            blocklist_parse(); 

            tag_info = markdown_get_tag_info(str_concat((yyvsp[(1) - (3)].text), (yyvsp[(2) - (3)].text)));
            _node = block_node_create(
                TAG_P
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
            (yyval.node) = _node;
        ;}
    break;

  case 34:
#line 365 "markdown.y"
    {
            blocknode_create(TAG_EOF, -2, 1, str_concat( (yyvsp[(1) - (3)].text), (yyvsp[(2) - (3)].text) )); 
            blocklist_parse(); 

            tag_info = markdown_get_tag_info(str_concat((yyvsp[(1) - (3)].text), (yyvsp[(2) - (3)].text)));
            _node = block_node_create(
                TAG_P
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
            (yyval.node) = _node;
        ;}
    break;

  case 35:
#line 382 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 36:
#line 389 "markdown.y"
    {
            _node = block_node_create(
                TAG_BLOCK_BLANK
                , 0
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 37:
#line 402 "markdown.y"
    { 
            tag_check_stack(TAG_BLANK, 100); 
            blocknode_create(TAG_BLANK, 100, 1, "");

            _node = block_node_create(
                TAG_BLANK
                , 0
                , 0
            );
            (yyval.node) = _node;
        ;}
    break;

  case 38:
#line 416 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 39:
#line 423 "markdown.y"
    {
            _node = block_node_create(
                TAG_BLOCK_QUOTE_P
                , (yyvsp[(1) - (1)].node)->level
                , 1
                , *((yyvsp[(1) - (1)].node)->ops)
            );

            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 40:
#line 438 "markdown.y"
    { 
            tag_check_stack(TAG_QUOTE_P, 0); 
            tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));
            blocknode_create(
                TAG_QUOTE_P
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );

            _node = block_node_create(
                TAG_QUOTE_P
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
            (yyval.node) = _node;
        ;}
    break;

  case 41:
#line 461 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 42:
#line 468 "markdown.y"
    {
            _node = block_node_create(
                TAG_BLOCK_UL
                , 0
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 43:
#line 481 "markdown.y"
    { 
            tag_check_stack(TAG_UL, 0); 
            tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));
            blocknode_create(
                TAG_UL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );

            _node = block_node_create(
                TAG_UL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
            (yyval.node) = _node;
        ;}
    break;

  case 44:
#line 502 "markdown.y"
    { 
            tag_check_stack(TAG_UL, 0); 
            blocknode_create(
                TAG_UL
                , 0
                , 2
                , ""
                , ""
            );

            _node = block_node_create(
                TAG_UL
                , 0
                , 2
                , "" 
                , ""
            );
            (yyval.node) = _node;
        ;}
    break;

  case 45:
#line 524 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 46:
#line 531 "markdown.y"
    {
            _node = block_node_create(
                TAG_BLOCK_INDENT_UL
                , (yyvsp[(1) - (1)].node)->level
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 47:
#line 544 "markdown.y"
    { 
            tag_check_stack(TAG_INDENT_UL, indent_level((yyvsp[(1) - (4)].text))); 
            tag_info = markdown_get_tag_info((yyvsp[(3) - (4)].text));
            blocknode_create(
                TAG_INDENT_UL
                , indent_level((yyvsp[(1) - (4)].text))
                , 3
                , (yyvsp[(1) - (4)].text)
                , tag_info -> attr
                , tag_info -> content
            );

            _node = block_node_create(
                TAG_INDENT_UL
                , indent_level((yyvsp[(1) - (4)].text))
                , 3
                , tag_info -> attr
                , tag_info -> content
                , (yyvsp[(1) - (4)].text)
            );
            (yyval.node) = _node;
        ;}
    break;

  case 48:
#line 569 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 49:
#line 576 "markdown.y"
    {
            _node = block_node_create(
                TAG_BLOCK_QUOTE_UL
                , (yyvsp[(1) - (1)].node)->level
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 50:
#line 589 "markdown.y"
    { 
            tag_check_stack(TAG_QUOTE_UL, 0); 
            tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));
            blocknode_create(
                TAG_QUOTE_UL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );

            _node = block_node_create(
                TAG_QUOTE_UL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
            (yyval.node) = _node;
        ;}
    break;

  case 51:
#line 615 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 52:
#line 622 "markdown.y"
    {
            _node = block_node_create(
                TAG_BLOCK_OL
                , 0
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 53:
#line 635 "markdown.y"
    { 
            tag_check_stack(TAG_OL, 0); 
            tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));
            blocknode_create(
                TAG_OL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );

            _node = block_node_create(
                TAG_OL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
            (yyval.node) = _node;
        ;}
    break;

  case 54:
#line 655 "markdown.y"
    { 
            tag_check_stack(TAG_OL, 0); 
            blocknode_create(
                TAG_OL
                , 0
                , 2
                , ""
                , ""
            );

            _node = block_node_create(
                TAG_OL
                , 0
                , 2
                , "" 
                , ""
            );
            (yyval.node) = _node;
        ;}
    break;

  case 55:
#line 677 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 56:
#line 684 "markdown.y"
    {
            _node = block_node_create(
                TAG_BLOCK_INDENT_OL
                , (yyvsp[(1) - (1)].node)->level
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 57:
#line 697 "markdown.y"
    { 
            tag_check_stack(TAG_INDENT_OL, indent_level((yyvsp[(1) - (4)].text))); 
            tag_info = markdown_get_tag_info((yyvsp[(3) - (4)].text));
            blocknode_create(
                TAG_INDENT_OL
                , indent_level((yyvsp[(1) - (4)].text))
                , 3
                , (yyvsp[(1) - (4)].text)
                , tag_info -> attr
                , tag_info -> content
            );

            _node = block_node_create(
                TAG_INDENT_OL
                , indent_level((yyvsp[(1) - (4)].text))
                , 3
                , tag_info -> attr
                , tag_info -> content
                , (yyvsp[(1) - (4)].text)
            );
            (yyval.node) = _node;
        ;}
    break;

  case 58:
#line 722 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 59:
#line 729 "markdown.y"
    {
            _node = block_node_create(
                TAG_BLOCK_QUOTE_OL
                , (yyvsp[(1) - (1)].node)->level
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 60:
#line 742 "markdown.y"
    { 
            tag_check_stack(TAG_QUOTE_OL, 0); 
            tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));
            blocknode_create(
                TAG_QUOTE_OL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
                );

            _node = block_node_create(
                TAG_QUOTE_OL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
            (yyval.node) = _node;
        ;}
    break;

  case 61:
#line 766 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 62:
#line 773 "markdown.y"
    {
            _node = block_node_create(
                TAG_BLOCK_INDENT_TEXT
                , (yyvsp[(1) - (1)].node)->level
                , 1
                , *((yyvsp[(1) - (1)].node)->ops)
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 63:
#line 787 "markdown.y"
    { 
            /*
             *      * list
             *          content
             * 
             *      输出：
             *      <ul><li>listcontent</li>
             *
             *      * list
             *
             *          content
             *
             *      输出：
             *      <ul><li>list
             *      <p>content</p></li>
             */
            if(is_last_tag_blank()){
                tag_check_stack(TAG_INDENT_P, indent_level((yyvsp[(1) - (3)].text))); 
                tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));
                blocknode_create(
                    TAG_INDENT_P
                    , indent_level((yyvsp[(1) - (3)].text))
                    , 3
                    , (yyvsp[(1) - (3)].text)
                    , tag_info -> attr
                    , tag_info -> content
                );
            }
            else {
                tag_check_stack(TAG_INDENT_TEXT, indent_level((yyvsp[(1) - (3)].text))); 
                tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));
                blocknode_create(
                    TAG_INDENT_TEXT
                    , indent_level((yyvsp[(1) - (3)].text))
                    , 3
                    , (yyvsp[(1) - (3)].text)
                    , tag_info -> attr
                    , tag_info -> content
                );
            }

            _node = block_node_create(
                TAG_INDENT_TEXT
                , indent_level((yyvsp[(1) - (3)].text))
                , 3
                , tag_info -> attr
                , tag_info -> content
                , (yyvsp[(1) - (3)].text)
            );
            (yyval.node) = _node;
        ;}
    break;

  case 64:
#line 842 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 65:
#line 849 "markdown.y"
    {
            _node = block_node_create(
                TAG_BLOCK_PRE 
                , (yyvsp[(1) - (1)].node)->level
                , 1
                , *((yyvsp[(1) - (1)].node)->ops)
            );

            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;

            (yyval.node) = _node;
        ;}
    break;

  case 66:
#line 865 "markdown.y"
    {
            tag_check_stack(TAG_PRE, 0); 
            tag_info = markdown_get_tag_info((yyvsp[(2) - (2)].text));
            blocknode_create(
                    TAG_PRE
                    , 0
                    , 2
                    , tag_info -> attr
                    , str_padding_left( 
                        tag_info -> content
                        , 4 * ( indent_level((yyvsp[(1) - (2)].text)) - 1 ) 
                    ) 
                );

            _node = inline_node_create(
                TAG_PRE
                , 0
                , 2
                , tag_info -> attr
                , str_padding_left( 
                    tag_info -> content
                    , 4 * ( indent_level((yyvsp[(1) - (2)].text)) - 1 ) 
                ) 
            );
            (yyval.node) = _node;
        ;}
    break;

  case 67:
#line 891 "markdown.y"
    {
            tag_check_stack(TAG_PRE, 0); 
            tag_info = markdown_get_tag_info((yyvsp[(2) - (4)].text));
            blocknode_create(
                    TAG_PRE
                    , 0
                    , 2
                    , tag_info -> attr
                    , tag_info -> content
                );

            _node = block_node_create(
                TAG_PRE
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
            (yyval.node) = _node;
        ;}
    break;

  case 68:
#line 915 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 69:
#line 922 "markdown.y"
    {
            _node = block_node_create(
                TAG_BLOCK_INDENT_PRE 
                , (yyvsp[(1) - (1)].node)->level
                , 1
                , *((yyvsp[(1) - (1)].node)->ops)
            );

            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;

            (yyval.node) = _node;
        ;}
    break;

  case 70:
#line 938 "markdown.y"
    {
            _inner_pre_level = inner_pre_level(indent_level((yyvsp[(1) - (2)].text)));

            /* PRE indent level is 1 less than the literal indent */
            tag_check_stack(TAG_INDENT_PRE, _inner_pre_level); 
            tag_info = markdown_get_tag_info((yyvsp[(2) - (2)].text));
            blocknode_create(
                    TAG_INDENT_PRE
                    , _inner_pre_level
                    , 2
                    , tag_info -> attr
                    , str_padding_left( 
                        tag_info -> content
                        , 4 * ( indent_level((yyvsp[(1) - (2)].text)) - _inner_pre_level - 1 ) 
                    )
                );

            _node = inline_node_create(
                TAG_INDENT_PRE
                , _inner_pre_level
                , 2
                , tag_info -> attr
                , str_padding_left( 
                    tag_info -> content
                    , 4 * ( indent_level((yyvsp[(1) - (2)].text)) - _inner_pre_level - 1 ) 
                )
            );
            (yyval.node) = _node;
        ;}
    break;

  case 71:
#line 971 "markdown.y"
    {
            tag_check_stack(TAG_SCRIPTBLOCK, 0);
            blocknode_create(
                    TAG_SCRIPTBLOCK
                    , 0
                    , 3
                    , (yyvsp[(1) - (3)].text)
                    , (yyvsp[(2) - (3)].text)
                    , (yyvsp[(3) - (3)].text)
                );

            _node = block_node_create(
                TAG_SCRIPTBLOCK
                , 0
                , 3
                , (yyvsp[(1) - (3)].text)
                , (yyvsp[(2) - (3)].text)
                , (yyvsp[(3) - (3)].text)
            );

            (yyval.node) = _node;
        ;}
    break;

  case 72:
#line 994 "markdown.y"
    {
            tag_check_stack(TAG_SCRIPTBLOCK, 0);
            blocknode_create(
                    TAG_SCRIPTBLOCK
                    , 0
                    , 3
                    , (yyvsp[(1) - (2)].text)
                    , ""
                    , (yyvsp[(2) - (2)].text)
                );

            _node = block_node_create(
                TAG_SCRIPTBLOCK
                , 0
                , 3
                , (yyvsp[(1) - (2)].text)
                , ""
                , (yyvsp[(2) - (2)].text)
            );

            (yyval.node) = _node;
        ;}
    break;

  case 73:
#line 1017 "markdown.y"
    {
            tag_check_stack(TAG_STYLEBLOCK, 0);
            blocknode_create(
                    TAG_STYLEBLOCK
                    , 0
                    , 3
                    , (yyvsp[(1) - (3)].text)
                    , (yyvsp[(2) - (3)].text)
                    , (yyvsp[(3) - (3)].text)
                );

            _node = block_node_create(
                TAG_SCRIPTBLOCK
                , 0
                , 3
                , (yyvsp[(1) - (3)].text)
                , (yyvsp[(2) - (3)].text)
                , (yyvsp[(3) - (3)].text)
            );

            (yyval.node) = _node;
        ;}
    break;

  case 74:
#line 1040 "markdown.y"
    {
            tag_check_stack(TAG_STYLEBLOCK, 0);
            blocknode_create(
                    TAG_STYLEBLOCK
                    , 0
                    , 3
                    , (yyvsp[(1) - (2)].text)
                    , ""
                    , (yyvsp[(2) - (2)].text)
                );

            _node = block_node_create(
                TAG_SCRIPTBLOCK
                , 0
                , 3
                , (yyvsp[(1) - (2)].text)
                , ""
                , (yyvsp[(2) - (2)].text)
            );

            (yyval.node) = _node;
        ;}
    break;

  case 75:
#line 1063 "markdown.y"
    {
            tag_check_stack(TAG_SVGBLOCK, 0);
            blocknode_create(
                    TAG_SVGBLOCK
                    , 0
                    , 3
                    , (yyvsp[(1) - (3)].text)
                    , (yyvsp[(2) - (3)].text)
                    , (yyvsp[(3) - (3)].text)
                );

            _node = block_node_create(
                TAG_SVGBLOCK
                , 0
                , 3
                , (yyvsp[(1) - (3)].text)
                , (yyvsp[(2) - (3)].text)
                , (yyvsp[(3) - (3)].text)
            );

            (yyval.node) = _node;
        ;}
    break;

  case 76:
#line 1086 "markdown.y"
    {
            tag_check_stack(TAG_SVGBLOCK, 0);
            blocknode_create(
                    TAG_SVGBLOCK
                    , 0
                    , 3
                    , (yyvsp[(1) - (2)].text)
                    , ""
                    , (yyvsp[(2) - (2)].text)
                );

            _node = block_node_create(
                TAG_SVGBLOCK
                , 0
                , 3
                , (yyvsp[(1) - (2)].text)
                , ""
                , (yyvsp[(2) - (2)].text)
            );

            (yyval.node) = _node;
        ;}
    break;

  case 77:
#line 1113 "markdown.y"
    { 
            tag_check_stack(TAG_QUOTE_BLANK, 0); 
            blocknode_create(TAG_QUOTE_BLANK, 0, 1, "");
        ;}
    break;

  case 78:
#line 1118 "markdown.y"
    {
            tag_check_stack(TAG_SECTION, -1); 
            blocknode_create(TAG_SECTION, -1, 1, (yyvsp[(1) - (2)].text));
        ;}
    break;

  case 79:
#line 1123 "markdown.y"
    {
            tag_check_stack(TAG_VSECTION, -1); 
            blocknode_create(TAG_VSECTION, -1, 1, (yyvsp[(1) - (2)].text));
        ;}
    break;

  case 80:
#line 1130 "markdown.y"
    {
                                                            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
                                                            _tail_node->next = (yyvsp[(2) - (2)].node);
                                                            (yyvsp[(2) - (2)].node)->prev = _tail_node; 
                                                            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
                                                            (yyval.node) = (yyvsp[(1) - (2)].node); 
                                                        ;}
    break;

  case 81:
#line 1137 "markdown.y"
    {
                                                            _node = block_node_create(
                                                                TAG_TABLE
                                                                , 0
                                                                , 0
                                                            );
                                                            _node->children = (yyvsp[(1) - (1)].node);
                                                            (yyvsp[(1) - (1)].node)->parent = _node;
                                                            (yyval.node) = _node; 
                                                        ;}
    break;

  case 82:
#line 1149 "markdown.y"
    {
                                                            (yyval.node) = (yyvsp[(2) - (3)].node);
                                                        ;}
    break;

  case 83:
#line 1156 "markdown.y"
    { 
                                                            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children); 
                                                            _tail_node->next = (yyvsp[(2) - (2)].node); 
                                                            (yyvsp[(2) - (2)].node)->prev = _tail_node;
                                                            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
                                                            (yyval.node) = (yyvsp[(1) - (2)].node);
                                                        ;}
    break;

  case 84:
#line 1163 "markdown.y"
    {
                                                            _node = inline_node_create(
                                                                TAG_TR
                                                                , 1
                                                                , 0
                                                            );

                                                            _node->children = (yyvsp[(1) - (1)].node);
                                                            (yyvsp[(1) - (1)].node)->parent = _node;
                                                            (yyval.node) = _node;
                                                        ;}
    break;

  case 85:
#line 1177 "markdown.y"
    {
                                                            tag_info = markdown_get_tag_info((yyvsp[(1) - (2)].text));
                                                            // fprintf(stderr, "inlineelements: %s; attr: %s; content: %s\n", $1, tag_info->attr, tag_info->content);
                                                            _node = inline_node_create(
                                                                TAG_TD
                                                                , 2
                                                                , 2
                                                                , tag_info -> attr
                                                                , tag_info -> content
                                                            );
                                                            (yyval.node) = _node;
                                                        ;}
    break;

  case 86:
#line 1192 "markdown.y"
    { (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 87:
#line 1193 "markdown.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 88:
#line 1197 "markdown.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 89:
#line 1198 "markdown.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 90:
#line 1200 "markdown.y"
    { (yyval.text) = create_emphasis((yyvsp[(2) - (3)].text)); ;}
    break;

  case 91:
#line 1201 "markdown.y"
    { (yyval.text) = create_emphasis((yyvsp[(2) - (3)].text)); ;}
    break;

  case 92:
#line 1202 "markdown.y"
    { (yyval.text) = create_strong((yyvsp[(2) - (3)].text)); ;}
    break;

  case 93:
#line 1203 "markdown.y"
    { (yyval.text) = create_strong((yyvsp[(2) - (3)].text)); ;}
    break;

  case 94:
#line 1205 "markdown.y"
    { 
                                            tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));
                                            (yyval.text) = create_codespan( 
                                                tag_info -> attr
                                                , html_escape(tag_info -> content) 
                                            ); 
                                        ;}
    break;

  case 95:
#line 1212 "markdown.y"
    { 
                                            (yyval.text) = str_concat( (yyvsp[(1) - (3)].text), (yyvsp[(2) - (3)].text) );
                                            // fprintf( stderr, "BACKTICK codespan error: \n\n%s\n\n", $2 );
                                            yyerrok;
                                            yyclearin;
                                        ;}
    break;

  case 96:
#line 1218 "markdown.y"
    { 
                                            (yyval.text) = (yyvsp[(1) - (2)].text);
                                            // fprintf( stderr, "BACKTICK error: \n\n%s\n\n", $1 );
                                            yyerrok;
                                        ;}
    break;

  case 97:
#line 1224 "markdown.y"
    {
                                 (yyval.text) = create_link((yyvsp[(2) - (6)].text), (yyvsp[(5) - (6)].text));
                                ;}
    break;

  case 98:
#line 1227 "markdown.y"
    {
                                 (yyval.text) = create_image((yyvsp[(3) - (7)].text), (yyvsp[(6) - (7)].text));
                                ;}
    break;

  case 99:
#line 1230 "markdown.y"
    { 
                                    (yyval.text) = (yyvsp[(1) - (1)].text); 
                                ;}
    break;

  case 100:
#line 1236 "markdown.y"
    { (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 101:
#line 1237 "markdown.y"
    { (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 102:
#line 1238 "markdown.y"
    { (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 103:
#line 1239 "markdown.y"
    { (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 104:
#line 1240 "markdown.y"
    { (yyval.text) = ""; ;}
    break;

  case 105:
#line 1244 "markdown.y"
    {
                                        tag_info = markdown_get_tag_info((yyvsp[(1) - (1)].text));
                                        (yyval.text) = create_link( 
                                            tag_info -> content
                                            , html_escape(tag_info -> content) 
                                        ); 
                                    ;}
    break;

  case 106:
#line 1254 "markdown.y"
    { (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 107:
#line 1255 "markdown.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 108:
#line 1259 "markdown.y"
    { (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;

  case 109:
#line 1260 "markdown.y"
    { (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;

  case 110:
#line 1264 "markdown.y"
    { (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 111:
#line 1265 "markdown.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 112:
#line 1269 "markdown.y"
    { (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;

  case 113:
#line 1270 "markdown.y"
    { (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3258 "markdown.y.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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


#line 1273 "markdown.y"



/* export yyparse through markdown */
void markdown( void ){
    yyparse();
}


