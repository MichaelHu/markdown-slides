linethrough:
    DOUBLETILDE inline_text DOUBLETILDE {
            show_rule("linethrough: DOUBLETILDE inline_text DOUBLETILDE");
            $$ = str_format("<del>%s</del>", $2);
        }
    | DOUBLETILDE inline_text error {
            show_rule("linethrough: DOUBLETILDE inline_text error");
        }
    | DOUBLETILDE error {
            show_rule("linethrough: DOUBLETILDE error");
        }
    ;


