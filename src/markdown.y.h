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
     LEFTSQUARE = 282,
     RIGHTSQUARE_LEFTBRACKET = 283,
     RIGHTBRACKET = 284,
     EXCLAMATION_LEFTSQUARE = 285,
     ATTRLEFT = 286,
     ATTRRIGHT = 287,
     EMPTYATTR = 288,
     EM_BEGIN = 289,
     EM_END = 290,
     STRONG_BEGIN = 291,
     STRONG_END = 292,
     MINUS = 293,
     PLUS = 294,
     RIGHTPARENTHESES = 295,
     LEFTPARENTHESES = 296,
     UNDERSCORE = 297,
     STAR = 298,
     BLANKLINE = 299,
     LINEBREAK = 300,
     LARGERTHAN = 301,
     DOUBLESTAR = 302,
     DOUBLEUNDERSCORE = 303,
     OLSTART = 304,
     ULSTART = 305,
     QUOTEBLANKLINE = 306,
     QUOTEOLSTART = 307,
     QUOTEULSTART = 308,
     EXCLAMATION = 309,
     STARX = 310
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
#define LEFTSQUARE 282
#define RIGHTSQUARE_LEFTBRACKET 283
#define RIGHTBRACKET 284
#define EXCLAMATION_LEFTSQUARE 285
#define ATTRLEFT 286
#define ATTRRIGHT 287
#define EMPTYATTR 288
#define EM_BEGIN 289
#define EM_END 290
#define STRONG_BEGIN 291
#define STRONG_END 292
#define MINUS 293
#define PLUS 294
#define RIGHTPARENTHESES 295
#define LEFTPARENTHESES 296
#define UNDERSCORE 297
#define STAR 298
#define BLANKLINE 299
#define LINEBREAK 300
#define LARGERTHAN 301
#define DOUBLESTAR 302
#define DOUBLEUNDERSCORE 303
#define OLSTART 304
#define ULSTART 305
#define QUOTEBLANKLINE 306
#define QUOTEOLSTART 307
#define QUOTEULSTART 308
#define EXCLAMATION 309
#define STARX 310




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 64 "markdown.y"
{
    char *text;
    t_node *node;
}
/* Line 1529 of yacc.c.  */
#line 164 "markdown.y.h"
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
