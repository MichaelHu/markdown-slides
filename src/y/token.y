%union{
    char *text;
    /* t_node *node; */
};

    /* bind union part with terminal symbol */
/*
%token <text> TEXT SPECIALCHAR CODETEXT H QUOTEH HTMLBLOCK SECTION VSECTION SCRIPTSTART SCRIPTEND
%token <text> STYLESTART STYLEEND SVGSTART SVGEND LINK BACKTICK TRIPLEBACKTICK
%token <text> TABLEROWSTART TABLECEILEND
%token <text> ULINDENT OLINDENT TEXTINDENT PRE_INDENT INDENTED_PRE_INDENT TABLE_INDENT QUOTE_INDENT
%token <text> LEFTSQUARE RIGHTSQUARE_LEFTBRACKET RIGHTBRACKET EXCLAMATION_LEFTSQUARE
%token <text> ATTRLEFT ATTRRIGHT EMPTYATTR
%token <text> EM_BEGIN EM_END STRONG_BEGIN STRONG_END
%token <text> INDENT_QUOTEBLANKLINE

%token MINUS PLUS RIGHTPARENTHESES LEFTPARENTHESES 
%token UNDERSCORE STAR BLANKLINE LINEBREAK LARGERTHAN
%token DOUBLESTAR DOUBLEUNDERSCORE OLSTART ULSTART QUOTEBLANKLINE QUOTEOLSTART QUOTEULSTART
*/

    /* bind union part with nonterminal symbol */
/*
%type <text> text_list
%type <text> codespan code_list error
%type <node> blocks block
%type <node> lines line
%type <node> header raw_text pairedblock
%type <node> tablerows tablerow tableceils tableceil
%type <node> block_p line_p
%type <node> block_blank line_blank
%type <node> block_ul line_ul block_ol line_ol
%type <node> block_indent_ul line_indent_ul block_indent_ol line_indent_ol block_indent_text line_indent_text
%type <node> block_pre line_pre block_indented_pre line_indented_pre
%type <node> inline_elements inline_element inline_text_collection inline_text
%type <node> plaintext link inline_code standard_link standard_image inline_emphasis inline_strong

%type <node> block_quote_h
%type <node> block_quote_blank line_quote_blank
%type <node> block_quote_p line_quote_p
%type <node> block_quote_ul line_quote_ul block_quote_ol line_quote_ol

%nonassoc TEXT SPECIALCHAR EXCLAMATION LEFTSQUARE STAR DOUBLESTAR UNDERSCORE DOUBLEUNDERSCORE BACKTICK TRIPLEBACKTICK error
%nonassoc STARX
*/


    /* bind union part with terminal symbol */
%token <text> BLANKLINE
%token <text> LINEBREAK           

%token <text> LF_H                

%token <text> LF_UL                
%token <text> UL                

%token <text> LF_INDENT_UL                
%token <text> LF_INDENT2_UL                
%token <text> LF_INDENT3_UL                
%token <text> LF_INDENT4_UL                

%token <text> LF_INDENT              
%token <text> LF_INDENT2
%token <text> LF_INDENT3
%token <text> LF_INDENT4
%token <text> LF_INDENT5

%token <text> LF_Q_H
%token <text> LF_Q_UL

%token <text> LF_Q_INDENT_UL                
%token <text> LF_Q_INDENT2_UL                

%token <text> LF_Q_INDENT              
%token <text> LF_Q_INDENT2
%token <text> LF_Q_INDENT3

%token <text> LF_Q

%token <text> SPECIALCHAR         
%token <text> LESSTHAN            
%token <text> LARGERTHAN          
%token <text> TRIPLEBACKTICK      
%token <text> BACKTICK            
%token <text> VERTICAL            
%token <text> DOUBLEASTERISK      
%token <text> DOUBLETILDE      
%token <text> ASTERISK            
%token <text> PLUS                
%token <text> MINUS               
%token <text> DIGIT               
%token <text> DOT                 

%token <text> SPACE               
%token <text> LEFTSQUARE          
%token <text> RIGHTSQUARE         
%token <text> LEFTBRACKET         
%token <text> RIGHTBRACKET        
%token <text> EXCLAMATION         
%token <text> DOUBLEUNDERSCORE    
%token <text> UNDERSCORE          
%token <text> LEFTPARENTHESIS     
%token <text> RIGHTPARENTHESIS    
%token <text> TEXT                


    /* bind union part with nonterminal symbol */
%type <text> markdownfile
%type <text> blocks
%type <text> block
%type <text> quote_block
%type <text> header
%type <text> paragraph
%type <text> unorderlist_0
%type <text> codeblock
%type <text> lf_indents2_codeblock
%type <text> lf_indents3_codeblock
%type <text> lf_indents4_codeblock
%type <text> quote_header
%type <text> quote_unorderlist_0
%type <text> quote_paragraph
%type <text> quote_codeblock
%type <text> lines
%type <text> unorderlist_1
%type <text> quote_unorderlist_1
%type <text> lf_q_indents2_codeblock
%type <text> lf_q_indents3_codeblock
%type <text> lf_indents
%type <text> lf_indents2
%type <text> lf_indents3
%type <text> lf_indents4
%type <text> lf_indents5
%type <text> lf_q_indents
%type <text> lf_q_indents2
%type <text> lf_q_indents3
%type <text> line
%type <text> unorderlist_2
%type <text> inline_elements
%type <text> inline_element
%type <text> inline_text
%type <text> inline_text_item
%type <text> inline_code_text
%type <text> inline_code_text_item
%type <text> code_text
%type <text> code_text_item
%type <text> link
%type <text> image
%type <text> italic
%type <text> strong
%type <text> linethrough
%type <text> inlinecode

%nonassoc ITALICSTART
%nonassoc LISTSTART


