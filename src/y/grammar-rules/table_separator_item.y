table_separator_item:
    MINUSSERIES_SEMI_VERTICAL {
            show_rule("table_separator_item: MINUSSERIES_SEMI_VERTICAL");
            $$ = $1;
        }
    | SEMI_MINUSSERIES_VERTICAL {
            show_rule("table_separator_item: SEMI_MINUSSERIES_VERTICAL");
            $$ = $1;
        }
    | SEMI_MINUSSERIES_SEMI_VERTICAL {
            show_rule("table_separator_item: SEMI_MINUSSERIES_SEMI_VERTICAL");
            $$ = $1;
        }
    | MINUSSERIES_VERTICAL {
            show_rule("table_separator_item: MINUSSERIES_VERTICAL");
            $$ = $1;
        }
    ;

