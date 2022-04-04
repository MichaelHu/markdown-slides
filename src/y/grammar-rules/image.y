image: 
    EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
            $$ = str_format("<img src=\"%s\" alt=\"%s\" title=\"%s\">", $6, $3, "");
        }
    | EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET");
            $$ = str_format("<img src=\"%s\" alt=\"%s\" title=\"%s\">", $6, $3, $8);
        }
    | EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error");
        }
    | EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET error {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET");
        }
    | EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE error {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE error");
        }
    | EXCLAMATION LEFTSQUARE inline_text error {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text error");
        }
    | EXCLAMATION LEFTSQUARE error {
            show_rule("image: EXCLAMATION LEFTSQUARE error");
        }
    | EXCLAMATION error {
            show_rule("image: EXCLAMATION error");
        }
    ;


