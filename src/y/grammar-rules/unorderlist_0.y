unorderlist_0: 
    LF_UL line {
            show_rule("unorderlist_0: LF_UL line");
            $$ = str_format("<li>%s</li>", $2);
        }
    | unorderlist_0 LF_UL line {
            show_rule("unorderlist_0: unorderlist_0 LF_UL line");
            $$ = str_format("%s<li>%s</li>", $1, $3);
        }
    | unorderlist_0 LF_INDENT line {
            show_rule("unorderlist_0: unorderlist_0 LF_INDENT line");
            $$ = str_format("%s%s</li>", str_replace_right($1,"</li>", ""), $3);
        }
    | unorderlist_0 lf_indents2_codeblock {
            show_rule("unorderlist_0: unorderlist_0 lf_indents2_codeblock");
            $$ = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right($1,"</li>", ""), $2);
        }
    | unorderlist_0 unorderlist_1 {
            show_rule("unorderlist_0: unorderlist_0 unorderlist_1");
        }
    ;


