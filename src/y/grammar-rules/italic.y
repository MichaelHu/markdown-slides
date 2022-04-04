italic: 
    ASTERISK inline_text ASTERISK %prec ITALICSTART {
            show_rule("italic: ASTERISK inline_text ASTERISK %prec ITALICSTART");
            $$ = str_format("<i>%s</i>", $2);
        }
    | ASTERISK inline_text error %prec ITALICSTART {
            show_rule("italic: ASTERISK inline_text error %prec ITALICSTART");
        }
    | ASTERISK error %prec ITALICSTART {
            show_rule("italic: ASTERISK error %prec ITALICSTART");
        }
    ;


