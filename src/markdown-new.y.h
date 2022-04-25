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
     BLANKLINE = 258,
     QUOTEBLANKLINE = 259,
     LINEBREAK = 260,
     LF_H = 261,
     LF_UL = 262,
     UL = 263,
     LF_VERTICAL = 264,
     LF_VERTICAL_HEAD_SEP = 265,
     LF_INDENT_UL = 266,
     LF_INDENT2_UL = 267,
     LF_INDENT3_UL = 268,
     LF_INDENT4_UL = 269,
     LF_INDENT_VERTICAL = 270,
     LF_INDENT = 271,
     LF_INDENT2 = 272,
     LF_INDENT3 = 273,
     LF_INDENT4 = 274,
     LF_INDENT5 = 275,
     LF_Q_H = 276,
     LF_Q_UL = 277,
     LF_Q_VERTICAL = 278,
     LF_Q_VERTICAL_HEAD_SEP = 279,
     LF_Q_INDENT_UL = 280,
     LF_Q_INDENT2_UL = 281,
     LF_Q_INDENT_VERTICAL = 282,
     LF_Q_INDENT = 283,
     LF_Q_INDENT2 = 284,
     LF_Q_INDENT3 = 285,
     LF_Q = 286,
     SIMPLELINK = 287,
     HTMLTAG = 288,
     SCRIPTSTART = 289,
     SCRIPTEND = 290,
     STYLESTART = 291,
     STYLEEND = 292,
     SVGSTART = 293,
     SVGEND = 294,
     ESCAPEDCHAR = 295,
     TRIPLEBACKTICK = 296,
     BACKTICK = 297,
     VERTICAL = 298,
     TRIPLEASTERISK = 299,
     DOUBLEASTERISK = 300,
     ASTERISK = 301,
     TRIPLEUNDERSCORE = 302,
     DOUBLEUNDERSCORE = 303,
     UNDERSCORE = 304,
     EXCLAMATION_LEFTSQUARE = 305,
     LEFTSQUARE = 306,
     RIGHTSQUARE_LEFTBRACKET = 307,
     RIGHTBRACKET = 308,
     DOUBLETILDE = 309,
     RIGHTSQUARE = 310,
     SEMI_MINUSSERIES_VERTICAL = 311,
     MINUSSERIES_SEMI_VERTICAL = 312,
     SEMI_MINUSSERIES_SEMI_VERTICAL = 313,
     MINUSSERIES_VERTICAL = 314,
     SPACE = 315,
     TEXT = 316,
     RAW_TEXT = 317,
     ITALICSTART = 318,
     LISTSTART = 319
   };
#endif
/* Tokens.  */
#define BLANKLINE 258
#define QUOTEBLANKLINE 259
#define LINEBREAK 260
#define LF_H 261
#define LF_UL 262
#define UL 263
#define LF_VERTICAL 264
#define LF_VERTICAL_HEAD_SEP 265
#define LF_INDENT_UL 266
#define LF_INDENT2_UL 267
#define LF_INDENT3_UL 268
#define LF_INDENT4_UL 269
#define LF_INDENT_VERTICAL 270
#define LF_INDENT 271
#define LF_INDENT2 272
#define LF_INDENT3 273
#define LF_INDENT4 274
#define LF_INDENT5 275
#define LF_Q_H 276
#define LF_Q_UL 277
#define LF_Q_VERTICAL 278
#define LF_Q_VERTICAL_HEAD_SEP 279
#define LF_Q_INDENT_UL 280
#define LF_Q_INDENT2_UL 281
#define LF_Q_INDENT_VERTICAL 282
#define LF_Q_INDENT 283
#define LF_Q_INDENT2 284
#define LF_Q_INDENT3 285
#define LF_Q 286
#define SIMPLELINK 287
#define HTMLTAG 288
#define SCRIPTSTART 289
#define SCRIPTEND 290
#define STYLESTART 291
#define STYLEEND 292
#define SVGSTART 293
#define SVGEND 294
#define ESCAPEDCHAR 295
#define TRIPLEBACKTICK 296
#define BACKTICK 297
#define VERTICAL 298
#define TRIPLEASTERISK 299
#define DOUBLEASTERISK 300
#define ASTERISK 301
#define TRIPLEUNDERSCORE 302
#define DOUBLEUNDERSCORE 303
#define UNDERSCORE 304
#define EXCLAMATION_LEFTSQUARE 305
#define LEFTSQUARE 306
#define RIGHTSQUARE_LEFTBRACKET 307
#define RIGHTBRACKET 308
#define DOUBLETILDE 309
#define RIGHTSQUARE 310
#define SEMI_MINUSSERIES_VERTICAL 311
#define MINUSSERIES_SEMI_VERTICAL 312
#define SEMI_MINUSSERIES_SEMI_VERTICAL 313
#define MINUSSERIES_VERTICAL 314
#define SPACE 315
#define TEXT 316
#define RAW_TEXT 317
#define ITALICSTART 318
#define LISTSTART 319




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 415 "markdown-new.y"
{
    char *text;
    /* t_node *node; */
}
/* Line 1529 of yacc.c.  */
#line 182 "markdown-new.y.h"
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
