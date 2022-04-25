%{

#include <string.h>
#include "strutils.h"
#include "logutils.h"
#include "lex-state-stack.h"
#include "node.h"
#include "markdown-new.y.h"

#undef _ONLYLEX
#undef _ISDEBUGLEX

/*
#define _ONLYLEX
*/


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
indent [ ]{4}|\t
quote \>[ ]
header #{1,6}
unorderlist ([*+-]|[0-9]+\.)[ ]
vertical \|
minus_series \-{3,}
plus_series \+{3,}


%%

    /* special chars: "\[]^-?.*+|()$/{}%<> */

{blankline}                             { yylineno++; SETYYLVAL(yytext); P("BLANKLINE"); RETURN(BLANKLINE); }
{quoteblankline}                        { yylineno++; SETYYLVAL(yytext); P("QUOTEBLANKLINE"); RETURN(QUOTEBLANKLINE); }
\r?\n                                   { yylineno++; SETYYLVAL(yytext); P("LINEBREAK"); RETURN(LINEBREAK); }

^{header}                               { SETYYLVAL(yytext); P("LF_H"); RETURN(LF_H); }
^{unorderlist}                          { SETYYLVAL(yytext); P("LF_UL"); RETURN(LF_UL); }
^{vertical}/:?{minus_series}:?          { SETYYLVAL(yytext); P("LF_VERTICAL_HEAD_SEP"); RETURN(LF_VERTICAL_HEAD_SEP); }
^{vertical}                             { SETYYLVAL(yytext); P("LF_VERTICAL"); RETURN(LF_VERTICAL); }

^{indent}{unorderlist}                  { SETYYLVAL(yytext); P("LF_INDENT_UL"); RETURN(LF_INDENT_UL); }
^{indent}{2}{unorderlist}               { SETYYLVAL(yytext); P("LF_INDENT2_UL"); RETURN(LF_INDENT2_UL); }

^{indent}{vertical}                     { SETYYLVAL(yytext); P("LF_INDENT_VERTICAL"); RETURN(LF_INDENT_VERTICAL); }

^{indent}{5}                            { SETYYLVAL(yytext); P("LF_INDENT5"); RETURN(LF_INDENT5); }
^{indent}{4}                            { SETYYLVAL(yytext); P("LF_INDENT4"); RETURN(LF_INDENT4); }
^{indent}{3}                            { SETYYLVAL(yytext); P("LF_INDENT3"); RETURN(LF_INDENT3); }
^{indent}{2}                            { SETYYLVAL(yytext); P("LF_INDENT2"); RETURN(LF_INDENT2); }
^{indent}                               { SETYYLVAL(yytext); P("LF_INDENT"); RETURN(LF_INDENT); }

^{quote}{header}                        { SETYYLVAL(yytext); P("LF_Q_H"); RETURN(LF_Q_H); }
^{quote}{unorderlist}                   { SETYYLVAL(yytext); P("LF_Q_UL"); RETURN(LF_Q_UL); }
^{quote}{vertical}/:?{minus_series}:?   { SETYYLVAL(yytext); P("LF_Q_VERTICAL_HEAD_SEP"); RETURN(LF_Q_VERTICAL_HEAD_SEP); }
^{quote}{vertical}                      { SETYYLVAL(yytext); P("LF_Q_VERTICAL"); RETURN(LF_Q_VERTICAL); }

^{quote}{indent}{unorderlist}           { SETYYLVAL(yytext); P("LF_Q_INDENT_UL"); RETURN(LF_Q_INDENT_UL); }
^{quote}{indent}{2}{unorderlist}        { SETYYLVAL(yytext); P("LF_Q_INDENT2_UL"); RETURN(LF_Q_INDENT2_UL); }

^{quote}{indent}{vertical}              { SETYYLVAL(yytext); P("LF_Q_INDENT_VERTICAL"); RETURN(LF_Q_INDENT_VERTICAL); }

^{quote}{indent}{3}                     { SETYYLVAL(yytext); P("LF_Q_INDENT3"); RETURN(LF_Q_INDENT3); }
^{quote}{indent}{2}                     { SETYYLVAL(yytext); P("LF_Q_INDENT2"); RETURN(LF_Q_INDENT2); }
^{quote}{indent}                        { SETYYLVAL(yytext); P("LF_Q_INDENT"); RETURN(LF_Q_INDENT); }

^{quote}                                { SETYYLVAL(yytext); P("LF_Q"); RETURN(LF_Q); }

@\[[^\]]+\]                             { SETYYLVAL(yytext); P("TEXT"); RETURN(TEXT); }

\<(https?|ftp|file|ref|mailto):\/\/[^\r\n>]+\>    { 
                                            SETYYLVAL(yytext); P("SIMPLELINK"); RETURN(SIMPLELINK); }

    /* block and functional html tags must be in one line and must start at first column */
^\<\/?(a|abbr|acronym|address|applet|area|article|aside|audio|b|base|basefont|bdi|bdo|big|blockquote|body|br|button|canvas|caption|center|cite|code|col|colgroup|command|datalist|dd|del|details|dir|div|dfn|dialog|dl|dt|em|embed|fieldset|figcaption|figure|font|footer|form|frame|frameset|h[1-6]|head|header|hr|html|i|iframe|img|input|ins|isindex|kbd|keygen|label|legend|li|link|map|mark|menu|menuitem|meta|meter|nav|noframes|noscript|object|ol|optgroup|option|output|p|param|pre|progress|q|rp|rt|ruby|s|samp|section|select|small|source|span|strike|strong|sub|summary|sup|table|tbody|td|textarea|tfoot|th|thead|time|title|tr|track|tt|u|ul|var|video|wbr|xmp)([" "\r\n][^>]*\/?\>|\/?\>).*\r?\n   { 
                                            SETYYLVAL(yytext); P("HTMLTAG"); RETURN(HTMLTAG); }

    /* script block */
    /* problem triggered below: input buffer overflow, can't enlarge buffer because scanner uses REJECT */
    /*^\<script[^>]*>/(.|[\r\n])*\<\/script>  { */

^\<script[^>]*>                         {
                                            enterState(SCRIPTBLOCK, "SCRIPTBLOCK"); 
                                            SETYYLVAL(yytext); 
                                            P("SCRIPTSTART"); 
                                            RETURN(SCRIPTSTART); 
                                        }
<SCRIPTBLOCK>\<\/script>.*\r?\n         { 
                                            P("SCRIPTEND"); 
                                            yylineno++;
                                            restoreState(); 
                                            SETYYLVAL("</script>"); 
                                            RETURN(SCRIPTEND);
                                        }
<SCRIPTBLOCK>{normaltext}               { SETYYLVAL(yytext); P("RAW_TEXT"); RETURN(RAW_TEXT); }
<SCRIPTBLOCK>\r?\n                      { 
                                            yylineno++; 
                                            SETYYLVAL(yytext); 
                                            P("RAW_TEXT"); 
                                            RETURN(RAW_TEXT); 
                                        }

    /* style block */
    /* ^\<style[^>]*>/(.|[\r\n])*\<\/style>    { */
^\<style[^>]*>                          {
                                            SETYYLVAL(yytext); 
                                            P("STYLESTART"); 
                                            enterState(STYLEBLOCK, "STYLEBLOCK"); 
                                            RETURN(STYLESTART); 
                                        }
<STYLEBLOCK>\<\/style>.*\r?\n           { 
                                            P("STYLEEND"); 
                                            yylineno++;
                                            SETYYLVAL("</style>");
                                            restoreState(); 
                                            RETURN(STYLEEND);
                                        }
<STYLEBLOCK>{normaltext}                { SETYYLVAL(yytext); P("RAW_TEXT"); RETURN(RAW_TEXT); }
<STYLEBLOCK>\r?\n                       { 
                                            yylineno++; 
                                            SETYYLVAL(yytext); 
                                            P("RAW_TEXT"); 
                                            RETURN(RAW_TEXT); 
                                        }



    /* svg block */
^\<svg[^>]*>                            {
                                            SETYYLVAL(yytext); 
                                            P("SVGSTART"); 
                                            enterState(SVGBLOCK, "SVGBLOCK"); 
                                            RETURN(SVGSTART); 
                                        }
<SVGBLOCK>\<\/svg>.*\r?\n               { 
                                            P("SVGEND"); 
                                            yylineno++;
                                            SETYYLVAL("</svg>"); 
                                            restoreState(); 
                                            RETURN(SVGEND);
                                        }
<SVGBLOCK>{normaltext}                  { SETYYLVAL(yytext); P("RAW_TEXT"); RETURN(RAW_TEXT); }
<SVGBLOCK>\r?\n                         { 
                                            yylineno++; 
                                            SETYYLVAL(yytext); 
                                            P("RAW_TEXT"); 
                                            RETURN(RAW_TEXT); 
                                        }
\\[\\`*_()#+\-.!]                       { SETYYLVAL(yytext); P("ESCAPEDCHAR"); RETURN(ESCAPEDCHAR); }
```                                     { SETYYLVAL(yytext); P("TRIPLEBACKTICK"); RETURN(TRIPLEBACKTICK); }
`                                       { SETYYLVAL(yytext); P("BACKTICK"); RETURN(BACKTICK); }
\|                                      { SETYYLVAL(yytext); P("VERTICAL"); RETURN(VERTICAL); }
\*\*\*                                  { SETYYLVAL(yytext); P("TRIPLEASTERISK"); RETURN(TRIPLEASTERISK); }
\*\*                                    { SETYYLVAL(yytext); P("DOUBLEASTERISK"); RETURN(DOUBLEASTERISK); }
\*                                      { SETYYLVAL(yytext); P("ASTERISK"); RETURN(ASTERISK); }
___                                     { SETYYLVAL(yytext); P("TRIPLEUNDERSCORE"); RETURN(TRIPLEUNDERSCORE); }
__                                      { SETYYLVAL(yytext); P("DOUBLEUNDERSCORE"); RETURN(DOUBLEUNDERSCORE); }
_                                       { SETYYLVAL(yytext); P("UNDERSCORE"); RETURN(UNDERSCORE); }
!\[                                     { SETYYLVAL(yytext); P("EXCLAMATION_LEFTSQUARE"); RETURN(EXCLAMATION_LEFTSQUARE); }
\[                                      { SETYYLVAL(yytext); P("LEFTSQUARE"); RETURN(LEFTSQUARE); }
\]\(                                    { SETYYLVAL(yytext); P("RIGHTSQUARE_LEFTBRACKET"); RETURN(RIGHTSQUARE_LEFTBRACKET); }
\)                                      { SETYYLVAL(yytext); P("RIGHTBRACKET"); RETURN(RIGHTBRACKET); }
[ \t]                                   { SETYYLVAL(yytext); P("SPACE"); RETURN(SPACE); }
~~                                      { SETYYLVAL(yytext); P("DOUBLETILDE"); RETURN(DOUBLETILDE); }
:{minus_series}\|                       { SETYYLVAL(yytext); P("SEMI_MINUSSERIES_VERTICAL"); RETURN(SEMI_MINUSSERIES_VERTICAL); }
{minus_series}:\|                       { SETYYLVAL(yytext); P("MINUSSERIES_SEMI_VERTICAL"); RETURN(MINUSSERIES_SEMI_VERTICAL); }
:{minus_series}:\|                      { SETYYLVAL(yytext); P("SEMI_MINUSSERIES_SEMI_VERTICAL"); RETURN(SEMI_MINUSSERIES_SEMI_VERTICAL); }
{minus_series}\|                        { SETYYLVAL(yytext); P("MINUSSERIES_VERTICAL"); RETURN(MINUSSERIES_VERTICAL); }

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



