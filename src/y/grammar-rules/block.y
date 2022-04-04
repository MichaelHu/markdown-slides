block:
    header {
            show_rule("block: header");
            $$ = $1;
        }
    | paragraph {
            show_rule("block: paragraph");
            $$ = $1;
        }
    | unorderlist_0 {
            show_rule("block: unorderlist_0");
            $$ = str_format("<ul>%s</ul>", $1);
        }
    | codeblock {
            show_rule("block: codeblock");
            $$ = str_format("<pre><code>%s</code></pre>", $1);
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

