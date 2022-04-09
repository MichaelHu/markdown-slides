uri_text:
    uri_text uri_text_item {
            show_rule("uri_text: uri_text uri_text_item");
            $$ = str_concat($1, $2);
        }
    | uri_text_item {
            show_rule("uri_text: uri_text_item");
            $$ = $1;
        }
    ;


