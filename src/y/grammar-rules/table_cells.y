table_cells:
    table_cell {
            show_rule("table_cells: table_cell");
            $$ = str_format("%s", $1);
        }
    | table_cells table_cell {
            show_rule("table_cells: table_cells table_cell");
            $$ = str_format("%s%s", $1, $2);
        }
    ;

