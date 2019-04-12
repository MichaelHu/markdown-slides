#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "markdown-utils.h" 
#include "config.h"

t_tag_info *markdown_get_standard_link_tag_info(char *content, char *attr) {
    return NULL;
}

t_tag_info *markdown_get_tag_info(char *s){
    char *p = s, 
         *end,
         *start,
         *_str = NULL;
    int size;
    t_tag_info *info = NULL;

    if(!s){
        return NULL;
    }

    /* skip spaces */
    while(' ' == *p
        || '\t' == *p
        ){
        p++;
    }

    info = (t_tag_info *)malloc(sizeof(t_tag_info));
    if(!info){
        fprintf(stderr, "markdown_get_attr out of memory!\n");
        exit(1);
    }

    info->attr = "";
    info->content = s;

    /* attr start */
    if(*p && p == strstr(p, "@[")){
        end = strstr(p, "]");
        if(end 
            /* non-escaped ']' */
            && *(end - 1) != '\\'){

            /* take into consideration: prefix space and trail '\0' */
            size = end - p;
            _str = (char *)malloc(size);

            if(!_str){
                fprintf(stderr, "markdown_get_attr out of memory!\n");
                exit(1);
            }

            memset(_str, 0, size);
            if(size - 2 > 0){
                /* prefix space */
                _str[0] = ' ';
                strncpy(_str + 1, p + 2, size - 2);
            }

            info->attr = _str;
            info->content = end + 1;
        }
    }
    else if (*p 
        && ( 
                p == strstr(p, "<http://")
                || p == strstr(p, "<https://")
                || p == strstr(p, "<ftp://")
                || p == strstr(p, "<mailto:")
                // for <ref://...>
                || p == strstr(p, "<ref://")
           )
        ) {
        end = strstr(p, ">");
        if (end) {
            size = end - p;
            _str = (char *)malloc(size);
            memset(_str, 0, size);

            start = p + 1;
            if ( p == strstr(p, "<ref://") ) {
                start += 6;
                size -= 6;
            }
            strncpy(_str, start, size - 1);
            info->content = _str;
        }
    }

    if(config_debug_tag_info){
        fprintf(stderr, "attr: [ %s ], content: [ %s ]\n"
            , info->attr, info->content);
    }

    return info;
}


