quote_paragraph: 
    LF_Q line {
            show_rule("quote_paragraph: LF_Q line");
            $$ = $2;
        }
    | quote_paragraph LF_Q line {
            show_rule("quote_paragraph: quote_paragraph LF_Q line");
            $$ = str_concat($1, $3);
        }
    ;


