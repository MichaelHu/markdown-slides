table_head:
    table_row table_head_separator {
            show_rule("table_head: table_row table_head_separator");
            $$ = str_format("<thead>%s</thead>", $1);
        }
    ;


