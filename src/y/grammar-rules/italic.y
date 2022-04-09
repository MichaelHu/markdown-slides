italic: 
    ASTERISK inline_text ASTERISK {
            show_rule("italic: ASTERISK inline_text ASTERISK");
            $$ = str_format("<i>%s</i>", $2);
        }
    | ASTERISK inline_text error {
            show_rule("italic: ASTERISK inline_text error");
        }
    | ASTERISK error {
            show_rule("italic: ASTERISK error");
        }
    | UNDERSCORE inline_text UNDERSCORE {
            show_rule("italic: UNDERSCORE inline_text UNDERSCORE");
            $$ = str_format("<i>%s</i>", $2);
        }
    | UNDERSCORE inline_text error {
            show_rule("italic: UNDERSCORE inline_text error");
        }
    | UNDERSCORE error {
            show_rule("italic: UNDERSCORE error");
        }
    ;


