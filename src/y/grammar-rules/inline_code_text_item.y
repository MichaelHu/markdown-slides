inline_code_text_item:
    inline_text_item {
            show_rule("inline_code_text_item: inline_text_item");
            $$ = $1;
        }
    | ASTERISK {
            show_rule("inline_code_text_item: ASTERISK");
            $$ = $1;
        }
    | DOUBLEASTERISK {
            show_rule("inline_code_text_item: DOUBLEASTERISK");
            $$ = $1;
        }
    | DOUBLETILDE {
            show_rule("inline_code_text_item: DOUBLETILDE");
            $$ = $1;
        }
    | EXCLAMATION {
            show_rule("inline_text_item: EXCLAMATION");
            $$ = $1;
        }           
    | LEFTSQUARE {
            show_rule("inline_text_item: LEFTSQUARE");
            $$ = $1;
        }           
    | VERTICAL {
            show_rule("inline_code_text_item: VERTICAL");
            $$ = $1;
        }           
    ;


