table_header:
    LF_VERTICAL table_row LINEBREAK table_header_separator {
            show_rule("table_header: LF_VERTICAL table_row LINEBREAK table_header_separator");
            $$ = $2;
        }
    ;


