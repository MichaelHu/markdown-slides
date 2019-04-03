#include <stdio.h>
#include "tagstack.h"

static t_tag last_tag = TAG_EOF; 

void pop_bigger_level_tag(level){
    t_tag_item *item = tag_top_stack();

    while( item
        && item->indent_level >= level){
        tag_pop_stack();
#ifdef _IS_DEBUG_TAGSTACK
        printf("pop tag: %s, level %d\n", get_tag_type(item->tag), item->indent_level);
#endif
        item = tag_top_stack();
    }
}

int inner_pre_level(int level){
    
    t_tag_item *item;
    int _level = -1;

    /**
     * 1. get the closest TAG_UL in the stack
     * 2. when pre is under TAG_UL, let _level be TAG_UL's indent_level plus 1
     */
    item = tag_latest_stack(TAG_UL);
    if(item && level >= item -> indent_level + 2){
        if(_level < item -> indent_level + 1){
            _level = item -> indent_level + 1;
        }
    }

    /**
     * 1. get the closest TAG_INDENT_UL in the stack
     * 2. when pre is under TAG_INDENT_UL, let _level be TAG_INDENT_UL's indent_level plus 1
     * 3. the previous _level may be overwritten
     */
    item = tag_latest_stack(TAG_INDENT_UL);
    if(item && level >= item -> indent_level + 2){
        if(_level < item -> indent_level + 1){
            _level = item -> indent_level + 1;
        }
    }

    item = tag_latest_stack(TAG_OL);
    if(item && level >= item -> indent_level + 2){
        if(_level < item -> indent_level + 1){
            _level = item -> indent_level + 1;
        }
    }

    item = tag_latest_stack(TAG_INDENT_OL);
    if(item && level >= item -> indent_level + 2){
        if(_level < item -> indent_level + 1){
            _level = item -> indent_level + 1;
        }
    }

    return _level;

}

int indent_level(char *s){
    int space = 0;
    while(*s){
        if('\t' == *s){
            space += 4;
        }
        if(' ' == *s){
            space++;
        }
        s++;
    }
    return space / 4;
}

char* tag_check_stack(t_tag tag, int level){

    if(tag != TAG_BLANK && tag != TAG_QUOTE_BLANK){
#ifdef _IS_DEBUG_TAGSTACK
        printf("current tag: %s, level: %d\n", get_tag_type(tag), level);
#endif
        pop_bigger_level_tag(level);
        tag_push_stack(tag, level);
    }

    last_tag = tag;

    return "";

}

int is_last_tag_blank(){
    return last_tag == TAG_BLANK;
}

char *get_tag_type(t_tag tag){
    switch(tag){
        case TAG_ERROR: return "TAG_ERROR";

        case TAG_HTMLBLOCK: return "TAG_HTMLBLOCK";
        case TAG_SCRIPTBLOCK: return "TAG_SCRIPTBLOCK";
        case TAG_SVGBLOCK: return "TAG_SVGBLOCK";
        case TAG_STYLEBLOCK: return "TAG_STYLEBLOCK";

        case TAG_SECTION: return "TAG_SECTION";
        case TAG_VSECTION: return "TAG_VSECTION";
        case TAG_P: return "TAG_P";
        case TAG_UL: return "TAG_UL";
        case TAG_OL: return "TAG_OL";
        case TAG_PRE: return "TAG_PRE";
        case TAG_BLANK: return "TAG_BLANK";
        case TAG_H: return "TAG_H";
        case TAG_EOF: return "TAG_EOF";

        case TAG_QUOTE_P: return "TAG_QUOTE_P";
        case TAG_QUOTE_UL: return "TAG_QUOTE_UL";
        case TAG_QUOTE_OL: return "TAG_QUOTE_OL";
        case TAG_QUOTE_PRE: return "TAG_QUOTE_PRE";
        case TAG_QUOTE_BLANK: return "TAG_QUOTE_BLANK";
        case TAG_QUOTE_H: return "TAG_QUOTE_H";

        case TAG_INDENT_P: return "TAG_INDENT_P";
        case TAG_INDENT_UL: return "TAG_INDENT_UL";
        case TAG_INDENT_OL: return "TAG_INDENT_OL";
        case TAG_INDENT_PRE: return "TAG_INDENT_PRE";
        case TAG_INDENT_TEXT: return "TAG_INDENT_TEXT";

        case TAG_TABLE: return "TAG_TABLE";
        case TAG_TR: return "TAG_TR";
        case TAG_TD: return "TAG_TD";

        case TAG_ROOT: return "TAG_ROOT";
        case TAG_LINES: return "TAG_LINES";
        case TAG_BLOCK_P: return "TAG_BLOCK_P";
        case TAG_BLOCK_UL: return "TAG_BLOCK_UL";
        case TAG_BLOCK_OL: return "TAG_BLOCK_OL";
        case TAG_BLOCK_INDENT_UL: return "TAG_BLOCK_INDENT_UL";
        case TAG_BLOCK_INDENT_OL: return "TAG_BLOCK_INDENT_OL";
        case TAG_BLOCK_INDENT_TEXT: return "TAG_BLOCK_INDENT_TEXT";
        case TAG_BLOCK_QUOTE_UL: return "TAG_BLOCK_QUOTE_UL";
        case TAG_BLOCK_QUOTE_OL: return "TAG_BLOCK_QUOTE_OL";
        case TAG_BLOCK_QUOTE_P: return "TAG_BLOCK_QUOTE_P";
        case TAG_BLOCK_BLANK: return "TAG_BLOCK_BLANK";
        case TAG_BLOCK_PRE: return "TAG_BLOCK_PRE";
        case TAG_BLOCK_INDENT_PRE: return "TAG_BLOCK_INDENT_PRE";
    }
}

