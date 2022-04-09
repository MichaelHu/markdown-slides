image: 
    EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text RIGHTBRACKET {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text RIGHTBRACKET");
            $$ = str_format("<img src=\"%s\" alt=\"%s\" title=\"%s\">", $4, $2, "");
        }
    | EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text SPACE uri_text RIGHTBRACKET {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text SPACE uri_text RIGHTBRACKET");
            $$ = str_format("<img src=\"%s\" alt=\"%s\" title=\"%s\">", $4, $2, $6);
        }
    | EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text error {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text error");
        }
    | EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET error {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET error");
        }
    | EXCLAMATION_LEFTSQUARE inline_text error {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text error");
        }
    | EXCLAMATION_LEFTSQUARE error {
            show_rule("image: EXCLAMATION_LEFTSQUARE error");
        }
    ;


