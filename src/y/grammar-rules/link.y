link: 
    LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
            $$ = str_format("<a href=\"%s\">%s</a>", $5, $2);
        }
    | LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
            $$ = str_format("<a href=\"%s\" title=\"%s\">%s</a>", $5, $7, $2);
        }
    | LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error");
        }
    | LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET error {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET");
        }
    | LEFTSQUARE inline_text RIGHTSQUARE error {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE error");
        }
    | LEFTSQUARE inline_text error {
            show_rule("link: LEFTSQUARE inline_text error");
        }
    | LEFTSQUARE error {
            show_rule("link: LEFTSQUARE error");
        }
    ;


