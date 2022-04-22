unorderlist_2: 
    LF_INDENT2_UL line {
            show_rule("unorderlist_2: LF_INDENT2_UL line");
            tag_info = markdown_get_tag_info($2);
            $$ = str_format("<li%s%s>%s</li>", is_orderlist_tag($1)?" isol":"", tag_info->attr, tag_info->content);
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


