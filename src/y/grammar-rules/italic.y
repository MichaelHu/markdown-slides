italic: 
    ASTERISK inline_text ASTERISK {
            show_rule("italic: ASTERISK inline_text ASTERISK");
            tag_info = markdown_get_tag_info($2);
            $$ = str_format("<i%s>%s</i>", tag_info->attr, tag_info->content);
        }
    | ASTERISK inline_text error {
            show_rule("italic: ASTERISK inline_text error");
        }
    | ASTERISK error {
            show_rule("italic: ASTERISK error");
        }
    | UNDERSCORE inline_text UNDERSCORE {
            show_rule("italic: UNDERSCORE inline_text UNDERSCORE");
            tag_info = markdown_get_tag_info($2);
            $$ = str_format("<i%s>%s</i>", tag_info->attr, tag_info->content);
        }
    | UNDERSCORE inline_text error {
            show_rule("italic: UNDERSCORE inline_text error");
        }
    | UNDERSCORE error {
            show_rule("italic: UNDERSCORE error");
        }
    ;


