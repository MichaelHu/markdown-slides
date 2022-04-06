table_rows:
    LF_VERTICAL table_row LINEBREAK {
            show_rule("table_rows: LF_VERTICAL table_row LINEBREAK");
            $$ = str_format("<tr>%s</tr>", $2);
        }
    | table_rows LF_VERTICAL table_row LINEBREAK {
            show_rule("table_rows: table_rows LF_VERTICAL table_row LINEBREAK");
            $$ = str_format("%s<tr>%s</tr>", $1, $3);
    }
    ;
