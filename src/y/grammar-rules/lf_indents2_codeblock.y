lf_indents2_codeblock: 
    lf_indents2 code_text LINEBREAK {
            show_rule("lf_indents2_codeblock: lf_indents2 code_text LINEBREAK");
            $$ = str_format("%s%s%s", str_trim_left_n_lf_indents($1, 2), $2, $3);
        }
    | lf_indents2_codeblock lf_indents2 code_text LINEBREAK {
            show_rule("lf_indents2_codeblock: lf_indents2_codeblock lf_indents2 code_text LINEBREAK");
            $$ = str_format("%s%s%s%s", $1, str_trim_left_n_lf_indents($2, 2), $3, $4);
        }
    ;


