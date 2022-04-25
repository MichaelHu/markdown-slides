uri_text_item:
    TEXT {
            show_rule("uri_text_item: TEXT");
            $$ = html_escape( $1 );
        }           
    ;          


