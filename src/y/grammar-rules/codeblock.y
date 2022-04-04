codeblock: 
    lf_indents code_text LINEBREAK {
            show_rule("codeblock: lf_indents code_text LINEBREAK");
            $$ = str_format("%s%s%s", str_trim_left_n_lf_indents($1, 1), $2, $3);
        }
    | codeblock lf_indents code_text LINEBREAK {
            show_rule("codeblock: codeblock lf_indents code_text LINEBREAK");
            $$ = str_format("%s%s%s%s", $1, str_trim_left_n_lf_indents($2, 1), $3, $4);
        }
    ;


