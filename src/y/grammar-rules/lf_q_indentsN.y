lf_q_indents: 
    LF_Q_INDENT {
            show_rule("lf_q_indents: LF_Q_INDENT");
            $$ = $1;
        }
    | lf_q_indents2 {
            show_rule("lf_q_indents: lf_q_indents2");
            $$ = $1;
        }
    ;

lf_q_indents2: 
    LF_Q_INDENT2 {
            show_rule("lf_q_indents2: LF_Q_INDENT2");
            $$ = $1;
        }
    | lf_q_indents3 {
            show_rule("lf_q_indents2: lf_q_indents3");
            $$ = $1;
        }
    ;

lf_q_indents3: 
    LF_Q_INDENT3 {
            show_rule("lf_q_indents3: LF_Q_INDENT3");
            $$ = $1;
        }
    ;


