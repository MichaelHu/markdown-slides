table_row:
    LF_VERTICAL table_cell {
            show_rule("table_row: LF_VERTICAL table_cell");
            $$ = $2;
        }
    | table_row table_cell {
            show_rule("table_row: table_row table_cell");
            $$ = str_format("%s%s", $1, $2);
        }
    ;

