table_cell:
    line VERTICAL {
            show_rule("table_cell: line VERTICAL");
            $$ = str_format("<td>%s</td>", $1);
        }
    ;

