inline_code_text_item:
    inline_text_item {
            show_rule("inline_code_text_item: inline_text_item");
            $$ = $1;
        }
    | TRIPLEASTERISK {
            show_rule("inline_code_text_item: TRIPLEASTERISK");
            $$ = $1;
        }           
    | TRIPLEUNDERSCORE {
            show_rule("inline_code_text_item: TRIPLEUNDERSCORE");
            $$ = $1;
        }           
    | DOUBLEASTERISK {
            show_rule("inline_code_text_item: DOUBLEASTERISK");
            $$ = $1;
        }           
    | DOUBLEUNDERSCORE {
            show_rule("inline_code_text_item: DOUBLEUNDERSCORE");
            $$ = $1;
        }           
    | ASTERISK {
            show_rule("inline_code_text_item: ASTERISK");
            $$ = $1;
        }
    | UNDERSCORE {
            show_rule("inline_code_text_item: UNDERSCORE");
            $$ = $1;
        }           
    | DOUBLETILDE {
            show_rule("inline_code_text_item: DOUBLETILDE");
            $$ = $1;
        }
    | EXCLAMATION_LEFTSQUARE {
            show_rule("inline_code_text_item: EXCLAMATION_LEFTSQUARE");
            $$ = $1;
        }           
    | LEFTSQUARE {
            show_rule("inline_code_text_item: LEFTSQUARE");
            $$ = $1;
        }           
    | RIGHTSQUARE_LEFTBRACKET {
            show_rule("inline_code_text_item: RIGHTSQUARE_LEFTBRACKET");
            $$ = $1;
        }           
    | RIGHTBRACKET {
            show_rule("inline_code_text_item: RIGHTBRACKET");
            $$ = $1;
        }           
    | VERTICAL {
            show_rule("inline_code_text_item: VERTICAL");
            $$ = $1;
        }           
    | TRIPLEBACKTICK {
            show_rule("inline_code_text_item: TRIPLEBACKTICK");
            $$ = $1;
        }           
    ;


