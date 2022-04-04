inlinecode:
    BACKTICK inline_code_text BACKTICK {
            show_rule("inlinecode: BACKTICK inline_code_text BACKTICK");
            $$ = str_format("<code>%s</code>", $2);
        }
    | BACKTICK inline_code_text error {
            show_rule("inlinecode: BACKTICK inline_code_text error");
        }
    | BACKTICK error {
            show_rule("inlinecode: BACKTICK error");
        }
    ;



