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
     CODEINDENT = 280,
     EXCLAMATION = 281,
     MINUS = 282,
     PLUS = 283,
     RIGHTPARENTHESES = 284,
     LEFTPARENTHESES = 285,
     RIGHTSQUARE = 286,
     LEFTSQUARE = 287,
     UNDERSCORE = 288,
     STAR = 289,
     BLANKLINE = 290,
     LINEBREAK = 291,
     LARGERTHAN = 292,
     DOUBLESTAR = 293,
     DOUBLEUNDERSCORE = 294,
     OLSTART = 295,
     ULSTART = 296,
     QUOTEBLANKLINE = 297,
     QUOTEOLSTART = 298,
     QUOTEULSTART = 299,
     STARX = 300
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
#define CODEINDENT 280
#define EXCLAMATION 281
#define MINUS 282
#define PLUS 283
#define RIGHTPARENTHESES 284
#define LEFTPARENTHESES 285
#define RIGHTSQUARE 286
#define LEFTSQUARE 287
#define UNDERSCORE 288
#define STAR 289
#define BLANKLINE 290
#define LINEBREAK 291
#define LARGERTHAN 292
#define DOUBLESTAR 293
#define DOUBLEUNDERSCORE 294
#define OLSTART 295
#define ULSTART 296
#define QUOTEBLANKLINE 297
#define QUOTEOLSTART 298
#define QUOTEULSTART 299
#define STARX 300




/* Copy the first part of user declarations.  */
#line 1 "markdown.y"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "htmltags.h" 
#include "blocknode.h" 
#include "node.h"

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
#line 29 "markdown.y"
{
    char *text;
    t_blocknode *block_node;
    t_node *node;
}
/* Line 193 of yacc.c.  */
#line 219 "markdown.y.c"
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
#line 244 "markdown.y.c"

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
#define YYLAST   644

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNRULES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    13,    16,    19,    22,
      25,    28,    29,    32,    34,    37,    40,    42,    44,    47,
      49,    53,    56,    58,    62,    65,    68,    70,    75,    77,
      80,    83,    87,    91,    95,    99,   104,   108,   112,   115,
     120,   123,   127,   130,   134,   137,   141,   145,   148,   152,
     156,   159,   162,   165,   167,   171,   174,   176,   179,   182,
     184,   186,   188,   192,   196,   200,   204,   208,   212,   215,
     222,   230,   232,   235,   238,   241,   244,   245,   247,   250,
     252,   254,   256,   259,   261,   263
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    48,    -1,     1,    -1,    48,    59,    -1,
      48,    60,    -1,    48,    49,    -1,    48,    55,    -1,    48,
      57,    -1,    48,    51,    -1,    48,    53,    -1,    -1,    49,
      50,    -1,    50,    -1,    64,    36,    -1,    51,    52,    -1,
      52,    -1,    35,    -1,    53,    54,    -1,    54,    -1,    37,
      64,    36,    -1,    55,    56,    -1,    56,    -1,    41,    64,
      36,    -1,    41,    36,    -1,    57,    58,    -1,    58,    -1,
      22,    41,    64,    36,    -1,    42,    -1,     9,    36,    -1,
      10,    36,    -1,     6,    66,    36,    -1,     7,    68,    36,
      -1,    40,    64,    36,    -1,    43,    64,    36,    -1,    23,
      40,    64,    36,    -1,    44,    64,    36,    -1,    24,    64,
      36,    -1,    25,     5,    -1,    19,    70,    19,    36,    -1,
      19,     1,    -1,     8,     3,    36,    -1,     8,    36,    -1,
      11,    64,    12,    -1,    11,    12,    -1,    11,     1,    36,
      -1,    15,    64,    16,    -1,    15,    16,    -1,    15,     1,
      36,    -1,    13,    64,    14,    -1,    13,    14,    -1,     1,
      36,    -1,    60,    61,    -1,    61,    -1,    20,    62,    36,
      -1,    62,    63,    -1,    63,    -1,    64,    21,    -1,    64,
      65,    -1,    65,    -1,     3,    -1,     4,    -1,    34,    64,
      34,    -1,    33,    64,    33,    -1,    38,    64,    38,    -1,
      39,    64,    39,    -1,    18,    70,    18,    -1,    18,    70,
       1,    -1,    18,     1,    -1,    32,    68,    31,    30,    68,
      29,    -1,    26,    32,    68,    31,    30,    68,    29,    -1,
      67,    -1,    66,     3,    -1,    66,    67,    -1,    66,     5,
      -1,    66,     4,    -1,    -1,    17,    -1,    68,    69,    -1,
      69,    -1,     3,    -1,     4,    -1,    70,    71,    -1,    71,
      -1,     5,    -1,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    61,    65,    68,    73,    78,    83,    88,
      93,    98,   110,   115,   127,   150,   155,   167,   181,   186,
     190,   213,   218,   230,   251,   273,   278,   290,   318,   323,
     328,   333,   345,   359,   371,   383,   396,   408,   449,   482,
     504,   510,   521,   532,   544,   556,   560,   572,   584,   588,
     600,   612,   621,   626,   637,   650,   651,   655,   670,   671,
     675,   676,   678,   679,   680,   681,   683,   690,   696,   702,
     705,   708,   714,   715,   716,   717,   718,   722,   732,   733,
     737,   738,   742,   743,   747,   748
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
  "OLINDENT", "TEXTINDENT", "CODEINDENT", "EXCLAMATION", "MINUS", "PLUS",
  "RIGHTPARENTHESES", "LEFTPARENTHESES", "RIGHTSQUARE", "LEFTSQUARE",
  "UNDERSCORE", "STAR", "BLANKLINE", "LINEBREAK", "LARGERTHAN",
  "DOUBLESTAR", "DOUBLEUNDERSCORE", "OLSTART", "ULSTART", "QUOTEBLANKLINE",
  "QUOTEOLSTART", "QUOTEULSTART", "STARX", "$accept", "markdownfile",
  "lines", "block_p", "line_p", "block_blank", "line_blank",
  "block_quote_p", "line_quote_p", "block_ul", "line_ul",
  "block_indent_ul", "line_indent_ul", "line", "tablerows", "tablerow",
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
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    48,    48,    48,    48,
      48,    48,    49,    49,    50,    51,    51,    52,    53,    53,
      54,    55,    55,    56,    56,    57,    57,    58,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    60,    60,    61,    62,    62,    63,    64,    64,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    66,    66,    66,    67,    68,    68,
      69,    69,    70,    70,    71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     0,     2,     1,     2,     2,     1,     1,     2,     1,
       3,     2,     1,     3,     2,     2,     1,     4,     1,     2,
       2,     3,     3,     3,     3,     4,     3,     3,     2,     4,
       2,     3,     2,     3,     2,     3,     3,     2,     3,     3,
       2,     2,     2,     1,     3,     2,     1,     2,     2,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     2,     6,
       7,     1,     2,     2,     2,     2,     0,     1,     2,     1,
       1,     1,     2,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     1,     0,    60,    61,    76,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,    28,     0,     0,     6,    13,     9,
      16,    10,    19,     7,    22,     8,    26,     4,     5,    53,
       0,    59,    71,    51,     0,    80,    81,     0,    79,     0,
      42,    29,    30,     0,    44,     0,    50,     0,     0,    47,
       0,    68,    85,    84,     0,    83,    40,     0,     0,    56,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,    12,    15,    18,
      21,    25,    52,    14,    58,    72,    75,    74,    31,    73,
      32,    78,    41,    45,    43,    49,    48,    46,    67,    66,
      82,     0,    54,    55,    57,     0,     0,    37,     0,     0,
      63,    62,    20,    64,    65,    33,    23,    34,    36,    39,
      27,    35,     0,     0,     0,     0,     0,    69,    70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    78,    79,    50,    51,
      54,    52,    57,    58,    74,    75
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -55
static const yytype_int16 yypact[] =
{
     124,   -55,    15,   169,   -55,   -10,   -55,   -55,   -55,    38,
       2,    -5,    17,    72,   223,   213,   -55,    95,   108,   531,
      16,    20,   531,    65,    39,    38,   531,   531,   -55,   531,
     531,   531,   531,   250,   -55,   531,   531,   531,   -55,    37,
     -55,    44,   -55,    42,   -55,    60,   -55,   -55,    67,   -55,
     261,   -55,   -55,   -55,    41,   -55,   -55,    25,   -55,    52,
     -55,   -55,   -55,    58,   -55,   298,   -55,   308,    59,   -55,
     335,   -55,   -55,   -55,    62,   -55,   -55,    74,   345,   -55,
     372,   531,   531,   382,   -55,    38,     4,   557,   568,   409,
     594,   605,   420,   -55,   446,   457,   483,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,    61,   -55,   -55,   -55,   494,   520,   -55,     8,    71,
      85,    85,   -55,    85,    85,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,    73,    38,    38,    30,    33,   -55,   -55
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -55,   -55,   -55,   -55,    70,   -55,    69,   -55,    75,   -55,
      76,   -55,    81,   -55,   -55,    66,   -55,    51,   -13,   -40,
     -55,    82,   -21,   -54,    97,   -53
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -12
static const yytype_int16 yytable[] =
{
      65,    67,    70,   111,    86,    59,    80,    55,    56,    83,
     104,    55,    56,    87,    88,     4,    89,    90,    91,    92,
      94,   120,    95,    96,   120,   104,    53,   104,    55,    56,
     104,    61,   111,    55,    56,   129,    55,    56,    60,   142,
     104,    55,    56,   104,   105,   106,   107,   104,   104,   104,
     104,   104,   104,    62,   104,   104,   104,    81,    16,   147,
      82,   110,   148,   118,   128,    80,    72,    73,   125,   126,
      84,    85,    28,    63,   111,     6,     7,   108,    72,    73,
     119,    29,    20,    33,    64,   104,   104,    19,   112,    16,
      17,   111,   111,   121,   113,   116,    71,   139,    24,    72,
      73,   143,    16,   144,    25,    26,    27,    97,    98,    76,
      30,    31,    72,    73,   102,    77,    99,    87,    88,   100,
      90,    91,   145,   146,   -11,     1,   101,   -11,   -11,   123,
     -11,   -11,   -11,   -11,   -11,   -11,   109,   -11,     0,   -11,
       0,   -11,   -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,
     -11,     0,     0,     0,     0,     0,   -11,   -11,   -11,   -11,
       0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,    -2,
       5,     0,     6,     7,     0,     8,     9,    10,    11,    12,
      13,     0,    14,     0,    15,     0,    16,    17,    18,    19,
       0,    20,    21,    22,    23,    24,     0,     0,     0,     0,
       0,    25,    26,    27,    28,     0,    29,    30,    31,    32,
      33,    34,    35,    36,    68,     0,     6,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     7,     0,    69,
      16,    17,     0,     0,     0,     0,     0,    66,     0,    24,
      16,    17,     0,     0,     0,    25,    26,    27,     0,    24,
       0,    30,    31,     6,     7,    25,    26,    27,     0,     0,
       0,    30,    31,     0,     6,     7,     0,    16,    17,     0,
       0,     0,     0,     0,     0,     0,    24,     0,    16,    17,
       0,     0,    25,    26,    27,     0,    93,    24,    30,    31,
       0,     0,     0,    25,    26,    27,     0,   103,     0,    30,
      31,     6,     7,     0,     0,     0,     0,     0,     0,     0,
     114,     6,     7,     0,     0,    16,    17,     0,     0,     0,
       0,     0,   115,     0,    24,    16,    17,     0,     0,     0,
      25,    26,    27,     0,    24,     0,    30,    31,     6,     7,
      25,    26,    27,     0,     0,     0,    30,    31,     6,     7,
       0,   117,    16,    17,     0,     0,     0,     0,     0,     0,
       0,    24,    16,    17,     0,     0,     0,    25,    26,    27,
       0,    24,     0,    30,    31,     6,     7,    25,    26,    27,
       0,   122,     0,    30,    31,     6,     7,     0,     0,    16,
      17,     0,     0,   124,     0,     0,     0,     0,    24,    16,
      17,     0,     0,     0,    25,    26,    27,     0,    24,     0,
      30,    31,     6,     7,    25,    26,    27,     0,   127,     0,
      30,    31,     0,     6,     7,     0,    16,    17,     0,     0,
       0,     0,     0,     0,     0,    24,     0,    16,    17,     0,
       0,    25,    26,    27,     0,   132,    24,    30,    31,     6,
       7,     0,    25,    26,    27,     0,   135,     0,    30,    31,
       6,     7,     0,    16,    17,     0,     0,     0,     0,     0,
       0,     0,    24,     0,    16,    17,     0,     0,    25,    26,
      27,     0,   136,    24,    30,    31,     6,     7,     0,    25,
      26,    27,     0,   137,     0,    30,    31,     6,     7,     0,
      16,    17,     0,     0,     0,     0,     0,     0,     0,    24,
       0,    16,    17,     0,     0,    25,    26,    27,     0,   138,
      24,    30,    31,     6,     7,     0,    25,    26,    27,     0,
     140,     0,    30,    31,     6,     7,     0,    16,    17,     0,
       0,     0,     0,     0,     0,     0,    24,     0,    16,    17,
       0,     0,    25,    26,    27,     0,   141,    24,    30,    31,
       6,     7,     0,    25,    26,    27,     0,     0,     0,    30,
      31,     6,     7,     0,    16,    17,     0,     0,     0,     0,
       0,     0,     0,    24,     0,    16,    17,     0,     0,    25,
     130,    27,     0,     0,    24,    30,    31,     6,     7,     0,
      25,    26,   131,     0,     0,     0,    30,    31,     6,     7,
       0,    16,    17,     0,     0,     0,     0,     0,     0,     0,
      24,     0,    16,    17,     0,     0,    25,    26,    27,     0,
       0,    24,   133,    31,     0,     0,     0,    25,    26,    27,
       0,     0,     0,    30,   134
};

static const yytype_int16 yycheck[] =
{
      13,    14,    15,    57,    25,     3,    19,     3,     4,    22,
      50,     3,     4,    26,    27,     0,    29,    30,    31,    32,
      33,    74,    35,    36,    77,    65,    36,    67,     3,     4,
      70,    36,    86,     3,     4,    31,     3,     4,    36,    31,
      80,     3,     4,    83,     3,     4,     5,    87,    88,    89,
      90,    91,    92,    36,    94,    95,    96,    41,    17,    29,
      40,    36,    29,     1,    85,    78,     4,     5,    81,    82,
       5,    32,    35,     1,   128,     3,     4,    36,     4,     5,
      18,    37,    22,    41,    12,   125,   126,    20,    36,    17,
      18,   145,   146,    19,    36,    36,     1,    36,    26,     4,
       5,    30,    17,    30,    32,    33,    34,    37,    39,     1,
      38,    39,     4,     5,    48,    18,    41,   130,   131,    43,
     133,   134,   143,   144,     0,     1,    45,     3,     4,    78,
       6,     7,     8,     9,    10,    11,    54,    13,    -1,    15,
      -1,    17,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,     0,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    -1,    13,    -1,    15,    -1,    17,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    14,    -1,    26,
      17,    18,    -1,    -1,    -1,    32,    33,    34,    -1,    26,
      -1,    38,    39,     3,     4,    32,    33,    34,    -1,    -1,
      -1,    38,    39,    -1,     3,     4,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    17,    18,
      -1,    -1,    32,    33,    34,    -1,    36,    26,    38,    39,
      -1,    -1,    -1,    32,    33,    34,    -1,    36,    -1,    38,
      39,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,     3,     4,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    26,    17,    18,    -1,    -1,    -1,
      32,    33,    34,    -1,    26,    -1,    38,    39,     3,     4,
      32,    33,    34,    -1,    -1,    -1,    38,    39,     3,     4,
      -1,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    17,    18,    -1,    -1,    -1,    32,    33,    34,
      -1,    26,    -1,    38,    39,     3,     4,    32,    33,    34,
      -1,    36,    -1,    38,    39,     3,     4,    -1,    -1,    17,
      18,    -1,    -1,    21,    -1,    -1,    -1,    -1,    26,    17,
      18,    -1,    -1,    -1,    32,    33,    34,    -1,    26,    -1,
      38,    39,     3,     4,    32,    33,    34,    -1,    36,    -1,
      38,    39,    -1,     3,     4,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    17,    18,    -1,
      -1,    32,    33,    34,    -1,    36,    26,    38,    39,     3,
       4,    -1,    32,    33,    34,    -1,    36,    -1,    38,    39,
       3,     4,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    17,    18,    -1,    -1,    32,    33,
      34,    -1,    36,    26,    38,    39,     3,     4,    -1,    32,
      33,    34,    -1,    36,    -1,    38,    39,     3,     4,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    17,    18,    -1,    -1,    32,    33,    34,    -1,    36,
      26,    38,    39,     3,     4,    -1,    32,    33,    34,    -1,
      36,    -1,    38,    39,     3,     4,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    17,    18,
      -1,    -1,    32,    33,    34,    -1,    36,    26,    38,    39,
       3,     4,    -1,    32,    33,    34,    -1,    -1,    -1,    38,
      39,     3,     4,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    17,    18,    -1,    -1,    32,
      33,    34,    -1,    -1,    26,    38,    39,     3,     4,    -1,
      32,    33,    34,    -1,    -1,    -1,    38,    39,     3,     4,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    17,    18,    -1,    -1,    32,    33,    34,    -1,
      -1,    26,    38,    39,    -1,    -1,    -1,    32,    33,    34,
      -1,    -1,    -1,    38,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    47,    48,     0,     1,     3,     4,     6,     7,
       8,     9,    10,    11,    13,    15,    17,    18,    19,    20,
      22,    23,    24,    25,    26,    32,    33,    34,    35,    37,
      38,    39,    40,    41,    42,    43,    44,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      64,    65,    67,    36,    66,     3,     4,    68,    69,     3,
      36,    36,    36,     1,    12,    64,    14,    64,     1,    16,
      64,     1,     4,     5,    70,    71,     1,    70,    62,    63,
      64,    41,    40,    64,     5,    32,    68,    64,    64,    64,
      64,    64,    64,    36,    64,    64,    64,    50,    52,    54,
      56,    58,    61,    36,    65,     3,     4,     5,    36,    67,
      36,    69,    36,    36,    12,    14,    36,    16,     1,    18,
      71,    19,    36,    63,    21,    64,    64,    36,    68,    31,
      33,    34,    36,    38,    39,    36,    36,    36,    36,    36,
      36,    36,    31,    30,    30,    68,    68,    29,    29
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
#line 60 "markdown.y"
    { blocknode_create(TAG_EOF, -2, 1, ""); blocklist_parse(); node_traverse((yyvsp[(1) - (1)].node)); ;}
    break;

  case 3:
#line 61 "markdown.y"
    { fprintf( stderr, "==== error ====\n" ); ;}
    break;

  case 4:
#line 65 "markdown.y"
    { 
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 5:
#line 68 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node));
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 6:
#line 73 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node));
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 7:
#line 78 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node));
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 8:
#line 83 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node));
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 9:
#line 88 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node));
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 10:
#line 93 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node));
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 11:
#line 98 "markdown.y"
    {
            _node = block_node_create(
                TAG_ROOT
                , 0
                , 0
            );
            (yyval.node) = _node;
        ;}
    break;

  case 12:
#line 110 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 13:
#line 115 "markdown.y"
    { 
            _node = block_node_create(
                TAG_BLOCK_P
                , 0
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyval.node) = _node;
        ;}
    break;

  case 14:
#line 127 "markdown.y"
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

  case 15:
#line 150 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 16:
#line 155 "markdown.y"
    {
            _node = block_node_create(
                TAG_BLOCK_BLANK
                , 0
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyval.node) = _node;
        ;}
    break;

  case 17:
#line 167 "markdown.y"
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

  case 18:
#line 181 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node));
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 19:
#line 186 "markdown.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 20:
#line 190 "markdown.y"
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

  case 21:
#line 213 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 22:
#line 218 "markdown.y"
    {
            _node = block_node_create(
                TAG_BLOCK_UL
                , 0
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyval.node) = _node;
        ;}
    break;

  case 23:
#line 230 "markdown.y"
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

  case 24:
#line 251 "markdown.y"
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

  case 25:
#line 273 "markdown.y"
    {
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 26:
#line 278 "markdown.y"
    {
            _node = block_node_create(
                TAG_BLOCK_INDENT_UL
                , (yyvsp[(1) - (1)].node)->level
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyval.node) = _node;
        ;}
    break;

  case 27:
#line 290 "markdown.y"
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

  case 28:
#line 318 "markdown.y"
    { 
            tag_check_stack(TAG_QUOTE_BLANK, 0); 
            blocknode_create(TAG_QUOTE_BLANK, 0, 1, "");
        ;}
    break;

  case 29:
#line 323 "markdown.y"
    {
            tag_check_stack(TAG_SECTION, -1); 
            blocknode_create(TAG_SECTION, -1, 1, (yyvsp[(1) - (2)].text));
        ;}
    break;

  case 30:
#line 328 "markdown.y"
    {
            tag_check_stack(TAG_VSECTION, -1); 
            blocknode_create(TAG_VSECTION, -1, 1, (yyvsp[(1) - (2)].text));
        ;}
    break;

  case 31:
#line 333 "markdown.y"
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
        ;}
    break;

  case 32:
#line 345 "markdown.y"
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
        ;}
    break;

  case 33:
#line 359 "markdown.y"
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
        ;}
    break;

  case 34:
#line 371 "markdown.y"
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
        ;}
    break;

  case 35:
#line 383 "markdown.y"
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
        ;}
    break;

  case 36:
#line 396 "markdown.y"
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
        ;}
    break;

  case 37:
#line 408 "markdown.y"
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
        ;}
    break;

  case 38:
#line 449 "markdown.y"
    {
            _inner_pre_level = inner_pre_level(indent_level((yyvsp[(1) - (2)].text)));
            if(_inner_pre_level > -1){
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
            }
            else{
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
            }
        ;}
    break;

  case 39:
#line 482 "markdown.y"
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

            node_show(_node);
            // fprintf( stderr, "CODETEXT: %s\n PARSED: %s\n", $2, tag_info -> content ); 
        ;}
    break;

  case 40:
#line 504 "markdown.y"
    { 
            blocknode_create(TAG_EOF, -2, 1, str_concat( (yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text) )); 
            blocklist_parse(); 
            YYABORT;
        ;}
    break;

  case 41:
#line 510 "markdown.y"
    {
            tag_check_stack(TAG_HTMLBLOCK, 0);
            blocknode_create(
                    TAG_HTMLBLOCK
                    , 0
                    , 2
                    , (yyvsp[(1) - (3)].text)
                    , (yyvsp[(2) - (3)].text)
                );
        ;}
    break;

  case 42:
#line 521 "markdown.y"
    {
            tag_check_stack(TAG_HTMLBLOCK, 0);
            blocknode_create(
                    TAG_HTMLBLOCK
                    , 0
                    , 2
                    , (yyvsp[(1) - (2)].text)
                    , ""
                );
        ;}
    break;

  case 43:
#line 532 "markdown.y"
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
        ;}
    break;

  case 44:
#line 544 "markdown.y"
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
        ;}
    break;

  case 45:
#line 556 "markdown.y"
    {
            fprintf(stderr, "expect </script>\n");
        ;}
    break;

  case 46:
#line 560 "markdown.y"
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
        ;}
    break;

  case 47:
#line 572 "markdown.y"
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
        ;}
    break;

  case 48:
#line 584 "markdown.y"
    {
            fprintf(stderr, "expect </svg>\n");
        ;}
    break;

  case 49:
#line 588 "markdown.y"
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
        ;}
    break;

  case 50:
#line 600 "markdown.y"
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
        ;}
    break;

  case 51:
#line 612 "markdown.y"
    { 
            /* set error indent level: 100 */
            blocknode_create(TAG_ERROR, 100, 1, str_format("%s", "@error@")); 
            yyerrok; 
            yyclearin; 
        ;}
    break;

  case 52:
#line 621 "markdown.y"
    {
                                                            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
                                                            _tail_node->next = (yyvsp[(2) - (2)].node); 
                                                            (yyval.node) = (yyvsp[(1) - (2)].node); 
                                                        ;}
    break;

  case 53:
#line 626 "markdown.y"
    {
                                                            _node = block_node_create(
                                                                TAG_TABLE
                                                                , 0
                                                                , 0
                                                            );
                                                            _node->children = (yyvsp[(1) - (1)].node);
                                                            (yyval.node) = _node; 
                                                        ;}
    break;

  case 54:
#line 637 "markdown.y"
    {
                                                            _node = block_node_create(
                                                                TAG_TR
                                                                , 0
                                                                , 0
                                                            );
                                                            _node->children = (yyvsp[(2) - (3)].node);
                                                            (yyval.node) = _node;
                                                        ;}
    break;

  case 55:
#line 650 "markdown.y"
    { _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)); _tail_node->next = (yyvsp[(2) - (2)].node); (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 56:
#line 651 "markdown.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 57:
#line 655 "markdown.y"
    {
                                                            tag_info = markdown_get_tag_info((yyvsp[(1) - (2)].text));
                                                            // fprintf(stderr, "inlineelements: %s; attr: %s; content: %s\n", $1, tag_info->attr, tag_info->content);
                                                            _node = inline_node_create(
                                                                TAG_TD
                                                                , 0
                                                                , 2
                                                                , tag_info -> attr
                                                                , tag_info -> content
                                                            );
                                                            (yyval.node) = _node;
                                                        ;}
    break;

  case 58:
#line 670 "markdown.y"
    { (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 59:
#line 671 "markdown.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 60:
#line 675 "markdown.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 61:
#line 676 "markdown.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 62:
#line 678 "markdown.y"
    { (yyval.text) = create_emphasis((yyvsp[(2) - (3)].text)); ;}
    break;

  case 63:
#line 679 "markdown.y"
    { (yyval.text) = create_emphasis((yyvsp[(2) - (3)].text)); ;}
    break;

  case 64:
#line 680 "markdown.y"
    { (yyval.text) = create_strong((yyvsp[(2) - (3)].text)); ;}
    break;

  case 65:
#line 681 "markdown.y"
    { (yyval.text) = create_strong((yyvsp[(2) - (3)].text)); ;}
    break;

  case 66:
#line 683 "markdown.y"
    { 
                                            tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));
                                            (yyval.text) = create_codespan( 
                                                tag_info -> attr
                                                , html_escape(tag_info -> content) 
                                            ); 
                                        ;}
    break;

  case 67:
#line 690 "markdown.y"
    { 
                                            (yyval.text) = str_concat( (yyvsp[(1) - (3)].text), (yyvsp[(2) - (3)].text) );
                                            // fprintf( stderr, "BACKTICK codespan error: \n\n%s\n\n", $2 );
                                            yyerrok;
                                            yyclearin;
                                        ;}
    break;

  case 68:
#line 696 "markdown.y"
    { 
                                            (yyval.text) = (yyvsp[(1) - (2)].text);
                                            // fprintf( stderr, "BACKTICK error: \n\n%s\n\n", $1 );
                                            yyerrok;
                                        ;}
    break;

  case 69:
#line 702 "markdown.y"
    {
                                 (yyval.text) = create_link((yyvsp[(2) - (6)].text), (yyvsp[(5) - (6)].text));
                                ;}
    break;

  case 70:
#line 705 "markdown.y"
    {
                                 (yyval.text) = create_image((yyvsp[(3) - (7)].text), (yyvsp[(6) - (7)].text));
                                ;}
    break;

  case 71:
#line 708 "markdown.y"
    { 
                                    (yyval.text) = (yyvsp[(1) - (1)].text); 
                                ;}
    break;

  case 72:
#line 714 "markdown.y"
    { (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 73:
#line 715 "markdown.y"
    { (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 74:
#line 716 "markdown.y"
    { (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 75:
#line 717 "markdown.y"
    { (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 76:
#line 718 "markdown.y"
    { (yyval.text) = ""; ;}
    break;

  case 77:
#line 722 "markdown.y"
    {
                                        tag_info = markdown_get_tag_info((yyvsp[(1) - (1)].text));
                                        (yyval.text) = create_link( 
                                            tag_info -> content
                                            , html_escape(tag_info -> content) 
                                        ); 
                                    ;}
    break;

  case 78:
#line 732 "markdown.y"
    { (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 79:
#line 733 "markdown.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 80:
#line 737 "markdown.y"
    { (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;

  case 81:
#line 738 "markdown.y"
    { (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;

  case 82:
#line 742 "markdown.y"
    { (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 83:
#line 743 "markdown.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 84:
#line 747 "markdown.y"
    { (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;

  case 85:
#line 748 "markdown.y"
    { (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2624 "markdown.y.c"
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


#line 751 "markdown.y"



/* export yyparse through markdown */
void markdown( void ){
    yyparse();
}


