/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
     TABLE_INDENT = 282,
     QUOTE_INDENT = 283,
     LEFTSQUARE = 284,
     RIGHTSQUARE_LEFTBRACKET = 285,
     RIGHTBRACKET = 286,
     EXCLAMATION_LEFTSQUARE = 287,
     ATTRLEFT = 288,
     ATTRRIGHT = 289,
     EMPTYATTR = 290,
     EM_BEGIN = 291,
     EM_END = 292,
     STRONG_BEGIN = 293,
     STRONG_END = 294,
     INDENT_QUOTEBLANKLINE = 295,
     MINUS = 296,
     PLUS = 297,
     RIGHTPARENTHESES = 298,
     LEFTPARENTHESES = 299,
     UNDERSCORE = 300,
     STAR = 301,
     BLANKLINE = 302,
     LINEBREAK = 303,
     LARGERTHAN = 304,
     DOUBLESTAR = 305,
     DOUBLEUNDERSCORE = 306,
     OLSTART = 307,
     ULSTART = 308,
     QUOTEBLANKLINE = 309,
     QUOTEOLSTART = 310,
     QUOTEULSTART = 311,
     EXCLAMATION = 312,
     STARX = 313
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
#define TABLE_INDENT 282
#define QUOTE_INDENT 283
#define LEFTSQUARE 284
#define RIGHTSQUARE_LEFTBRACKET 285
#define RIGHTBRACKET 286
#define EXCLAMATION_LEFTSQUARE 287
#define ATTRLEFT 288
#define ATTRRIGHT 289
#define EMPTYATTR 290
#define EM_BEGIN 291
#define EM_END 292
#define STRONG_BEGIN 293
#define STRONG_END 294
#define INDENT_QUOTEBLANKLINE 295
#define MINUS 296
#define PLUS 297
#define RIGHTPARENTHESES 298
#define LEFTPARENTHESES 299
#define UNDERSCORE 300
#define STAR 301
#define BLANKLINE 302
#define LINEBREAK 303
#define LARGERTHAN 304
#define DOUBLESTAR 305
#define DOUBLEUNDERSCORE 306
#define OLSTART 307
#define ULSTART 308
#define QUOTEBLANKLINE 309
#define QUOTEOLSTART 310
#define QUOTEULSTART 311
#define EXCLAMATION 312
#define STARX 313




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 88 "markdown.y"
{
    char *text;
    t_node *node;
}
/* Line 1529 of yacc.c.  */
#line 170 "markdown.y.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

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

extern YYLTYPE yylloc;
