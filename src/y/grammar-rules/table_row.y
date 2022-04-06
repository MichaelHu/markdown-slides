table_row:
    line VERTICAL {
            show_rule("table_row: line VERTICAL");
            $$ = str_format("<td>%s</td>", $1);
        }
    | table_row line VERTICAL {
            show_rule("table_row: table_row line VERTICAL");
            $$ = str_format("%s<td>%s</td>", $1, $2);
        }
    ;

