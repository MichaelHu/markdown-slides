table_rows:
    table_row {
            show_rule("table_rows: table_row");
            $$ = str_format("%s", $1);
    }
    | table_rows table_row {
            show_rule("table_rows: table_rows table_row");
            $$ = str_format("%s%s", $1, $2);
    }
    ;
