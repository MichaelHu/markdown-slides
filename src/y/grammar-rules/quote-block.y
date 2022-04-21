quote_block:
    quote_block quote_header {
            show_rule("quote_block: quote_block quote_header");
            $$ = str_concat($1, $2);
        }
    | quote_block quote_unorderlist_0 {
            show_rule("quote_block: quote_block quote_unorderlist_0");
            $$ = str_format("%s<ul>%s</ul>", $1, $2);
        }
    | quote_block quote_paragraph {
            show_rule("quote_block: quote_block quote_paragraph");
            $$ = str_format("%s<p>%s</p>", $1, $2);
        }
    | quote_block quote_codeblock {
            show_rule("quote_block: quote_block quote_codeblock");
            $$ = str_format("%s<pre><code>%s</code></pre>", $1, $2);
        }
    | quote_block QUOTEBLANKLINE {
            show_rule("quote_block: quote_block QUOTEBLANKLINE");
            $$ = str_format("%s%s", $1, str_replace_left($2, ">", ""));
        }
    | /* NULL */ {
            show_rule("quote_block: NULL");
            $$ = "";
        }
    ;


