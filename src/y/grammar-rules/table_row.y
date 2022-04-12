table_row:
    LF_VERTICAL table_cells LINEBREAK {
            show_rule("table_row: LF_VERTICAL table_cells LINEBREAK");
            $$ = str_format("<tr>%s</tr>", $2);
    }
    ;
