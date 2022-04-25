raw_text:
    raw_text raw_text_item {
            show_rule("raw_text: raw_text raw_text_item");
            $$ = str_concat($1, $2);
        }
    | raw_text_item {
            show_rule("raw_text: raw_text_item");
            $$ = $1;
        }
    ;


