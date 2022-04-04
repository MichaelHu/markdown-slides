inline_element:
    inline_text {
            show_rule("inline_element: inline_text");
            $$ = $1;
        }
    | link {
            show_rule("inline_element: link");
            $$ = $1;
        }
    | image {
            show_rule("inline_element: image");
        }
    | italic {
            show_rule("inline_element: italic");
            $$ = $1;
        }
    | strong {
            show_rule("inline_element: strong");
            $$ = $1;
        }
    | linethrough {
            show_rule("inline_element: linethrough");
            $$ = $1;
        }
    | inlinecode {
            show_rule("inline_element: inlinecode");
            $$ = $1;
        }
    ;


