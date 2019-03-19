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
     INDENT = 261,
     H = 262,
     QUOTEH = 263,
     HTMLBLOCK = 264,
     SECTION = 265,
     VSECTION = 266,
     SCRIPTSTART = 267,
     SCRIPTEND = 268,
     STYLESTART = 269,
     STYLEEND = 270,
     SVGSTART = 271,
     SVGEND = 272,
     LINK = 273,
     BACKTICK = 274,
     TRIPLEBACKTICK = 275,
     TABLEROWSTART = 276,
     TABLECEILEND = 277,
     EXCLAMATION = 278,
     MINUS = 279,
     PLUS = 280,
     RIGHTPARENTHESES = 281,
     LEFTPARENTHESES = 282,
     RIGHTSQUARE = 283,
     LEFTSQUARE = 284,
     UNDERSCORE = 285,
     STAR = 286,
     BLANKLINE = 287,
     LINEBREAK = 288,
     LARGERTHAN = 289,
     DOUBLESTAR = 290,
     DOUBLEUNDERSCORE = 291,
     OLSTART = 292,
     ULSTART = 293,
     QUOTEBLANKLINE = 294,
     QUOTEOLSTART = 295,
     QUOTEULSTART = 296,
     STARX = 297
   };
#endif
/* Tokens.  */
#define TEXT 258
#define SPECIALCHAR 259
#define CODETEXT 260
#define INDENT 261
#define H 262
#define QUOTEH 263
#define HTMLBLOCK 264
#define SECTION 265
#define VSECTION 266
#define SCRIPTSTART 267
#define SCRIPTEND 268
#define STYLESTART 269
#define STYLEEND 270
#define SVGSTART 271
#define SVGEND 272
#define LINK 273
#define BACKTICK 274
#define TRIPLEBACKTICK 275
#define TABLEROWSTART 276
#define TABLECEILEND 277
#define EXCLAMATION 278
#define MINUS 279
#define PLUS 280
#define RIGHTPARENTHESES 281
#define LEFTPARENTHESES 282
#define RIGHTSQUARE 283
#define LEFTSQUARE 284
#define UNDERSCORE 285
#define STAR 286
#define BLANKLINE 287
#define LINEBREAK 288
#define LARGERTHAN 289
#define DOUBLESTAR 290
#define DOUBLEUNDERSCORE 291
#define OLSTART 292
#define ULSTART 293
#define QUOTEBLANKLINE 294
#define QUOTEOLSTART 295
#define QUOTEULSTART 296
#define STARX 297




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 21 "markdown.y"
{
    char *text;
    t_blocknode *node;
}
/* Line 1529 of yacc.c.  */
#line 138 "markdown.y.h"
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
