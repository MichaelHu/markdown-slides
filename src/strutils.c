#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "strutils.h"

char *str_concat(char *s1, char *s2){
    char *_str;

    _str = (char *)malloc(strlen(s1) + strlen(s2) + 1);     
    sprintf(_str, "%s%s", s1, s2); 
    return _str;
}

char *str_format(char *format, ...){
    char *_str = NULL;
    va_list args; 

    /**
     * support string size up to 1MB
     */
    _str = (char *)malloc(1000000);     

    va_start(args, format);
    vsprintf(_str, format, args); 
    va_end(args);
    return _str;
}

char *str_padding_left(char *s, int count){
    char *_str, *ret;

    /**
     * 1. condition `0 == count` may lead to out of memory when count is less than 0
     * 2. must use condition like `0 >= count`
     */
    if(0 >= count){
        return s;
    }

    _str = (char *)malloc(count + 1);     
    if(!_str){
        fprintf(stderr, "str_padding_left(): out of memory!\n");
        exit(1);
    }

    memset(_str, ' ', count);
    _str[count] = 0;

    ret = str_concat(_str, s);
    free(_str);

    return ret;
}

char *str_trim_left(char *s) {
    char *p = s, *str;
    int len = strlen(s), trim_count = 0;

    while (
        *p == '\n'
        || *p == '\r'
        || *p == '\t'
        || *p == ' '
        ) {
        p++;
        trim_count++;
    }

    str = (char *)malloc(len + 1 - trim_count);
    strncpy(str, p, len - trim_count);
    *(str + len - trim_count) = '\0';

    return str;
}

char *str_trim_right(char *s) {
    int len = strlen(s), k = len - 1;
    char *str;

    while (
            k >= 0
            && (
                *(s + k) == '\n'
                || *(s + k) == '\r'
                || *(s + k) == '\t'
                || *(s + k) == ' '
            )
        ) {
        k--;
    }

    if (k >= 0) {
        str = (char *)malloc(k + 2);
        if(!str){
            fprintf(stderr, "str_trim_right(): out of memory!\n");
            exit(1);
        }
        strncpy(str, s, k + 1);
        *(str + k + 1) = '\0';
    }
    else {
        str = "";
    }


    return str;
}

char *str_trim(char *s) {
    return str_trim_right(str_trim_left(s));
}

char *str_new_copy(char *start, char *end) {
    int len = end - start;
    char *str = (char *)malloc((len + 1) * sizeof(char));
    strncpy(str, start, len);
    *(str + len ) = '\0';
    return str;
}

t_str_collection *str_split(char *s, char *sep) {
    char *p = s, *t = s;
    int str_len = strlen(s), sep_len = strlen(sep);
    char *end = s + str_len - 1;
    int current_index = 0, current_size = 10, inc_size = 10;
    int empty_sep = (sep_len == 0);
    t_str_collection *collection;

    collection = (t_str_collection *)malloc(sizeof(t_str_collection));
    collection->size = 0;
    collection->arr = (char **)malloc(current_size * sizeof(char *));

    while (
        p <= end 
        && (
                // if empty seperator, t = p + 1
                (
                    empty_sep
                    && (t = p + 1)
                )
                || 
                // otherwise, find sep in p
                (
                    t = strstr(p, sep)
                )
            )
        ) {
        if (current_index + 2 == current_size) {
            collection->arr = (char **)realloc(
                collection->arr
                , current_size + inc_size
            ); 
            current_size += inc_size;
        }

        collection->arr[current_index] = str_new_copy(p, t);
        current_index++;
        p = t + sep_len;
    }

    if (p > end) {
        collection->size = current_index;
    }
    else {
        collection->arr[current_index] = str_new_copy(p, s + str_len);
        collection->size = current_index + 1;
    }

    return collection;
}

int count_of_char(char *s, char c){
    int count = 0;
    while (*s) {
        if (c == *s) {
            count++;
        }
        s++;
    }
    return count;
}



