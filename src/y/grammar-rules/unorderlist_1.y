unorderlist_1: 
    LF_INDENT_UL line {
            show_rule("unorderlist_1: LF_INDENT_UL line");
            $$ = str_format("<li>%s</li>", $2);
        }
    | unorderlist_1 LF_INDENT_UL line {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT_UL line");
            $$ = str_format("%s<li>%s</li>", $1, $3);
        }
    | unorderlist_1 LF_INDENT2 line {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT2 line");
            $$ = str_format("%s%s</li>", str_replace_right($1,"</li>", ""), $3);
        }
    | unorderlist_1 lf_indents3_codeblock {
            show_rule("unorderlist_1: unorderlist_1 lf_indents3_codeblock");
            $$ = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right($1, "</li>", ""), $2);
        }
    | unorderlist_1 unorderlist_2 {
            show_rule("unorderlist_1: unorderlist_1 unorderlist_2");
            $$ = str_format("%s<ul>%s</ul></li>", str_replace_right($1,"</li>", ""), $2);
        }
    ;


