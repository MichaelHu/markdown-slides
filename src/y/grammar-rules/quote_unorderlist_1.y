quote_unorderlist_1: 
    LF_Q_INDENT_UL line {
            show_rule("quote_unorderlist_1: LF_Q_INDENT_UL line");
            $$ = str_format("<li>%s</li>", $2);
        }
    | quote_unorderlist_1 LF_Q_INDENT_UL line {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT_UL line");
            $$ = str_format("%s<li>%s</li>", $1, $3);
        }
    | quote_unorderlist_1 LF_Q_INDENT2 line {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT2 line");
            $$ = str_format("%s%s</li>", str_replace_right($1, "</li>", ""), $3);
        }
    | quote_unorderlist_1 lf_q_indents3_codeblock{
            show_rule("quote_unorderlist_1: quote_unorderlist_1 lf_q_indents3_codeblock");
            $$ = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right($1,"</li>", ""), $2);
        }
    ;

