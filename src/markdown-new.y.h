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
     H = 261,
     LF_UL = 262,
     UL = 263,
     LF_INDENT_UL = 264,
     LF_INDENT2_UL = 265,
     LF_INDENT3_UL = 266,
     LF_INDENT4_UL = 267,
     INDENT_UL = 268,
     INDENT2_UL = 269,
     INDENT3_UL = 270,
     INDENT4_UL = 271,
     SPECIALCHAR = 272,
     LESSTHAN = 273,
     LARGERTHAN = 274,
     TRIPLEBACKTICK = 275,
     BACKTICK = 276,
     VERTICAL = 277,
     DOUBLEASTERISK = 278,
     DOUBLETILDE = 279,
     ASTERISK = 280,
     PLUS = 281,
     MINUS = 282,
     DIGIT = 283,
     DOT = 284,
     LF_INDENT = 285,
     LF_INDENT2 = 286,
     LF_INDENT3 = 287,
     LF_INDENT4 = 288,
     LF_INDENT5 = 289,
     INDENT = 290,
     INDENT2 = 291,
     INDENT3 = 292,
     INDENT4 = 293,
     INDENT5 = 294,
     SPACE = 295,
     LEFTSQUARE = 296,
     RIGHTSQUARE = 297,
     LEFTBRACKET = 298,
     RIGHTBRACKET = 299,
     EXCLAMATION = 300,
     DOUBLEUNDERSCORE = 301,
     UNDERSCORE = 302,
     LEFTPARENTHESIS = 303,
     RIGHTPARENTHESIS = 304,
     TEXT = 305,
     ITALICSTART = 306,
     LISTSTART = 307
   };
#endif
/* Tokens.  */
#define BLANKLINE 258
#define LINEBREAK 259
#define LF_H 260
#define H 261
#define LF_UL 262
#define UL 263
#define LF_INDENT_UL 264
#define LF_INDENT2_UL 265
#define LF_INDENT3_UL 266
#define LF_INDENT4_UL 267
#define INDENT_UL 268
#define INDENT2_UL 269
#define INDENT3_UL 270
#define INDENT4_UL 271
#define SPECIALCHAR 272
#define LESSTHAN 273
#define LARGERTHAN 274
#define TRIPLEBACKTICK 275
#define BACKTICK 276
#define VERTICAL 277
#define DOUBLEASTERISK 278
#define DOUBLETILDE 279
#define ASTERISK 280
#define PLUS 281
#define MINUS 282
#define DIGIT 283
#define DOT 284
#define LF_INDENT 285
#define LF_INDENT2 286
#define LF_INDENT3 287
#define LF_INDENT4 288
#define LF_INDENT5 289
#define INDENT 290
#define INDENT2 291
#define INDENT3 292
#define INDENT4 293
#define INDENT5 294
#define SPACE 295
#define LEFTSQUARE 296
#define RIGHTSQUARE 297
#define LEFTBRACKET 298
#define RIGHTBRACKET 299
#define EXCLAMATION 300
#define DOUBLEUNDERSCORE 301
#define UNDERSCORE 302
#define LEFTPARENTHESIS 303
#define RIGHTPARENTHESIS 304
#define TEXT 305
#define ITALICSTART 306
#define LISTSTART 307




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 242 "markdown-new.y"
{
    char *text;
    /* t_node *node; */
}
/* Line 1529 of yacc.c.  */
#line 158 "markdown-new.y.h"
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
