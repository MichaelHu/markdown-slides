lf_q_indents2_codeblock: 
    lf_q_indents2 code_text LINEBREAK {
            show_rule("lf_q_indents2_codeblock: lf_q_indents2 code_text LINEBREAK");
            $$ = str_format("%s%s%s", str_trim_left_n_lf_indents(str_replace_left($1, "> ", ""), 2), $2, $3);
        }
    | lf_q_indents2_codeblock lf_q_indents2 code_text LINEBREAK {
            show_rule("lf_q_indents2_codeblock: lf_q_indents2_codeblock lf_q_indents2 code_text LINEBREAK");
            $$ = str_format("%s%s%s%s", $1, str_trim_left_n_lf_indents(str_replace_left($2, "> ", ""), 2), $3, $4);
        }
    ;

lf_q_indents3_codeblock: 
    lf_q_indents3 code_text LINEBREAK {
            show_rule("lf_q_indents3_codeblock: lf_q_indents3 code_text LINEBREAK");
            $$ = str_format("%s%s%s", str_trim_left_n_lf_indents(str_replace_left($1, "> ", ""), 3), $2, $3);
        }
    | lf_q_indents3_codeblock lf_q_indents3 code_text LINEBREAK {
            show_rule("lf_q_indents3_codeblock: lf_q_indents3_codeblock lf_q_indents3 code_text LINEBREAK");
            $$ = str_format("%s%s%s%s", $1, str_trim_left_n_lf_indents(str_replace_left($2, "> ", ""), 3), $3, $4);
        }
    ;

