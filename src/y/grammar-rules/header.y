header:
    LF_H inline_elements LINEBREAK {              
            show_rule("header: LF_H inline_elements LINEBREAK");
            $$ = str_format("<h%d>%s</h%d>%s", strlen($1), $2, strlen($1), $3);
        }   
    ;


