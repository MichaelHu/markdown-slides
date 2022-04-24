quote_table_head:
    quote_table_row quote_table_head_separator {
            show_rule("quote_table_head: quote_table_row quote_table_head_separator");
            $$ = str_format("<thead>%s</thead>", $1);
        }
    ;


