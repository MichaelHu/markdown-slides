quote_table:
    quote_table_head quote_table_body {
            show_rule("quote_table: quote_table_head quote_table_body");
            $$ = str_format("%s%s", $1, $2);
        }
    | quote_table_body {
            show_rule("quote_table: quote_table_body");
            $$ = $1;
        }
    ;

