table:
    table_head table_body {
            show_rule("table: table_head table_body");
            $$ = str_format("%s%s", $1, $2);
        }
    | table_body {
            show_rule("table: table_body");
            $$ = $1;
        }
    ;

