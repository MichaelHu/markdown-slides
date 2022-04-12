table_separator_cells:
    table_separator_cell {
            show_rule("table_separator_cells: table_separator_cell");
            $$ = str_format("%s", $1);
        }
    | table_separator_cells table_separator_cell {
            show_rule("table_separator_cells: table_separator_cells table_separator_cell");
            $$ = str_format("%s%s", $1, $2);
        }
    ;


