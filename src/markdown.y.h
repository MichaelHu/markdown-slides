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
     RIGHTSQUARE = 283,
     LEFTBRACKET = 284,
     RIGHTBRACKET = 285,
     EXCLAMATION_LEFTSQUARE = 286,
     MINUS = 287,
     PLUS = 288,
     RIGHTPARENTHESES = 289,
     LEFTPARENTHESES = 290,
     UNDERSCORE = 291,
     STAR = 292,
     BLANKLINE = 293,
     LINEBREAK = 294,
     LARGERTHAN = 295,
     DOUBLESTAR = 296,
     DOUBLEUNDERSCORE = 297,
     OLSTART = 298,
     ULSTART = 299,
     QUOTEBLANKLINE = 300,
     QUOTEOLSTART = 301,
     QUOTEULSTART = 302,
     EXCLAMATION = 303,
     STARX = 304
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
#define RIGHTSQUARE 283
#define LEFTBRACKET 284
#define RIGHTBRACKET 285
#define EXCLAMATION_LEFTSQUARE 286
#define MINUS 287
#define PLUS 288
#define RIGHTPARENTHESES 289
#define LEFTPARENTHESES 290
#define UNDERSCORE 291
#define STAR 292
#define BLANKLINE 293
#define LINEBREAK 294
#define LARGERTHAN 295
#define DOUBLESTAR 296
#define DOUBLEUNDERSCORE 297
#define OLSTART 298
#define ULSTART 299
#define QUOTEBLANKLINE 300
#define QUOTEOLSTART 301
#define QUOTEULSTART 302
#define EXCLAMATION 303
#define STARX 304




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 30 "markdown.y"
{
    char *text;
    t_node *node;
}
/* Line 1529 of yacc.c.  */
#line 152 "markdown.y.h"
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
