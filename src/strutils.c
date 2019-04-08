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
    // todo
    return s;
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



