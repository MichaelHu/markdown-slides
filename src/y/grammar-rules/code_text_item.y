code_text_item:
    inline_code_text_item {
            show_rule("code_text_item: inline_code_text_item");
            $$ = $1;
        }
    | BACKTICK {
            show_rule("code_text_item: BACKTICK");
            $$ = $1;
        }


