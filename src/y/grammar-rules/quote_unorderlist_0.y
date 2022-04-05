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
            $$ = str_format("%s%s</li>", str_replace_right($1, "</li>", ""), $3);
        }
    | quote_unorderlist_0 lf_q_indents2_codeblock {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 lf_q_indents2_codeblock");
            $$ = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right($1,"</li>", ""), $2);
        }
    | quote_unorderlist_0 quote_unorderlist_1 {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 quote_unorderlist_1");
            $$ = str_format("%s<ul>%s</ul></li>", str_replace_right($1,"</li>", ""), $2);
        }
    ;

