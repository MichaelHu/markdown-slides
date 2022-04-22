unorderlist_1: 
    LF_INDENT_UL line {
            show_rule("unorderlist_1: LF_INDENT_UL line");
            tag_info = markdown_get_tag_info($2);
            $$ = str_format("<li%s%s>%s</li>", is_orderlist_tag($1)?" isol":"", tag_info->attr, tag_info->content);
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
            $$ = str_format("%s<%s>%s</%s></li>", str_replace_right($1,"</li>", ""), is_orderlist($2)?"ol":"ul", $2, is_orderlist($2)?"ol":"ul");
        }
    ;


