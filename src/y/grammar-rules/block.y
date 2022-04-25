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
    | SCRIPTSTART raw_text SCRIPTEND {
            show_rule("block: SCRIPTSTART raw_text SCRIPTEND");
            $$ = str_format("%s%s%s", $1, $2, $3);
        }
    | STYLESTART raw_text STYLEEND {
            show_rule("block: STYLESTART raw_text STYLEEND");
            $$ = str_format("%s%s%s", $1, $2, $3);
        }
    | SVGSTART raw_text SVGEND {
            show_rule("block: SVGSTART raw_text SVGEND");
            $$ = str_format("%s%s%s", $1, $2, $3);
        }
    | unorderlist_0 {
            show_rule("block: unorderlist_0");
            $$ = str_format("<%s>%s</%s>", is_orderlist($1)?"ol":"ul", $1, is_orderlist($1)?"ol":"ul");
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

