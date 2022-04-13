line:
    inline_elements LINEBREAK {
            show_rule("line: inline_elements LINEBREAK");
            $$ = str_concat($1, $2);
        }
    | inline_elements {
            show_rule("line: inline_elements");
            $$ = $1;
        }
    ;


