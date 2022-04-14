block:
    header {
            show_rule("block: header");
            $$ = $1;
        }
    | paragraph {
            show_rule("block: paragraph");
            tag_info = markdown_get_tag_info($1);
            $$ = str_format("<p%s>%s</p>", tag_info->attr, tag_info->content);
        }
    | BLANKLINE {
            show_rule("block: BLANKLINE");
            $$ = $1;
        }
    | HTMLTAG {
            show_rule("block: HTMLTAG");
            $$ = $1;
        }
    | unorderlist_0 {
            show_rule("block: unorderlist_0");
            $$ = str_format("<ul>%s</ul>", $1);
        }
    | codeblock {
            show_rule("block: codeblock");
            tag_info = markdown_get_tag_info($1);
            $$ = str_format("<pre%s><code>%s</code></pre>", tag_info->attr, tag_info->content);
        }
    | table {
            show_rule("block: table");
            $$ = str_format("<table>%s</table>", $1);
        }
    | quote_block {
            show_rule("block: quote_block");
            $$ = str_format("<blockquote>%s</blockquote>", $1);
        }
    /* error recovery */
    | error {
            show_rule("block: error");
        }
    ;

