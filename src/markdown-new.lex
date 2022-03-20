%{

#include <string.h>
#include "strutils.h"
#include "logutils.h"
#include "lex-state-stack.h"
#include "node.h"
#include "markdown-new.y.h"

#undef _ONLYLEX
#undef _ISDEBUGLEX

/* #define _ONLYLEX */


#ifdef _ONLYLEX
#define _ISDEBUGLEX
#endif

#ifdef _ONLYLEX
#define RETURN(token)
#define SETYYLVAL(str)
#else
#define RETURN(token) return token
#define SETYYLVAL(str) yylval.text = strdup(str)
#endif

#ifdef _ISDEBUGLEX
#define P(token) fprintf(stderr, "%s|%s|%s", token, \
    strcmp("LINEBREAK",token)==0||strcmp("BLANKLINE",token)==0?"":yytext, \
    strcmp("LINEBREAK",token)==0||strcmp("BLANKLINE",token)==0?"\n":""); BeginToken(yytext);
#else
#define P(token) BeginToken(yytext);
#endif

#ifndef _ONLYLEX
/* YY_INPUT macro: connect GetNextChar with yacc */
#define YY_INPUT(buf,result,max_size)  { \
    result = GetNextChar(buf, max_size); \
    if (  result <= 0  ) \
      result = YY_NULL; \
}
#endif



/* prototypes */
extern int yylineno;
extern int state;


#ifdef _ONLYLEX
void BeginToken(char *t) {}
#else
/* from input.c */
extern int GetNextChar(char *b, int maxBuffer);
extern void BeginToken(char *t);
#endif

/* local functions */
static void enterState(int state, char *desc) {
    lex_state_push_stack(state, desc);
    BEGIN state;
}
static void restoreState() {
    lex_state_pop_stack();
    t_lex_state_item *item = lex_state_top_stack();
    if (item) {
        BEGIN item -> state;
    }
    else {
        /**
         * 1. `BEGIN 0` is the same as `BEGIN INITIAL`
         * 2. but the macro INITIAL is defined later, it can not be used here
         */
        BEGIN 0;
    }
}
static void popWhenTopStateIs(int state) {
    t_lex_state_item *item = lex_state_top_stack();
    if (item && item->state == state) {
        restoreState();
    }
}
static void clearAllState() {
    while( lex_state_pop_stack() ) {
    }
    restoreState();
}

%}

    /* lexer states */
%x ESCAPE CODEBLOCK XCODEBLOCK CODESPAN XCODESPAN
%x INDENTLIST SHTMLBLOCK SCRIPTBLOCK STYLEBLOCK SVGBLOCK
%x TABLEROW LINKSTART LINKATTR ATTRSTART XEMSTART YEMSTART XSTRONGSTART YSTRONGSTART INDENTTABLEROW
%x INDENTQUOTE QUOTESTART

    /* blankline ^[ ]{0,4}\r?\n */
blankline ^[ \t]*\r?\n
quoteblankline ^>[ ]{0,4}\r?\n
normaltext [^#@>\<*_\\`{}()\[\]+\-! \t0-9.\r\n|]+|.


%%

    /* special chars: "\[]^-?.*+|()$/{}%<> */

{blankline}                             { yylineno++; P("BLANKLINE"); RETURN(BLANKLINE); }
\r?\n                                   { yylineno++; P("LINEBREAK"); RETURN(LINEBREAK); }
^#{1,6}                                 { SETYYLVAL(yytext); P("LF_H"); RETURN(LF_H); }
#{1,6}                                  { SETYYLVAL(yytext); P("H"); RETURN(H); }
\\[\\`*_{}()#+\-.!]                     { SETYYLVAL(yytext); P("SPECIALCHAR"); RETURN(SPECIALCHAR); }
\<                                      { SETYYLVAL(yytext); P("LESSTHAN"); RETURN(LESSTHAN); }
\>                                      { SETYYLVAL(yytext); P("LARGERTHAN"); RETURN(LARGERTHAN); }
```                                     { SETYYLVAL(yytext); P("TRIPLEBACKTICK"); RETURN(TRIPLEBACKTICK); }
`                                       { SETYYLVAL(yytext); P("BACKTICK"); RETURN(BACKTICK); }
\|                                      { SETYYLVAL(yytext); P("VERTICAL"); RETURN(VERTICAL); }
\*\*                                    { SETYYLVAL(yytext); P("DOUBLEASTERISK"); RETURN(DOUBLEASTERISK); }
\*                                      { SETYYLVAL(yytext); P("ASTERISK"); RETURN(ASTERISK); }
\+                                      { SETYYLVAL(yytext); P("PLUS"); RETURN(PLUS); }
\-                                      { SETYYLVAL(yytext); P("MINUS"); RETURN(MINUS); }
[0-9]+                                  { SETYYLVAL(yytext); P("DIGIT"); RETURN(DIGIT); }
\.                                      { SETYYLVAL(yytext); P("DOT"); RETURN(DOT); }
[ ]{4}|\t                               { SETYYLVAL(yytext); P("INDENT"); RETURN(INDENT); }
[ ]                                     { SETYYLVAL(yytext); P("SPACE"); RETURN(SPACE); }
\[                                      { SETYYLVAL(yytext); P("LEFTSQUARE"); RETURN(LEFTSQUARE); }
\]                                      { SETYYLVAL(yytext); P("RIGHTSQUARE"); RETURN(RIGHTSQUARE); }
\(                                      { SETYYLVAL(yytext); P("LEFTBRACKET"); RETURN(LEFTBRACKET); }
\)                                      { SETYYLVAL(yytext); P("RIGHTBRACKET"); RETURN(RIGHTBRACKET); }
!                                       { SETYYLVAL(yytext); P("EXCLAMATION"); RETURN(EXCLAMATION); }
__                                      { SETYYLVAL(yytext); P("DOUBLEUNDERSCORE"); RETURN(DOUBLEUNDERSCORE); }
_                                       { SETYYLVAL(yytext); P("UNDERSCORE"); RETURN(UNDERSCORE); }
\{                                      { SETYYLVAL(yytext); P("LEFTPARENTHESIS"); RETURN(LEFTPARENTHESIS); }
\}                                      { SETYYLVAL(yytext); P("RIGHTPARENTHESIS"); RETURN(RIGHTPARENTHESIS); }
.                                       { SETYYLVAL(yytext); P("TEXT"); RETURN(TEXT); }




%%

int yywrap(){
    return 1;
}

#ifdef _ONLYLEX
int main(int argc, char **argv){
    FILE *input = fopen(argv[1], "r");
    yyset_in(input);
    yylex();
    fclose(input);
}
#endif


