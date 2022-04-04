inline_code_text:
    inline_code_text inline_code_text_item {
            show_rule("inline_code_text: inline_code_text inline_code_text_item");
            $$ = str_concat($1, $2);
        }
    | inline_code_text_item {
            show_rule("inline_code_text: inline_code_text_item");
            $$ = $1;
        }
    ;


