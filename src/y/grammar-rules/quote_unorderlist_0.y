quote_unorderlist_0: 
    LF_Q_UL line {
            show_rule("quote_unorderlist_0: LF_Q_UL line");
            $$ = str_format("<li>%s</li>", $2);
        }
    | quote_unorderlist_0 LF_Q_UL line {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_UL line");
            $$ = str_format("%s<li>%s</li>", $1, $3);
        }
    | quote_unorderlist_0 LF_Q_INDENT line {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT line");
        }
    | quote_unorderlist_0 LF_Q_INDENT2 code_text LINEBREAK {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT2 code_text LINEBREAK");
        }
    | quote_unorderlist_0 LF_Q_INDENT3 code_text LINEBREAK {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT3 code_text LINEBREAK");
        }
    | quote_unorderlist_0 quote_unorderlist_1 {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 quote_unorderlist_1");
        }
    ;


