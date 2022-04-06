table:
    table_header table_rows {
            show_rule("table: table_header table_rows");
            $$ = str_concat($1, $2);
        }
    | table_rows {
            show_rule("table: table_rows");
            $$ = $1;
        }
    ;

