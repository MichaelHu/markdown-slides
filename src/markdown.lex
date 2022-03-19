%{

#include <string.h>
#include "strutils.h"
#include "logutils.h"
#include "lex-state-stack.h"
#include "node.h"
#include "markdown.y.h"

#undef _ONLYLEX
#undef _ISDEBUGLEX

/*#define _ONLYLEX*/


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

^>\r?\n                                 { yylineno++; P("QUOTEBLANKLINE"); RETURN(QUOTEBLANKLINE); }
^>" "\r?\n                              { yylineno++; P("QUOTEBLANKLINE"); RETURN(QUOTEBLANKLINE); }
^>"  "\r?\n                             { yylineno++; P("QUOTEBLANKLINE"); RETURN(QUOTEBLANKLINE); }
^>"   "\r?\n                            { yylineno++; P("QUOTEBLANKLINE"); RETURN(QUOTEBLANKLINE); }
^>"    "\r?\n                           { yylineno++; P("QUOTEBLANKLINE"); RETURN(QUOTEBLANKLINE); }

^>                                      { P("LARGERTHAN"); enterState(QUOTESTART, "QUOTESTART"); RETURN(LARGERTHAN); }
    /* indented quote blankline: eat only, no token returned */
<INDENTQUOTE>">"\r?\n                   { yylineno++; restoreState(); }
<INDENTQUOTE>"> "\r?\n                  { yylineno++; restoreState(); }
<INDENTQUOTE>">  "\r?\n                 { yylineno++; restoreState(); }
<INDENTQUOTE>">   "\r?\n                { yylineno++; restoreState(); }
<INDENTQUOTE>">    "\r?\n               { yylineno++; restoreState(); }
    /* indented quote */
<INDENTQUOTE>">"                        { P("LARGERTHAN"); restoreState(); enterState(QUOTESTART, "QUOTESTART"); RETURN(LARGERTHAN); }

^@s.*                                   { P("SECTION"); 
                                            SETYYLVAL(yytext);
                                            RETURN(SECTION); }
^@vs.*                                  { P("VSECTION"); 
                                            SETYYLVAL(yytext);
                                            RETURN(VSECTION); }

    /* escape */
<INITIAL,QUOTESTART,TABLEROW,LINKSTART,LINKATTR,ATTRSTART,XEMSTART,YEMSTART,XSTRONGSTART,YSTRONGSTART>\\ { P("ESCAPE"); enterState(ESCAPE, "ESCAPE"); }
<ESCAPE>[\\`*_{}()#+\-.!]               { restoreState(); SETYYLVAL(yytext); P("SPECIALCHAR"); RETURN(SPECIALCHAR); }
<ESCAPE>.                               { restoreState(); SETYYLVAL(yytext); P("SPECIALCHAR"); RETURN(SPECIALCHAR); }
<ESCAPE>\r?\n                           { restoreState(); yylineno++; SETYYLVAL("<br>"); P("SPECIALCHAR"); RETURN(SPECIALCHAR); }


    /* strong */
<INITIAL,TABLEROW,QUOTESTART>\*\*/[^ \r\n]         {
                                            P("STRONG_BEGIN");
                                            SETYYLVAL(yytext);
                                            enterState(XSTRONGSTART, "XSTRONGSTART");
                                            RETURN(STRONG_BEGIN);
                                        }
<INITIAL,TABLEROW,QUOTESTART>__/[^ \r\n]               {
                                            P("STRONG_BEGIN");
                                            SETYYLVAL(yytext);
                                            enterState(YSTRONGSTART, "YSTRONGSTART");
                                            RETURN(STRONG_BEGIN);
                                        }
<INITIAL,TABLEROW,QUOTESTART,XSTRONGSTART,YSTRONGSTART>[ ]\*\*[ ]|[ ]__[ ] {
                                            P("TEXT");
                                            SETYYLVAL(yytext);
                                            RETURN(TEXT);
                                        }
<XSTRONGSTART>\*\*                           {
                                            P("STRONG_END");
                                            SETYYLVAL(yytext);
                                            restoreState();
                                            RETURN(STRONG_END);
                                        }
<YSTRONGSTART>__                        {
                                            P("STRONG_END");
                                            SETYYLVAL(yytext);
                                            restoreState();
                                            RETURN(STRONG_END);
                                        }
<XSTRONGSTART,YSTRONGSTART>{normaltext}       {
                                            P("TEXT");
                                            SETYYLVAL(yytext);
                                            RETURN(TEXT);
                                        }
<XSTRONGSTART,YSTRONGSTART>\r?\n        {
                                            P("LINEBREAK");
                                            yylineno++;
                                            SETYYLVAL(yytext);
                                            restoreState();
                                            RETURN(LINEBREAK);
                                        }


    /* emphasis */
<INITIAL,TABLEROW,QUOTESTART>\*/[^ \*\r\n]         {
                                            P("EM_BEGIN");
                                            SETYYLVAL(yytext);
                                            enterState(XEMSTART, "XEMSTART");
                                            RETURN(EM_BEGIN);
                                        }
<INITIAL,TABLEROW,QUOTESTART>_/[^ _\r\n]           {
                                            P("EM_BEGIN");
                                            SETYYLVAL(yytext);
                                            enterState(YEMSTART, "YEMSTART");
                                            RETURN(EM_BEGIN);
                                        }
<INITIAL,TABLEROW,QUOTESTART,XEMSTART,YEMSTART>[ ][\*_][ ]   {
                                            P("TEXT");
                                            SETYYLVAL(yytext);
                                            RETURN(TEXT);
                                        }
<XEMSTART>\*                            {
                                            P("EMEND");
                                            SETYYLVAL(yytext);
                                            restoreState();
                                            RETURN(EM_END);
                                        }
<YEMSTART>_                             {
                                            P("EMEND");
                                            SETYYLVAL(yytext);
                                            restoreState();
                                            RETURN(EM_END);
                                        }
<XEMSTART,YEMSTART>{normaltext}         {
                                            P("TEXT");
                                            SETYYLVAL(yytext);
                                            RETURN(TEXT);
                                        }
<XEMSTART,YEMSTART>\r?\n                {
                                            P("LINEBREAK");
                                            yylineno++;
                                            SETYYLVAL(yytext);
                                            restoreState();
                                            RETURN(LINEBREAK);
                                        }

    /* attribute list */
<INITIAL,TABLEROW,QUOTESTART>@\[\]                 { 
                                            P("EMPTYATTR");
                                            SETYYLVAL(yytext);
                                            RETURN(EMPTYATTR);
                                        }
<INITIAL,TABLEROW,QUOTESTART>@\[                   { 
                                            P("ATTRLEFT");
                                            SETYYLVAL(yytext);
                                            enterState(ATTRSTART, "ATTRSTART");
                                            RETURN(ATTRLEFT);
                                        }
<ATTRSTART>\]                           {
                                            P("ATTRRIGHT");
                                            SETYYLVAL(yytext);
                                            restoreState();
                                            RETURN(ATTRRIGHT);
                                        }
<ATTRSTART>\r?\n                        {
                                            yylineno++;
                                            P("LINEBREAK");
                                            SETYYLVAL(yytext);
                                            restoreState();
                                            RETURN(LINEBREAK);
                                        }
<ATTRSTART>{normaltext}                 {
                                            P("TEXT");
                                            SETYYLVAL(yytext);
                                            RETURN(TEXT); 
                                        }


    /* backtick only support single line mode */
<INITIAL,TABLEROW,QUOTESTART>"`"                   { P("BACKTICK"); enterState(CODESPAN, "CODESPAN"); SETYYLVAL(yytext); RETURN(BACKTICK); }
<CODESPAN>\\`                           { P("SPECIALCHAR"); 
                                            SETYYLVAL("`"); RETURN(SPECIALCHAR); }
<CODESPAN>`                             { P("BACKTICK"); restoreState(); SETYYLVAL(yytext); RETURN(BACKTICK); }
<CODESPAN>{normaltext}                  { P("CODETEXT"); SETYYLVAL(yytext); RETURN(CODETEXT); }
<CODESPAN>\r?\n                         { P("LINEBREAK"); yylineno++; restoreState(); SETYYLVAL(yytext); RETURN(LINEBREAK); }

    /* double-backtick will be teated as plain text */
<INITIAL,TABLEROW,QUOTESTART>"``"                  { SETYYLVAL(yytext); P("TEXT"); RETURN(TEXT); }

^```.*\r?\n                             { P("TRIPLEBACKTICK"); yylineno++; enterState(XCODEBLOCK, "XCODEBLOCK"); SETYYLVAL(yytext); RETURN(TRIPLEBACKTICK); }
<XCODEBLOCK>^```                        { P("TRIPLEBACKTICK"); restoreState(); SETYYLVAL(yytext); RETURN(TRIPLEBACKTICK); }
<XCODEBLOCK>{normaltext}                { P("CODETEXT"); SETYYLVAL(yytext); RETURN(CODETEXT); }
<XCODEBLOCK>\r?\n                       { P("CODETEXT"); SETYYLVAL(yytext);
                                           yylineno++; RETURN(CODETEXT); }


    /* table rows */
<INDENTTABLEROW>\|                      { P("TABLEROWSTART"); enterState(TABLEROW, "TABLEROW"); SETYYLVAL(yytext); RETURN(TABLEROWSTART); }
^"|"                                    { P("TABLEROWSTART"); enterState(TABLEROW, "TABLEROW"); SETYYLVAL(yytext); RETURN(TABLEROWSTART); }
<TABLEROW>"|"                           { P("TABLECEILEND"); SETYYLVAL(yytext); RETURN(TABLECEILEND); }
<TABLEROW>{normaltext}                  { P("TEXT"); SETYYLVAL(yytext); RETURN(TEXT); }
<TABLEROW>\r?\n                         { 
                                            P("LINEBREAK"); 
                                            yylineno++; 
                                            restoreState(); 
                                            popWhenTopStateIs(INDENTTABLEROW); 
                                            SETYYLVAL(yytext); 
                                            RETURN(LINEBREAK); 
                                        }



    /* ul & ol row */
^" "{0,3}[*+-][ ]+                      { P("ULSTART"); RETURN(ULSTART); }
^>" "{0,3}[*+-][ ]+                     { P("QUOTEULSTART"); RETURN(QUOTEULSTART); }
^" "{0,3}[1-9][0-9]*\.[ ]+              { P("OLSTART"); RETURN(OLSTART); }
^>" "{0,3}[1-9][0-9]*\.[ ]+             { P("QUOTEOLSTART"); RETURN(QUOTEOLSTART); }



^(\t|[ ]{4})+/[ ]{0,3}[*+][ ]+            { 
                                            /* indent ul list */
                                            if(is_in_list(indent_level(yytext))){
                                                enterState(INDENTLIST, "INDENTLIST");
                                                SETYYLVAL(yytext);
                                                P("ULINDENT"); RETURN(ULINDENT); 
                                            }
                                            else{
                                                enterState(CODEBLOCK, "CODEBLOCK"); 
                                                SETYYLVAL(yytext);
                                                if (inner_pre_level(indent_level(yytext)) > -1) {
                                                    P("INDENTED_PRE_INDENT"); RETURN(INDENTED_PRE_INDENT);
                                                }
                                                else {
                                                    P("PRE_INDENT"); RETURN(PRE_INDENT);
                                                }
                                            }
                                        }   
^(\t|[ ]{4})+/[ ]{0,3}[1-9][0-9]*\.[ ]+ { 
                                            /* indent ol list */
                                            if(is_in_list(indent_level(yytext))){
                                                enterState(INDENTLIST, "INDENTLIST");
                                                SETYYLVAL(yytext);
                                                P("OLINDENT"); RETURN(OLINDENT); 
                                            }
                                            else{
                                                enterState(CODEBLOCK, "CODEBLOCK"); 
                                                SETYYLVAL(yytext);
                                                if (inner_pre_level(indent_level(yytext)) > -1) {
                                                    P("INDENTED_PRE_INDENT"); RETURN(INDENTED_PRE_INDENT);
                                                }
                                                else {
                                                    P("PRE_INDENT"); RETURN(PRE_INDENT);
                                                }
                                            }
                                        }   


    /* indented table */
^(\t|[ ]{4})+/\|                        { 
                                            /* indent table */
                                            if(is_in_list(indent_level(yytext))){
                                                P("TABLE_INDENT"); 
                                                enterState(INDENTTABLEROW, "INDENTTABLEROW"); 
                                                SETYYLVAL(yytext); 
                                                RETURN(TABLE_INDENT);     
                                            }
                                            else{
                                                enterState(CODEBLOCK, "CODEBLOCK"); 
                                                SETYYLVAL(yytext);
                                                if (inner_pre_level(indent_level(yytext)) > -1) {
                                                    P("INDENTED_PRE_INDENT"); RETURN(INDENTED_PRE_INDENT);
                                                }
                                                else {
                                                    P("PRE_INDENT"); RETURN(PRE_INDENT);
                                                }
                                            }
                                        }

    /* indented quoted blankline */
^(\t|[ ]{4})+/>[ ]{0,4}\r?\n            { 
                                            /* quoted blankline */
                                            if(is_in_list(indent_level(yytext))){
                                                P("INDENT_QUOTEBLANKLINE"); 
                                                enterState(INDENTQUOTE, "INDENTQUOTE");
                                                SETYYLVAL(yytext);
                                                RETURN(INDENT_QUOTEBLANKLINE);
                                            }
                                            else{
                                                enterState(CODEBLOCK, "CODEBLOCK"); 
                                                SETYYLVAL(yytext);
                                                if (inner_pre_level(indent_level(yytext)) > -1) {
                                                    P("INDENTED_PRE_INDENT"); RETURN(INDENTED_PRE_INDENT);
                                                }
                                                else {
                                                    P("PRE_INDENT"); RETURN(PRE_INDENT);
                                                }
                                            }
                                        }

    /* indented quoted paragraph */
^(\t|[ ]{4})+/>                         { 
                                            /* quoted paragraph */
                                            if(is_in_list(indent_level(yytext))){
                                                P("QUOTE_INDENT"); 
                                                enterState(INDENTQUOTE, "INDENTQUOTE");
                                                SETYYLVAL(yytext);
                                                RETURN(QUOTE_INDENT); 
                                            }
                                            else{
                                                enterState(CODEBLOCK, "CODEBLOCK"); 
                                                SETYYLVAL(yytext);
                                                if (inner_pre_level(indent_level(yytext)) > -1) {
                                                    P("INDENTED_PRE_INDENT"); RETURN(INDENTED_PRE_INDENT);
                                                }
                                                else {
                                                    P("PRE_INDENT"); RETURN(PRE_INDENT);
                                                }
                                            }
                                        }

    /* indented paragraph */
^(\t|[ ]{4})+/.                         { 
                                            /* indent p */
                                            if(is_in_list(indent_level(yytext))){
                                                SETYYLVAL(yytext);
                                                P("TEXTINDENT"); RETURN(TEXTINDENT); 
                                            }
                                            else{
                                                enterState(CODEBLOCK, "CODEBLOCK"); 
                                                SETYYLVAL(yytext);
                                                if (inner_pre_level(indent_level(yytext)) > -1) {
                                                    P("INDENTED_PRE_INDENT"); RETURN(INDENTED_PRE_INDENT);
                                                }
                                                else {
                                                    P("PRE_INDENT"); RETURN(PRE_INDENT);
                                                }
                                            }
                                        }




<CODEBLOCK>.+                           { SETYYLVAL(yytext); P("CODETEXT"); RETURN(CODETEXT); }
<CODEBLOCK>\r?\n                        { P("LINEBREAK"); restoreState(); yylineno++; RETURN(LINEBREAK); }

<INDENTLIST>[ ]{0,3}[*+][ ]+            { restoreState(); P("ULSTART"); RETURN(ULSTART); }
<INDENTLIST>[ ]{0,3}[1-9][0-9]*\.[ ]+   { restoreState(); P("OLSTART"); RETURN(OLSTART); }


^#{1,6}                       { SETYYLVAL(yytext); P("H"); RETURN(H); }
^>" "+#{1,6}                  { SETYYLVAL(yytext); P("QUOTEH"); RETURN(QUOTEH); }

    /* block and functional html tags must be in one line and must start at first column */
^\<\/?(a|abbr|acronym|address|applet|area|article|aside|audio|b|base|basefont|bdi|bdo|big|blockquote|body|br|button|canvas|caption|center|cite|code|col|colgroup|command|datalist|dd|del|details|dir|div|dfn|dialog|dl|dt|em|embed|fieldset|figcaption|figure|font|footer|form|frame|frameset|h[1-6]|head|header|hr|html|i|iframe|img|input|ins|isindex|kbd|keygen|label|legend|li|link|map|mark|menu|menuitem|meta|meter|nav|noframes|noscript|object|ol|optgroup|option|output|p|param|pre|progress|q|rp|rt|ruby|s|samp|section|select|small|source|span|strike|strong|sub|summary|sup|table|tbody|td|textarea|tfoot|th|thead|time|title|tr|track|tt|u|ul|var|video|wbr|xmp)([" "\r\n][^>]*\/?\>|\/?\>)   { 
                                            SETYYLVAL(yytext); 
                                            P("HTMLBLOCK"); 
                                            enterState(SHTMLBLOCK, "SHTMLBLOCK"); 
                                            RETURN(HTMLBLOCK); 
                                        }
<SHTMLBLOCK>.+          { SETYYLVAL(yytext); P("TEXT"); RETURN(TEXT); }
<SHTMLBLOCK>\r?\n       { yylineno++; P("LINEBREAK"); restoreState();  RETURN(LINEBREAK); }

    /* linkable text */
<INITIAL,TABLEROW,QUOTESTART,XEMSTART,YEMSTART,XSTRONGSTART,YSTRONGSTART>\<(https?|ftp|ref):\/\/[^\r\n\>]+\> {
                                            SETYYLVAL(yytext);
                                            P("LINK");
                                            RETURN(LINK);
                                        }
<INITIAL,TABLEROW,QUOTESTART,XEMSTART,YEMSTART,XSTRONGSTART,YSTRONGSTART>\<mailto:[^\r\n\>]+\> {
                                            SETYYLVAL(yytext);
                                            P("LINK");
                                            RETURN(LINK);
                                        }

    /* image: ![Alt text](/path/to/img.jpg "optional title") */
<INITIAL,TABLEROW,QUOTESTART>!\[/[^\r\n]+\]\([^\r\n]+\) {
                                            SETYYLVAL(yytext);
                                            P("EXCLAMATION_LEFTSQUARE");
                                            enterState(LINKSTART, "LINKSTART"); 
                                            RETURN(EXCLAMATION_LEFTSQUARE);
                                        }

    /* link: [an example](http://example.com/ "Title") */
<INITIAL,TABLEROW,QUOTESTART,XEMSTART,YEMSTART,XSTRONGSTART,YSTRONGSTART>\[/[^\r\n]+\]\([^\r\n]+\) {
                                            SETYYLVAL(yytext);
                                            P("LEFTSQUARE");
                                            enterState(LINKSTART, "LINKSTART"); 
                                            RETURN(LEFTSQUARE);
                                        }
<LINKSTART>\]\(                         {
                                            SETYYLVAL(yytext);
                                            P("RIGHSQUARE_LEFTBRACKET");
                                            restoreState();
                                            enterState(LINKATTR, "LINKATTR"); 
                                            RETURN(RIGHTSQUARE_LEFTBRACKET);
                                        }
<LINKATTR>\)                            {
                                            SETYYLVAL(yytext);
                                            P("RIGHTBRACKET");
                                            restoreState();
                                            RETURN(RIGHTBRACKET);
                                        }
<LINKSTART>{normaltext}                 {
                                            SETYYLVAL(yytext);
                                            P("TEXT");
                                            RETURN(TEXT);
                                        }
<LINKATTR>{normaltext}                  {
                                            SETYYLVAL(yytext);
                                            P("TEXT");
                                            RETURN(TEXT);
                                        }



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
<SCRIPTBLOCK>{normaltext}               { SETYYLVAL(yytext); P("TEXT"); RETURN(TEXT); }
<SCRIPTBLOCK>\r?\n                      { 
                                            yylineno++; 
                                            SETYYLVAL(yytext); 
                                            P("TEXT"); 
                                            RETURN(TEXT); 
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
<STYLEBLOCK>{normaltext}                { SETYYLVAL(yytext); P("TEXT"); RETURN(TEXT); }
<STYLEBLOCK>\r?\n                       { 
                                            yylineno++; 
                                            SETYYLVAL(yytext); 
                                            P("TEXT"); 
                                            RETURN(TEXT); 
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
<SVGBLOCK>{normaltext}                  { SETYYLVAL(yytext); P("TEXT"); RETURN(TEXT); }
<SVGBLOCK>\r?\n                         { 
                                            yylineno++; 
                                            SETYYLVAL(yytext); 
                                            P("TEXT"); 
                                            RETURN(TEXT); 
                                        }


    /* simple quote */
<QUOTESTART>{normaltext}                {
                                            P("TEXT");
                                            SETYYLVAL(yytext);
                                            RETURN(TEXT);
                                        }
<QUOTESTART>\r?\n                       {
                                            P("LINEBREAK");
                                            yylineno++;
                                            SETYYLVAL(yytext);
                                            restoreState();
                                            RETURN(LINEBREAK);
                                        }

{normaltext}                            { SETYYLVAL(yytext); P("TEXT"); RETURN(TEXT); }
\r?\n                                   { yylineno++; P("LINEBREAK"); restoreState(); RETURN(LINEBREAK); }


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



