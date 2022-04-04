lf_indents: 
    LF_INDENT {
            show_rule("lf_indents: LF_INDENT");
            $$ = $1;
        }
    | lf_indents2 {
            show_rule("lf_indents: lf_indents2");
            $$ = $1;
        }
    ;

lf_indents2: 
    LF_INDENT2 {
            show_rule("lf_indents2: LF_INDENT2");
            $$ = $1;
        }
    | lf_indents3 {
            show_rule("lf_indents2: lf_indents3");
            $$ = $1;
        }
    ;

lf_indents3: 
    LF_INDENT3 {
            show_rule("lf_indents3: LF_INDENT3");
            $$ = $1;
        }
    | lf_indents4 {
            $$ = $1;
            show_rule("lf_indents3: lf_indents4");
        }
    ;

lf_indents4: 
    LF_INDENT4 {
            show_rule("lf_indents4: LF_INDENT4");
            $$ = $1;
        }
    | lf_indents5 {
            show_rule("lf_indents4: lf_indents5");
            $$ = $1;
        }
    ;

lf_indents5: 
    LF_INDENT5 {
            show_rule("lf_indents5: LF_INDENT5");
            $$ = $1;
        }
    ;


