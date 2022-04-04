inline_text_item:
    LESSTHAN {
            show_rule("inline_text_item: LESSTHAN");
            $$ = $1;
        }           
    | LARGERTHAN {
            show_rule("inline_text_item: LARGERTHAN");
            $$ = $1;
        }           
    | TRIPLEBACKTICK {
            show_rule("inline_text_item: TRIPLEBACKTICK");
            $$ = $1;
        }           
    | VERTICAL {
            show_rule("inline_text_item: VERTICAL");
            $$ = $1;
        }           
    | PLUS {
            show_rule("inline_text_item: PLUS");
            $$ = $1;
        }           
    | MINUS {
            show_rule("inline_text_item: MINUS");
            $$ = $1;
        }           
    | DIGIT  {
            show_rule("inline_text_item: DIGIT");
            $$ = $1;
        }           
    | DOT  {
            show_rule("inline_text_item: DOT");
            $$ = $1;
        }           
    | SPACE {
            show_rule("inline_text_item: SPACE");
            $$ = $1;
        }           
    | RIGHTSQUARE {
            show_rule("inline_text_item: RIGHTSQUARE");
            $$ = $1;
        }           
    | LEFTBRACKET {
            show_rule("inline_text_item: LEFTBRACKET");
            $$ = $1;
        }           
    | RIGHTBRACKET {
            show_rule("inline_text_item: RIGHTBRACKET");
            $$ = $1;
        }           
    | UNDERSCORE {
            show_rule("inline_text_item: UNDERSCORE");
            $$ = $1;
        }           
    | DOUBLEUNDERSCORE {
            show_rule("inline_text_item: DOUBLEUNDERSCORE");
            $$ = $1;
        }           
    | LEFTPARENTHESIS {
            show_rule("inline_text_item: LEFTPARENTHESIS");
            $$ = $1;
        }           
    | RIGHTPARENTHESIS {
            show_rule("inline_text_item: RIGHTPARENTHESIS");
            $$ = $1;
        }           
    | TEXT {
            show_rule("inline_text_item: TEXT");
            $$ = $1;
        }           
    ;          


