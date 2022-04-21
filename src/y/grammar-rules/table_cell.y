table_cell:
    inline_elements VERTICAL {
            show_rule("table_cell: inline_elements VERTICAL");
            $$ = str_format("<td>%s</td>", $1);
        }
    ;

