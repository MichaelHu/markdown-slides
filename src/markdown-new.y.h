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
     LINEBREAK = 259,
     LF_H = 260,
     LF_UL = 261,
     UL = 262,
     LF_VERTICAL = 263,
     LF_VERTICAL_HEAD_SEP = 264,
     LF_INDENT_UL = 265,
     LF_INDENT2_UL = 266,
     LF_INDENT3_UL = 267,
     LF_INDENT4_UL = 268,
     LF_INDENT_VERTICAL = 269,
     LF_INDENT = 270,
     LF_INDENT2 = 271,
     LF_INDENT3 = 272,
     LF_INDENT4 = 273,
     LF_INDENT5 = 274,
     LF_Q_H = 275,
     LF_Q_UL = 276,
     LF_Q_VERTICAL = 277,
     LF_Q_INDENT_UL = 278,
     LF_Q_INDENT2_UL = 279,
     LF_Q_INDENT_VERTICAL = 280,
     LF_Q_INDENT = 281,
     LF_Q_INDENT2 = 282,
     LF_Q_INDENT3 = 283,
     LF_Q = 284,
     SIMPLELINK = 285,
     HTMLTAG = 286,
     SCRIPTSTART = 287,
     SCRIPTEND = 288,
     STYLESTART = 289,
     STYLEEND = 290,
     SVGSTART = 291,
     SVGEND = 292,
     ESCAPEDCHAR = 293,
     TRIPLEBACKTICK = 294,
     BACKTICK = 295,
     VERTICAL = 296,
     TRIPLEASTERISK = 297,
     DOUBLEASTERISK = 298,
     ASTERISK = 299,
     TRIPLEUNDERSCORE = 300,
     DOUBLEUNDERSCORE = 301,
     UNDERSCORE = 302,
     EXCLAMATION_LEFTSQUARE = 303,
     LEFTSQUARE = 304,
     RIGHTSQUARE_LEFTBRACKET = 305,
     RIGHTBRACKET = 306,
     DOUBLETILDE = 307,
     RIGHTSQUARE = 308,
     SEMI_MINUSSERIES_VERTICAL = 309,
     MINUSSERIES_SEMI_VERTICAL = 310,
     SEMI_MINUSSERIES_SEMI_VERTICAL = 311,
     MINUSSERIES_VERTICAL = 312,
     SPACE = 313,
     TEXT = 314,
     ITALICSTART = 315,
     LISTSTART = 316
   };
#endif
/* Tokens.  */
#define BLANKLINE 258
#define LINEBREAK 259
#define LF_H 260
#define LF_UL 261
#define UL 262
#define LF_VERTICAL 263
#define LF_VERTICAL_HEAD_SEP 264
#define LF_INDENT_UL 265
#define LF_INDENT2_UL 266
#define LF_INDENT3_UL 267
#define LF_INDENT4_UL 268
#define LF_INDENT_VERTICAL 269
#define LF_INDENT 270
#define LF_INDENT2 271
#define LF_INDENT3 272
#define LF_INDENT4 273
#define LF_INDENT5 274
#define LF_Q_H 275
#define LF_Q_UL 276
#define LF_Q_VERTICAL 277
#define LF_Q_INDENT_UL 278
#define LF_Q_INDENT2_UL 279
#define LF_Q_INDENT_VERTICAL 280
#define LF_Q_INDENT 281
#define LF_Q_INDENT2 282
#define LF_Q_INDENT3 283
#define LF_Q 284
#define SIMPLELINK 285
#define HTMLTAG 286
#define SCRIPTSTART 287
#define SCRIPTEND 288
#define STYLESTART 289
#define STYLEEND 290
#define SVGSTART 291
#define SVGEND 292
#define ESCAPEDCHAR 293
#define TRIPLEBACKTICK 294
#define BACKTICK 295
#define VERTICAL 296
#define TRIPLEASTERISK 297
#define DOUBLEASTERISK 298
#define ASTERISK 299
#define TRIPLEUNDERSCORE 300
#define DOUBLEUNDERSCORE 301
#define UNDERSCORE 302
#define EXCLAMATION_LEFTSQUARE 303
#define LEFTSQUARE 304
#define RIGHTSQUARE_LEFTBRACKET 305
#define RIGHTBRACKET 306
#define DOUBLETILDE 307
#define RIGHTSQUARE 308
#define SEMI_MINUSSERIES_VERTICAL 309
#define MINUSSERIES_SEMI_VERTICAL 310
#define SEMI_MINUSSERIES_SEMI_VERTICAL 311
#define MINUSSERIES_VERTICAL 312
#define SPACE 313
#define TEXT 314
#define ITALICSTART 315
#define LISTSTART 316




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 388 "markdown-new.y"
{
    char *text;
    /* t_node *node; */
}
/* Line 1529 of yacc.c.  */
#line 176 "markdown-new.y.h"
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
