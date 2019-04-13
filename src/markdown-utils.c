#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "strutils.h"
#include "markdown-utils.h" 
#include "config.h"

/**
 * 1. link: [an example](http://example.com/ "Title")
 *      attr: href="http://example.com/" title="Title"
 *      content: an example
 * 2. image: ![Alt text](/path/to/img.jpg "optional title")
 *      attr: src="/path/to/img.jpg" title="optional title" alt="Alt text"
 *      content: 
 */
static t_tag_info *markdown_get_standard_link_or_image_tag_info(
        char *content, char *attr, int type
    ) {
    char *str = NULL;
    char *href = NULL, *title = NULL, *alt = NULL;
    char *start, *end;

    int len;
    t_tag_info *info = NULL;
    t_str_collection *collection = NULL;

    info = (t_tag_info *)malloc(sizeof(t_tag_info));
    if (!info) {
        fprintf(stderr, "markdown_get_standard_link_tag_info out of memory!\n");
        exit(1);
    }

    info->content = alt = str_trim(content);
    if (1 == type) {
        info->content = "";
    }

    collection = (t_str_collection *)malloc(sizeof(t_str_collection));
    if (!collection) {
        fprintf(stderr, "markdown_get_standard_link_tag_info out of memory!\n");
        exit(1);
    }

    str = str_trim(attr);
    collection = str_split(str, " ");

    if (collection->size <= 0) {
        fprintf(stderr, "markdown_get_standard_link_tag_info: collection empty!\n");
        exit(1);
    }
    else if(collection->size == 1) {
        title = "";
    }
    else {
        str = str_from_arr_with_glue(collection->arr + 1, collection->size - 1, " ");
        str = str_trim(str);
        title = str;
        len = strlen(title);
        start = title;
        end = start + len;
        if (*start == '"') {
            start++;
        }
        if (*(end - 1) == '"') {
            end--;
        }
        title = str_new_copy(start, end);
    }

    href = *collection->arr;

    if (1 == type) {
        info->attr = str_format(
            " src=\"%s\" title=\"%s\" alt=\"%s\""
            , href
            , html_escape(title)
            , html_escape(alt)
        );
    }
    else {
        info->attr = str_format(
            " href=\"%s\" title=\"%s\""
            , href
            , html_escape(title)
        );
    }

    return info;
}

t_tag_info *markdown_get_standard_link_tag_info(char *content, char *attr) {
    return markdown_get_standard_link_or_image_tag_info( content, attr, 0);
}

t_tag_info *markdown_get_standard_image_tag_info(char *content, char *attr) {
    return markdown_get_standard_link_or_image_tag_info( content, attr, 1);
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


