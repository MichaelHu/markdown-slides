markdown_file: 
    blocks { 
            /**
             * 1. _root_node == $1
             */

            show_rule("markdown_file: blocks");

            if( !_ISDEBUGPARSER ){
                fprintf(stdout, "==================================\n");
                fprintf(stdout, "%s", $1);
                fprintf(stdout, "==================================\n");
            }

            /**
            parse_doc();
            is_doc_parsed = 1;
            */
        }
    /*
    | error { 
            show_rule("markdownfile: error");
            if (!is_doc_parsed) {
                parse_doc();
            }
            is_doc_parsed = 1;

            yyclearin;
        }
    */
    ;

