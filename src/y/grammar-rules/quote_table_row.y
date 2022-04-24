quote_table_row:
    LF_Q_VERTICAL table_cells LINEBREAK {
            show_rule("quote_table_row: LF_Q_VERTICAL table_cells LINEBREAK");
            $$ = str_format("<tr>%s</tr>", $2);
    }
    ;
