table_body:
    table_rows {
            show_rule("table_body: table_rows");
            $$ = str_format("<tbody>%s</tbody>", $1);
        }
    ;


