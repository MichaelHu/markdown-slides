table_separator_cell:
    table_separator_item {
            show_rule("table_separator_cell: table_separator_item");
            $$ = str_format("<td>%s</td>", $1);
        }
    ;

