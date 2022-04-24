quote_table_separator_row:
    LF_Q_VERTICAL_HEAD_SEP table_separator_cells LINEBREAK {
            show_rule("quote_table_separator_row: LF_Q_VERTICAL_HEAD_SEP table_separator_cells LINEBREAK");
            $$ = str_format("<tr>%s</tr>", $2);
        }
    ;

