%{

#include <string.h>
#include "lex-state-stack.h"
#include "node.h"
#include "markdown.y.h"

#undef _ISDEBUGLEX

#ifdef _ISDEBUGLEX
#define P(token) fprintf(stderr, "token: %s: %s\n", token, yytext); BeginToken(yytext);
#else
#define P(token) BeginToken(yytext);
#endif

#define YY_INPUT(buf,result,max_size)  { \
    result = GetNextChar(buf, max_size); \
    if (  result <= 0  ) \
      result = YY_NULL; \
}

/* prototypes */
extern int yylineno;
extern int state;

/* from input.c */
extern int GetNextChar(char *b, int maxBuffer);
extern void BeginToken(char *t);

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

%}

    /* lexer states */
%x ESCAPE CODEBLOCK XCODEBLOCK CODESPAN XCODESPAN
%x INDENTLIST SHTMLBLOCK SCRIPTBLOCK STYLEBLOCK SVGBLOCK
%x TABLEROW LINKSTART LINKATTR ATTRSTART XEMSTART YEMSTART XSTRONGSTART YSTRONGSTART

    /* blankline ^[ ]{0,4}\r?\n */
blankline ^[ \t]*\r?\n
quoteblankline ^>[ ]{0,4}\r?\n

%%

    /* special chars: "\[]^-?.*+|()$/{}%<> */

{blankline}                             { yylineno++; P("BLANKLINE"); return BLANKLINE; }
    /* !!! note: quoteblankline has no effect */
^>\r?\n                                    { yylineno++; P("QUOTEBLANKLINE"); return QUOTEBLANKLINE; }
^>" "\r?\n                                 { yylineno++; P("QUOTEBLANKLINE"); return QUOTEBLANKLINE; }
^>"  "\r?\n                                { yylineno++; P("QUOTEBLANKLINE"); return QUOTEBLANKLINE; }
^>"   "\r?\n                               { yylineno++; P("QUOTEBLANKLINE"); return QUOTEBLANKLINE; }
^>"    "\r?\n                              { yylineno++; P("QUOTEBLANKLINE"); return QUOTEBLANKLINE; }

^>                                      { P("LARGERTHAN"); return LARGERTHAN; }

^@s.*                                   { P("SECTION"); 
                                            yylval.text = strdup(yytext);
                                            return SECTION; }
^@vs.*                                  { P("VSECTION"); 
                                            yylval.text = strdup(yytext);
                                            return VSECTION; }

    /* escape */
<INITIAL,TABLEROW,LINKSTART,LINKATTR,ATTRSTART,XEMSTART,YEMSTART,XSTRONGSTART,YSTRONGSTART>\\ { P("ESCAPE"); enterState(ESCAPE, "ESCAPE"); }
<ESCAPE>[\\`*_{}()#+\-.!]               { restoreState(); yylval.text = strdup(yytext); P("SPECIALCHAR"); return SPECIALCHAR; }
<ESCAPE>.                               { restoreState(); yylval.text = strdup(yytext); P("SPECIALCHAR"); return SPECIALCHAR; }


    /* strong */
<INITIAL,TABLEROW>\*\*/[^ \r\n]         {
                                            P("STRONG_BEGIN");
                                            yylval.text = strdup(yytext);
                                            enterState(XSTRONGSTART, "XSTRONGSTART");
                                            return STRONG_BEGIN;
                                        }
<INITIAL,TABLEROW>__/[^ \r\n]               {
                                            P("STRONG_BEGIN");
                                            yylval.text = strdup(yytext);
                                            enterState(YSTRONGSTART, "YSTRONGSTART");
                                            return STRONG_BEGIN;
                                        }
<INITIAL,TABLEROW,XSTRONGSTART,YSTRONGSTART>[ ]\*\*[ ]|[ ]__[ ] {
                                            P("TEXT");
                                            yylval.text = strdup(yytext);
                                            return TEXT;
                                        }
<XSTRONGSTART>\*\*                           {
                                            P("STRONG_END");
                                            yylval.text = strdup(yytext);
                                            restoreState();
                                            return STRONG_END;
                                        }
<YSTRONGSTART>__                        {
                                            P("STRONG_END");
                                            yylval.text = strdup(yytext);
                                            restoreState();
                                            return STRONG_END;
                                        }
<XSTRONGSTART,YSTRONGSTART>.            {
                                            P("TEXT");
                                            yylval.text = strdup(yytext);
                                            return TEXT;
                                        }
<XSTRONGSTART,YSTRONGSTART>\r?\n        {
                                            P("LINEBREAK");
                                            yylineno++;
                                            yylval.text = strdup(yytext);
                                            restoreState();
                                            return LINEBREAK;
                                        }


    /* emphasis */
<INITIAL,TABLEROW>\*/[^ \*\r\n]         {
                                            P("EM_BEGIN");
                                            yylval.text = strdup(yytext);
                                            enterState(XEMSTART, "XEMSTART");
                                            return EM_BEGIN;
                                        }
<INITIAL,TABLEROW>_/[^ _\r\n]           {
                                            P("EM_BEGIN");
                                            yylval.text = strdup(yytext);
                                            enterState(YEMSTART, "YEMSTART");
                                            return EM_BEGIN;
                                        }
<INITIAL,TABLEROW,XEMSTART,YEMSTART>[ ][\*_][ ]   {
                                            P("TEXT");
                                            yylval.text = strdup(yytext);
                                            return TEXT;
                                        }
<XEMSTART>\*                            {
                                            P("EMEND");
                                            yylval.text = strdup(yytext);
                                            restoreState();
                                            return EM_END;
                                        }
<YEMSTART>_                             {
                                            P("EMEND");
                                            yylval.text = strdup(yytext);
                                            restoreState();
                                            return EM_END;
                                        }
<XEMSTART,YEMSTART>.                    {
                                            P("TEXT");
                                            yylval.text = strdup(yytext);
                                            return TEXT;
                                        }
<XEMSTART,YEMSTART>\r?\n                {
                                            P("LINEBREAK");
                                            yylineno++;
                                            yylval.text = strdup(yytext);
                                            restoreState();
                                            return LINEBREAK;
                                        }

    /* attribute list */
<INITIAL,TABLEROW>@\[\]                 { 
                                            P("EMPTYATTR");
                                            yylval.text = strdup(yytext);
                                            return EMPTYATTR;
                                        }
<INITIAL,TABLEROW>@\[                   { 
                                            P("ATTRLEFT");
                                            yylval.text = strdup(yytext);
                                            enterState(ATTRSTART, "ATTRSTART");
                                            return ATTRLEFT;
                                        }
<ATTRSTART>\]                           {
                                            P("ATTRRIGHT");
                                            yylval.text = strdup(yytext);
                                            restoreState();
                                            return ATTRRIGHT;
                                        }
<ATTRSTART>\r?\n                        {
                                            yylineno++;
                                            P("LINEBREAK");
                                            yylval.text = strdup(yytext);
                                            restoreState();
                                            return LINEBREAK;
                                        }
<ATTRSTART>.                            {
                                            P("TEXT");
                                            yylval.text = strdup(yytext);
                                            return TEXT; 
                                        }


    /* backtick only support single line mode */
<INITIAL,TABLEROW>"`"                   { P("BACKTICK"); enterState(CODESPAN, "CODESPAN"); yylval.text = strdup(yytext); return BACKTICK; }
<CODESPAN>\\`                           { P("SPECIALCHAR"); 
                                            yylval.text = strdup("`"); return SPECIALCHAR; }
<CODESPAN>[^\r\n`]                      { P("CODETEXT"); yylval.text = strdup(yytext); return CODETEXT; }
<CODESPAN>\r?\n                         { P("LINEBREAK"); yylineno++; restoreState(); yylval.text = strdup(yytext); return LINEBREAK; }
<CODESPAN>`                             { P("BACKTICK"); restoreState(); yylval.text = strdup(yytext); return BACKTICK; }

    /* double-backtick will be teated as plain text */
<INITIAL,TABLEROW>"``"                  { yylval.text = strdup(yytext); P("TEXT"); return TEXT; }

^```.*\r?\n                             { P("TRIPLEBACKTICK"); yylineno++; enterState(XCODEBLOCK, "XCODEBLOCK"); yylval.text = strdup(yytext); return TRIPLEBACKTICK; }
<XCODEBLOCK>.                           { P("CODETEXT"); yylval.text = strdup(yytext); return CODETEXT; }
<XCODEBLOCK>\r?\n                       { P("CODETEXT"); yylval.text = strdup(yytext);
                                           yylineno++; return CODETEXT; }
<XCODEBLOCK>^```                        { P("TRIPLEBACKTICK"); restoreState(); yylval.text = strdup(yytext); return TRIPLEBACKTICK; }


    /* table rows */
^"|"                                    { P("TABLEROWSTART"); enterState(TABLEROW, "TABLEROW"); yylval.text = strdup(yytext); return TABLEROWSTART; }
<TABLEROW>"|"                           { P("TABLECEILEND"); yylval.text = strdup(yytext); return TABLECEILEND; }
<TABLEROW>.                             { P("TEXT"); yylval.text = strdup(yytext); return TEXT; }
<TABLEROW>\r?\n                         { P("LINEBREAK"); yylineno++; restoreState(); yylval.text = strdup(yytext); return LINEBREAK; }



^" "{0,3}[*+-][ ]+                      { P("ULSTART"); return ULSTART; }
^>" "{0,3}[*+-][ ]+                         { P("QUOTEULSTART"); return QUOTEULSTART; }
^" "{0,3}[1-9][0-9]*\.[ ]+              { P("OLSTART"); return OLSTART; }
^>" "{0,3}[1-9][0-9]*\.[ ]+                 { P("QUOTEOLSTART"); return QUOTEOLSTART; }



^(\t|[ ]{4})+/[ ]{0,3}[*+][ ]+            { 
                                            /* indent ul list */
                                            if(is_in_list(indent_level(yytext))){
                                                enterState(INDENTLIST, "INDENTLIST");
                                                yylval.text = strdup(yytext);
                                                P("ULINDENT"); return ULINDENT; 
                                            }
                                            else{
                                                enterState(CODEBLOCK, "CODEBLOCK"); 
                                                yylval.text = strdup(yytext);
                                                if (inner_pre_level(indent_level(yytext)) > -1) {
                                                    P("INDENTED_PRE_INDENT"); return INDENTED_PRE_INDENT;
                                                }
                                                else {
                                                    P("PRE_INDENT"); return PRE_INDENT;
                                                }
                                            }
                                        }   
^(\t|[ ]{4})+/[ ]{0,3}[1-9][0-9]*\.[ ]+ { 
                                            /* indent ol list */
                                            if(is_in_list(indent_level(yytext))){
                                                enterState(INDENTLIST, "INDENTLIST");
                                                yylval.text = strdup(yytext);
                                                P("OLINDENT"); return OLINDENT; 
                                            }
                                            else{
                                                enterState(CODEBLOCK, "CODEBLOCK"); 
                                                yylval.text = strdup(yytext);
                                                if (inner_pre_level(indent_level(yytext)) > -1) {
                                                    P("INDENTED_PRE_INDENT"); return INDENTED_PRE_INDENT;
                                                }
                                                else {
                                                    P("PRE_INDENT"); return PRE_INDENT;
                                                }
                                            }
                                        }   
^(\t|[ ]{4})+/.                         { 
                                            /* indent p */
                                            if(is_in_list(indent_level(yytext))){
                                                yylval.text = strdup(yytext);
                                                P("TEXTINDENT"); return TEXTINDENT; 
                                            }
                                            else{
                                                enterState(CODEBLOCK, "CODEBLOCK"); 
                                                yylval.text = strdup(yytext);
                                                if (inner_pre_level(indent_level(yytext)) > -1) {
                                                    P("INDENTED_PRE_INDENT"); return INDENTED_PRE_INDENT;
                                                }
                                                else {
                                                    P("PRE_INDENT"); return PRE_INDENT;
                                                }
                                            }
                                        }
<CODEBLOCK>.+                           { yylval.text = strdup(yytext); P("CODETEXT"); return CODETEXT; }
<CODEBLOCK>\r?\n                        { P("LINEBREAK"); restoreState(); yylineno++; return LINEBREAK; }

<INDENTLIST>[ ]{0,3}[*+][ ]+            { restoreState(); P("ULSTART"); return ULSTART; }
<INDENTLIST>[ ]{0,3}[1-9][0-9]*\.[ ]+   { restoreState(); P("OLSTART"); return OLSTART; }


^#{1,6}                       { yylval.text = strdup(yytext); P("H"); return H; }
^>" "+#{1,6}                  { yylval.text = strdup(yytext); P("QUOTEH"); return QUOTEH; }

    /* block and functional html tags must be in one line and must start at first column */
^\<\/?(a|abbr|acronym|address|applet|area|article|aside|audio|b|base|basefont|bdi|bdo|big|blockquote|body|br|button|canvas|caption|center|cite|code|col|colgroup|command|datalist|dd|del|details|dir|div|dfn|dialog|dl|dt|em|embed|fieldset|figcaption|figure|font|footer|form|frame|frameset|h[1-6]|head|header|hr|html|i|iframe|img|input|ins|isindex|kbd|keygen|label|legend|li|link|map|mark|menu|menuitem|meta|meter|nav|noframes|noscript|object|ol|optgroup|option|output|p|param|pre|progress|q|rp|rt|ruby|s|samp|section|select|small|source|span|strike|strong|sub|summary|sup|table|tbody|td|textarea|tfoot|th|thead|time|title|tr|track|tt|u|ul|var|video|wbr|xmp)([" "\r\n][^>]*\/?\>|\/?\>)   { 
                                            yylval.text = strdup(yytext); 
                                            P("HTMLBLOCK"); 
                                            enterState(SHTMLBLOCK, "SHTMLBLOCK"); 
                                            return HTMLBLOCK; 
                                        }
<SHTMLBLOCK>.+          { yylval.text = strdup(yytext); P("TEXT"); return TEXT; }
<SHTMLBLOCK>\r?\n       { yylineno++; P("LINEBREAK"); restoreState();  return LINEBREAK; }

    /* linkable text */
<INITIAL,TABLEROW,XEMSTART,YEMSTART,XSTRONGSTART,YSTRONGSTART>\<(https?|ftp|ref):\/\/[^\r\n\>]+\> {
                                            yylval.text = strdup(yytext);
                                            P("LINK");
                                            return LINK;
                                        }
<INITIAL,TABLEROW,XEMSTART,YEMSTART,XSTRONGSTART,YSTRONGSTART>\<mailto:[^\r\n\>]+\> {
                                            yylval.text = strdup(yytext);
                                            P("LINK");
                                            return LINK;
                                        }

    /* image: ![Alt text](/path/to/img.jpg "optional title") */
<INITIAL,TABLEROW>!\[/[^\r\n]+\]\([^\r\n]+\) {
                                            yylval.text = strdup(yytext);
                                            P("EXCLAMATION_LEFTSQUARE");
                                            enterState(LINKSTART, "LINKSTART"); 
                                            return EXCLAMATION_LEFTSQUARE;
                                        }

    /* link: [an example](http://example.com/ "Title") */
<INITIAL,TABLEROW,XEMSTART,YEMSTART,XSTRONGSTART,YSTRONGSTART>\[/[^\r\n]+\]\([^\r\n]+\) {
                                            yylval.text = strdup(yytext);
                                            P("LEFTSQUARE");
                                            enterState(LINKSTART, "LINKSTART"); 
                                            return LEFTSQUARE;
                                        }
<LINKSTART>\]\(                         {
                                            yylval.text = strdup(yytext);
                                            P("RIGHSQUARE_LEFTBRACKET");
                                            restoreState();
                                            enterState(LINKATTR, "LINKATTR"); 
                                            return RIGHTSQUARE_LEFTBRACKET;
                                        }
<LINKATTR>\)                            {
                                            yylval.text = strdup(yytext);
                                            P("RIGHTBRACKET");
                                            restoreState();
                                            return RIGHTBRACKET;
                                        }
<LINKSTART>[^\r\n]                      {
                                            yylval.text = strdup(yytext);
                                            P("TEXT");
                                            return TEXT;
                                        }
<LINKATTR>[^\r\n]                       {
                                            yylval.text = strdup(yytext);
                                            P("TEXT");
                                            return TEXT;
                                        }



    /* script block */
    /* problem triggered below: input buffer overflow, can't enlarge buffer because scanner uses REJECT */
    /*^\<script[^>]*>/(.|[\r\n])*\<\/script>  { */

^\<script[^>]*>                         {
                                            enterState(SCRIPTBLOCK, "SCRIPTBLOCK"); 
                                            yylval.text = strdup(yytext); 
                                            P("SCRIPTSTART"); 
                                            return SCRIPTSTART; 
                                        }
<SCRIPTBLOCK>[^\r\n]                    { yylval.text = strdup(yytext); P("TEXT"); return TEXT; }
<SCRIPTBLOCK>\r?\n                      { 
                                            yylineno++; 
                                            yylval.text = strdup(yytext); 
                                            P("TEXT"); 
                                            return TEXT; 
                                        }
<SCRIPTBLOCK>\<\/script>.*\r?\n         { 
                                            P("SCRIPTEND"); 
                                            yylineno++;
                                            restoreState(); 
                                            yylval.text = strdup("</script>"); 
                                            return SCRIPTEND;
                                        }





    /* style block */
    /* ^\<style[^>]*>/(.|[\r\n])*\<\/style>    { */
^\<style[^>]*>                          {
                                            yylval.text = strdup(yytext); 
                                            P("STYLESTART"); 
                                            enterState(STYLEBLOCK, "STYLEBLOCK"); 
                                            return STYLESTART; 
                                        }
<STYLEBLOCK>.                           { yylval.text = strdup(yytext); P("TEXT"); return TEXT; }
<STYLEBLOCK>\r?\n                       { 
                                            yylineno++; 
                                            yylval.text = strdup(yytext); 
                                            P("TEXT"); 
                                            return TEXT; 
                                        }
<STYLEBLOCK>\<\/style>.*\r?\n           { 
                                            P("STYLEEND"); 
                                            yylineno++;
                                            yylval.text = "</style>"; 
                                            restoreState(); 
                                            return STYLEEND;
                                        }



    /* svg block */
^\<svg[^>]*>                            {
                                            yylval.text = strdup(yytext); 
                                            P("SVGSTART"); 
                                            enterState(SVGBLOCK, "SVGBLOCK"); 
                                            return SVGSTART; 
                                        }
<SVGBLOCK>.                             { yylval.text = strdup(yytext); P("TEXT"); return TEXT; }
<SVGBLOCK>\r?\n                         { 
                                            yylineno++; 
                                            yylval.text = strdup(yytext); 
                                            P("TEXT"); 
                                            return TEXT; 
                                        }
<SVGBLOCK>\<\/svg>.*\r?\n               { 
                                            P("SVGEND"); 
                                            yylineno++;
                                            yylval.text = "</svg>"; 
                                            restoreState(); 
                                            return SVGEND;
                                        }





.                             { yylval.text = strdup(yytext); P("TEXT"); return TEXT; }
\r?\n                         { yylineno++; P("LINEBREAK"); return LINEBREAK; }


%%

int yywrap(){
    return 1;
}


    /*
    int main(int argc, char **argv){
        yyin = fopen(argv[1], "r");
        yylex();
        fclose(yyin);
    }
    */



