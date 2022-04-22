unorderlist_0: 
    LF_UL line {
            show_rule("unorderlist_0: LF_UL line");
            tag_info = markdown_get_tag_info($2);
            $$ = str_format("<li%s%s>%s</li>", is_orderlist_tag($1)?" isol":"", tag_info->attr, tag_info->content);
        }
    | unorderlist_0 LF_UL line {
            show_rule("unorderlist_0: unorderlist_0 LF_UL line");
            tag_info = markdown_get_tag_info($3);
            $$ = str_format("%s<li%s>%s</li>", $1, tag_info->attr, tag_info->content);
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
            $$ = str_format("%s<%s>%s</%s></li>", str_replace_right($1,"</li>", ""), is_orderlist($2)?"ol":"ul", $2, is_orderlist($2)?"ol":"ul");
        }
    ;


