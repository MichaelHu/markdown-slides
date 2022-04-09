%union{
    char *text;
    /* t_node *node; */
};

    /* bind union part with terminal symbol */

%token <text> BLANKLINE
%token <text> LINEBREAK           

%token <text> LF_H                

%token <text> LF_UL                
%token <text> UL                

%token <text> LF_VERTICAL                

%token <text> LF_INDENT_UL                
%token <text> LF_INDENT2_UL                
%token <text> LF_INDENT3_UL                
%token <text> LF_INDENT4_UL                

%token <text> LF_INDENT_VERTICAL                

%token <text> LF_INDENT              
%token <text> LF_INDENT2
%token <text> LF_INDENT3
%token <text> LF_INDENT4
%token <text> LF_INDENT5

%token <text> LF_Q_H
%token <text> LF_Q_UL
%token <text> LF_Q_VERTICAL

%token <text> LF_Q_INDENT_UL                
%token <text> LF_Q_INDENT2_UL                

%token <text> LF_Q_INDENT_VERTICAL

%token <text> LF_Q_INDENT              
%token <text> LF_Q_INDENT2
%token <text> LF_Q_INDENT3

%token <text> LF_Q

%token <text> ESCAPEDCHAR         
%token <text> LESSTHAN            
%token <text> LARGERTHAN          
%token <text> TRIPLEBACKTICK      
%token <text> BACKTICK            
%token <text> VERTICAL            
%token <text> TRIPLEASTERISK      
%token <text> DOUBLEASTERISK      
%token <text> ASTERISK            
%token <text> TRIPLEUNDERSCORE    
%token <text> DOUBLEUNDERSCORE    
%token <text> UNDERSCORE          

%token <text> EXCLAMATION_LEFTSQUARE 
%token <text> LEFTSQUARE          
%token <text> RIGHTSQUARE_LEFTBRACKET 
%token <text> RIGHTBRACKET        
%token <text> DOUBLETILDE      
%token <text> RIGHTSQUARE         
%token <text> SPACE
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
%type <text> uri_text
%type <text> uri_text_item
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

%type <text> table
%type <text> table_header
%type <text> table_header_separator
%type <text> table_rows
%type <text> table_row

%nonassoc ITALICSTART
%nonassoc LISTSTART


