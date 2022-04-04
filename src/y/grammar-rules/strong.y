strong:
    DOUBLEASTERISK inline_text DOUBLEASTERISK {
            show_rule("strong: DOUBLEASTERISK inline_text DOUBLEASTERISK");
            $$ = str_format("<strong>%s</strong>", $2);
        }
    | DOUBLEASTERISK inline_text error {
            show_rule("strong: DOUBLEASTERISK inline_text error");
        }
    | DOUBLEASTERISK error {
            show_rule("strong: DOUBLEASTERISK error");
        }
    ;


