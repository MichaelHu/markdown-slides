table:
    table_head table_head_separator table_body {
            show_rule("table: table_head table_head_separator table_body");
            $$ = str_format("%s%s", $1, $3);
        }
    | table_body {
            show_rule("table: table_body");
            $$ = $1;
        }
    ;

