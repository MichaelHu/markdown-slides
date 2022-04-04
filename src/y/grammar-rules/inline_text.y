inline_text:
    inline_text inline_text_item {
            show_rule("inline_text: inline_text inline_text_item");
            $$ = str_concat($1, $2);
        }
    | inline_text_item {
            show_rule("inline_text: inline_text_item");
            $$ = $1;
        }
    ;


