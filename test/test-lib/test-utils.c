#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "test-utils.h"

void test_util_log(char *format, ...) {
    va_list args;
    char *str = (char *)malloc(1000);

    va_start(args, format);
    vsprintf(str, format, args); 
    va_end(args);
    fprintf(stdout, "%s\n", str);
}

void test_util_log_str(char *s) {
    test_util_log("%s", s);
}

void test_util_log_int(int i) {
    test_util_log("%d", i);
}

void test_util_print_str(char *s) {
    fprintf(stdout, "%s\n", s);
}

void test_util_str_equal(char *description, char *s1, char *s2) {
    if (0 == strcmp(s1, s2)) {
        test_util_log("%s: pass", description);
    }
    else {
        test_util_log("%s: fail", description);
    }
}

void test_util_int_equal(char *description, int a, int b) {
    if (a == b) {
        test_util_log("%s: pass", description);
    }
    else {
        test_util_log("%s: fail", description);
    }
}
