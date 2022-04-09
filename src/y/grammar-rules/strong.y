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
    | DOUBLEUNDERSCORE inline_text DOUBLEUNDERSCORE {
            show_rule("strong: DOUBLEUNDERSCORE inline_text DOUBLEUNDERSCORE");
            $$ = str_format("<strong>%s</strong>", $2);
        }
    | DOUBLEUNDERSCORE inline_text error {
            show_rule("strong: DOUBLEUNDERSCORE inline_text error");
        }
    | DOUBLEUNDERSCORE error {
            show_rule("strong: DOUBLEUNDERSCORE error");
        }
    ;


