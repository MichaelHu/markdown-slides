table_separator_row:
    LF_VERTICAL table_separator_cell {
            show_rule("table_separator_row: LF_VERTICAL table_separator_cell");
            $$ = $2;
        }
    | table_separator_row table_separator_cell {
            show_rule("table_separator_row: table_separator_row table_separator_cell");
            $$ = str_format("%s%s", $1, $2);
        }
    ;

