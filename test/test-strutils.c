#include <stddef.h>
#include "../src/strutils.h"
#include "test-lib/test-utils.h"

static void test_str_trim_right(void) {
    test_util_log_str("\n# test_str_trim_right");
    test_util_str_equal(
        "test 1"
        , str_trim_right("abc   ")
        , "abc"
    );

    test_util_str_equal(
        "test 2"
        , str_trim_right("   ab  c   ")
        , "   ab  c"
    );

    test_util_str_equal(
        "test 3"
        , str_trim_right("")
        , ""
    );

    test_util_str_equal(
        "test 4"
        , str_trim_right("\t")
        , ""
    );

    test_util_str_equal(
        "test 5"
        , str_trim_right("\r\n")
        , ""
    );

};

static void test_str_trim_left(void) {
    test_util_log_str("\n# test_str_trim_left");

    test_util_str_equal(
        "test 1"
        , str_trim_left("   abc")
        , "abc"
    );

    test_util_str_equal(
        "test 2"
        , str_trim_left("   ab  c   ")
        , "ab  c   "
    );

    test_util_str_equal(
        "test 3"
        , str_trim_left("")
        , ""
    );

    test_util_str_equal(
        "test 4"
        , str_trim_left("\t")
        , ""
    );

    test_util_str_equal(
        "test 5"
        , str_trim_left("\r\n")
        , ""
    );

};

static void test_str_trim(void) {
    test_util_log_str("\n# test_str_trim");

    test_util_str_equal(
        "test 1"
        , str_trim("abc")
        , "abc"
    );

    test_util_str_equal(
        "test 2"
        , str_trim("   ab  c   ")
        , "ab  c"
    );

    test_util_str_equal(
        "test 3"
        , str_trim("")
        , ""
    );

    test_util_str_equal(
        "test 4"
        , str_trim("\t")
        , ""
    );

    test_util_str_equal(
        "test 5"
        , str_trim("\r\n")
        , ""
    );

};

static void test_str_new_copy(void) {
    char *s = "abcdefg", *p, *t;

    test_util_log_str("\n# test_str_new_copy");

    test_util_str_equal(
        "test 1"
        , str_new_copy(s, s + 2)
        , "ab"
    );

    test_util_str_equal(
        "test 2"
        , str_new_copy(s, s)
        , ""
    );

    test_util_str_equal(
        "test 3: it's a dangerous operation"
        , str_new_copy(s, s + 100)
        , "abcdefg"
    );

}

static void test_str_split(void) {
    char *s = "a|b|c";

    test_util_log_str("\n# test_str_split");

    test_util_str_equal(
        "test 1"
        , str_split(s, "|")->arr[0]
        , "a"
    );

    test_util_int_equal(
        "test 2"
        , str_split(s, "|")->size
        , 3
    );

    test_util_str_equal(
        "test 3"
        , str_split(s, "|")->arr[2]
        , "c"
    );

    test_util_str_equal(
        "test 4: empty seperator"
        , str_split(s, "")->arr[1]
        , "|"
    );

    test_util_int_equal(
        "test 5: empty seperator"
        , str_split(s, "")->size
        , 5 
    );

    test_util_str_equal(
        "test 6: seperator not found"
        , str_split(s, "xxx")->arr[0]
        , s 
    );

    test_util_int_equal(
        "test 7: seperator not found"
        , str_split(s, "xxx")->size
        , 1 
    );

    test_util_str_equal(
        "test 8: split an empty string"
        , str_split("", "xxx")->arr[0]
        , "" 
    );

    test_util_int_equal(
        "test 9: split an empty string"
        , str_split("", "xxx")->size
        , 1 
    );

}

static void test_str_from_arr(void) {
    char *arr_1[3] = {
            "a"
            , "b"
            , "c"
        };

    char *arr_2[1] = {
            "a"
        };

    test_util_log_str("\n# test_str_from_arr");

    test_util_str_equal(
        "test 1"
        , str_from_arr(arr_1, 3)
        , "abc" 
    );

    test_util_str_equal(
        "test 2"
        , str_from_arr(arr_2, 1)
        , "a" 
    );

    test_util_str_equal(
        "test 3"
        , str_from_arr_with_glue(arr_1, 3, "-")
        , "a-b-c" 
    );

    test_util_str_equal(
        "test 4"
        , str_from_arr_with_glue(arr_2, 1, "-")
        , "a" 
    );

}

static void test_str_replace(void) {
    char *s1 = "Hello, Michael!";

    test_util_log_str("\n# test_str_replace");

    test_util_str_equal(
        "test 1"
        , str_replace(s1, "Michael", "Even")
        , "Hello, Even!" 
    );

    test_util_str_equal(
        "test 2"
        , str_replace(s1, "e", "@")
        , "H@llo, Micha@l!" 
    );

    test_util_str_equal(
        "test 3"
        , str_replace(s1, "Michael", "")
        , "Hello, !" 
    );

    test_util_str_equal(
        "test 4"
        , str_replace(s1, "xxx", "")
        , "Hello, Michael!" 
    );

}

static void test_str_memory_stat(void) {
    test_util_log_str("\n# test_str_memory_stat");

    str_memory_stat();
}


void test_strutils(void) {
    test_str_trim_right();
    test_str_trim_left();
    test_str_trim();

    test_str_new_copy();

    test_str_split();
    test_str_from_arr();

    test_str_replace();

    test_str_memory_stat();
}
