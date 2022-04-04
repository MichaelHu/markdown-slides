lines:
    line {
            show_rule("lines: line");
            $$ = $1;
        }
    | lines line {
            show_rule("lines: lines line");
            $$ = str_concat($1, $2);
        }
    ;


