table_separator_cell:
    table_separator_item VERTICAL {
            show_rule("table_separator_cell: table_separator_item VERTICAL");
            $$ = str_format("<td>%s</td>", $1);
        }
    ;

