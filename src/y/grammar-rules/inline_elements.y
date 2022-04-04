inline_elements:
    inline_elements inline_element {
            show_rule("inline_elements: inline_elements inline_element");
            $$ = str_concat($1, $2);
        }
    | inline_element {
            show_rule("inline_elements: inline_element");
            $$ = $1;
        }
    ;


