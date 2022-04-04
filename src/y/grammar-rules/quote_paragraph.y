quote_paragraph: 
    LF_Q line {
            show_rule("quote_paragraph: LF_Q line");
        }
    | quote_paragraph LF_Q line {
            show_rule("quote_paragraph: quote_paragraph LF_Q line");
        }
    ;


