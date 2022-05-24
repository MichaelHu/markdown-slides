strong_italic:
    TRIPLEUNDERSCORE inline_text TRIPLEUNDERSCORE {
            show_rule("strong_italic: TRIPLEUNDERSCORE inline_text TRIPLEUNDERSCORE");
            $$ = str_format("<strong><i>%s</i></strong>", $2);
        }
    | TRIPLEUNDERSCORE inline_text error {
            show_rule("strong_italic: TRIPLEUNDERSCORE inline_text error");
        }
    | TRIPLEUNDERSCORE error {
            show_rule("strong_italic: TRIPLEUNDERSCORE error");
        }
    ;


