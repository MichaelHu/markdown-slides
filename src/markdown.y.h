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
     MINUS = 291,
     PLUS = 292,
     RIGHTPARENTHESES = 293,
     LEFTPARENTHESES = 294,
     UNDERSCORE = 295,
     STAR = 296,
     BLANKLINE = 297,
     LINEBREAK = 298,
     LARGERTHAN = 299,
     DOUBLESTAR = 300,
     DOUBLEUNDERSCORE = 301,
     OLSTART = 302,
     ULSTART = 303,
     QUOTEBLANKLINE = 304,
     QUOTEOLSTART = 305,
     QUOTEULSTART = 306,
     EXCLAMATION = 307,
     STARX = 308
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
#define MINUS 291
#define PLUS 292
#define RIGHTPARENTHESES 293
#define LEFTPARENTHESES 294
#define UNDERSCORE 295
#define STAR 296
#define BLANKLINE 297
#define LINEBREAK 298
#define LARGERTHAN 299
#define DOUBLESTAR 300
#define DOUBLEUNDERSCORE 301
#define OLSTART 302
#define ULSTART 303
#define QUOTEBLANKLINE 304
#define QUOTEOLSTART 305
#define QUOTEULSTART 306
#define EXCLAMATION 307
#define STARX 308




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 61 "markdown.y"
{
    char *text;
    t_node *node;
}
/* Line 1529 of yacc.c.  */
#line 160 "markdown.y.h"
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
