inline_text_item:
    uri_text_item {
            show_rule("inline_text_item: uri_text_item");
            $$ = $1;
        }           
    | ESCAPEDCHAR {
            show_rule("inline_text_item: ESCAPEDCHAR");
            $$ = $1;
        }           
    | SPACE {
            show_rule("inline_text_item: SPACE");
            $$ = $1;
        }           
    ;          


