code_text:
    code_text code_text_item {
            show_rule("code_text: code_text code_text_item");
            $$ = str_concat($1, $2);
        }
    | code_text_item {
            show_rule("code_text: code_text_item");
            $$ = $1;
        }
    ;


