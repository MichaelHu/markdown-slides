unorderlist_2: 
    LF_INDENT2_UL line {
            show_rule("unorderlist_2: LF_INDENT2_UL line");
            $$ = str_format("<li>%s</li>", $2);
        }
    | unorderlist_2 LF_INDENT2_UL line {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT2_UL line");
            $$ = str_format("%s<li>%s</li>", $1, $3);
        }
    | unorderlist_2 LF_INDENT3 line {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT3 line");
            $$ = str_format("%s%s</li>", str_replace_right($1,"</li>", ""), $3);
        }
    | unorderlist_2 lf_indents4_codeblock {
            show_rule("unorderlist_2: unorderlist_2 lf_indents4_codeblock");
            $$ = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right($1, "</li>", ""), $2);
        }
    ;


