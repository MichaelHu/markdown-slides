link: 
    LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text RIGHTBRACKET {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text RIGHTBRACKET");
            $$ = str_format("<a href=\"%s\">%s</a>", $4, $2);
        }
    | LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text SPACE uri_text RIGHTBRACKET {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text SPACE uri_text RIGHTBRACKET");
            $$ = str_format("<a href=\"%s\" title=\"%s\">%s</a>", $4, $6, $2);
        }
    | LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text error {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text error");
        }
    | LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET error {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET error");
        }
    | LEFTSQUARE inline_text error {
            show_rule("link: LEFTSQUARE inline_text error");
        }
    | LEFTSQUARE error {
            show_rule("link: LEFTSQUARE error");
        }
    ;


