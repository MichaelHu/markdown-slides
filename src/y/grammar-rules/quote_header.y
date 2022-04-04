quote_header: 
    LF_Q_H inline_elements LINEBREAK {
            show_rule("quote_header: LF_Q_H inline_elements LINEBREAK");
            $$ = str_format("<h%d>%s</h%d>%s", strlen(str_replace_left($1, "> ", "")), $2, strlen(str_replace_left($1, "> ", "")), $3);
        }
    ;


