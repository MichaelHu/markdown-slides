quote_table_body:
    quote_table_rows {
            show_rule("quote_table_body: quote_table_rows");
            $$ = str_format("<tbody>%s</tbody>", $1);
        }
    ;


