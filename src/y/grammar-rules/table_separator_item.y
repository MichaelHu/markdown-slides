table_separator_item:
    MINUSSERIES_LEFT {
            show_rule("table_separator_item: MINUSSERIES_LEFT");
            $$ = $1;
        }
    | MINUSSERIES_RIGHT {
            show_rule("table_separator_item: MINUSSERIES_RIGHT");
            $$ = $1;
        }
    | MINUSSERIES_CENTER {
            show_rule("table_separator_item: MINUSSERIES_CENTER");
            $$ = $1;
        }
    ;

