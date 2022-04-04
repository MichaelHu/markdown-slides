lf_indents4_codeblock: 
    lf_indents4 code_text LINEBREAK {
            show_rule("lf_indents4_codeblock: lf_indents4 code_text LINEBREAK");
            $$ = str_format("%s%s%s", str_trim_left_n_lf_indents($1, 4), $2, $3);
        }
    | lf_indents4_codeblock lf_indents4 code_text LINEBREAK {
            show_rule("lf_indents4_codeblock: lf_indents4_codeblock lf_indents4 code_text LINEBREAK");
            $$ = str_format("%s%s%s%s", $1, str_trim_left_n_lf_indents($2, 4), $3, $4);
        }
    ;


