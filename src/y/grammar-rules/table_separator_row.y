table_separator_row:
    LF_VERTICAL_HEAD_SEP table_separator_cells LINEBREAK {
            show_rule("table_separator_row: LF_VERTICAL_HEAD_SEP table_separator_cells LINEBREAK");
            $$ = str_format("<tr>%s</tr>", $2);
        }
    ;

