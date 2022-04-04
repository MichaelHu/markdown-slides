blocks:
    blocks block {
            show_rule("blocks: blocks block");
            $$ = str_concat($1, $2);
        }
    | /* NULL */{
            show_rule("blocks: NULL");
            $$ = "";
        }
    ;



