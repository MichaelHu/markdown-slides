table_head:
    LF_VERTICAL table_row LINEBREAK table_head_separator {
            show_rule("table_head: LF_VERTICAL table_row LINEBREAK table_head_separator");
            $$ = $2;
        }
    ;


