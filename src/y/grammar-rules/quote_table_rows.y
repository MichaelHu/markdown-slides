quote_table_rows:
    quote_table_row {
            show_rule("quote_table_rows: quote_table_row");
            $$ = str_format("%s", $1);
    }
    | quote_table_rows quote_table_row {
            show_rule("quote_table_rows: quote_table_rows quote_table_row");
            $$ = str_format("%s%s", $1, $2);
    }
    ;
