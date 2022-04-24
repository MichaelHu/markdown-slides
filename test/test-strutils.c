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

    test_util_str_equal(
        "test 5"
        , str_replace(s1, "", "|")
        , "Hello, Michael!" 
    );

}

static void test_str_replace_left(void) {
    char *s1 = "Hello, Michael!";

    test_util_log_str("\n# test_str_replace_left");

    test_util_str_equal(
        "test 1"
        , str_replace_left(s1, "o", "O")
        , "HellO, Michael!" 
    );

    test_util_str_equal(
        "test 2"
        , str_replace_left(s1, "l", "L")
        , "HeLlo, Michael!" 
    );

    test_util_str_equal(
        "test 3"
        , str_replace_left(s1, "e", "")
        , "Hllo, Michael!" 
    );

    test_util_str_equal(
        "test 4"
        , str_replace_left(s1, "xxx", "")
        , "Hello, Michael!" 
    );

    test_util_str_equal(
        "test 5"
        , str_replace_left(s1, "", "|")
        , "Hello, Michael!" 
    );

    test_util_str_equal(
        "test 6"
        , str_replace_left(s1, "ll", "----")
        , "He----o, Michael!" 
    );

}

static void test_str_replace_right(void) {
    char *s1 = "Hello, Michael!";

    test_util_log_str("\n# test_str_replace_right");

    test_util_str_equal(
        "test 1"
        , str_replace_right(s1, "o", "O")
        , "HellO, Michael!" 
    );

    test_util_str_equal(
        "test 2"
        , str_replace_right(s1, "l", "L")
        , "Hello, MichaeL!" 
    );

    test_util_str_equal(
        "test 3"
        , str_replace_right(s1, "e", "")
        , "Hello, Michal!" 
    );

    test_util_str_equal(
        "test 4"
        , str_replace_right(s1, "xxx", "")
        , "Hello, Michael!" 
    );

    test_util_str_equal(
        "test 5"
        , str_replace_right(s1, "", "|")
        , "Hello, Michael!" 
    );

}

static void test_str_trim_left_n_lf_indents(void) {
    char *s1 = "\tHello, Michael!";
    char *s2 = "    Hello, Michael!";
    char *s3 = "   Hello, Michael!";
    char *s4 = "   \tHello, Michael!";
    char *s5 = "\t    \t\tHello, Michael!";
    char *s6 = "\t     \tHello, Michael!";

    test_util_log_str("\n# test_str_trim_left_n_lf_indents");

    test_util_str_equal(
        "test 1"
        , str_trim_left_n_lf_indents(s1, 1)
        , "Hello, Michael!" 
    );

    test_util_str_equal(
        "test 1-1"
        , str_trim_left_n_lf_indents(s1, 2)
        , "\tHello, Michael!" 
    );

    test_util_str_equal(
        "test 2"
        , str_trim_left_n_lf_indents(s2, 1)
        , "Hello, Michael!" 
    );

    test_util_str_equal(
        "test 2-1"
        , str_trim_left_n_lf_indents(s2, 0)
        , "    Hello, Michael!" 
    );

    test_util_str_equal(
        "test 3"
        , str_trim_left_n_lf_indents(s3, 1)
        , "   Hello, Michael!" 
    );

    test_util_str_equal(
        "test 3-1"
        , str_trim_left_n_lf_indents(s3, 100)
        , "   Hello, Michael!" 
    );

    test_util_str_equal(
        "test 4"
        , str_trim_left_n_lf_indents(s4, 1)
        , "   \tHello, Michael!" 
    );

    test_util_str_equal(
        "test 4-1"
        , str_trim_left_n_lf_indents(s4, 2)
        , "   \tHello, Michael!" 
    );

    test_util_str_equal(
        "test 5"
        , str_trim_left_n_lf_indents(s5, 1)
        , "    \t\tHello, Michael!" 
    );

    test_util_str_equal(
        "test 5-1"
        , str_trim_left_n_lf_indents(s5, 2)
        , "\t\tHello, Michael!" 
    );

    test_util_str_equal(
        "test 5-2"
        , str_trim_left_n_lf_indents(s5, 3)
        , "\tHello, Michael!" 
    );

    test_util_str_equal(
        "test 5-3"
        , str_trim_left_n_lf_indents(s5, 4)
        , "Hello, Michael!" 
    );

    test_util_str_equal(
        "test 5-4"
        , str_trim_left_n_lf_indents(s5, 5)
        , "\t    \t\tHello, Michael!" 
    );

    test_util_str_equal(
        "test 6"
        , str_trim_left_n_lf_indents(s6, 1)
        , "     \tHello, Michael!" 
    );

    test_util_str_equal(
        "test 6-1"
        , str_trim_left_n_lf_indents(s6, 2)
        , " \tHello, Michael!" 
    );

    test_util_str_equal(
        "test 6-2"
        , str_trim_left_n_lf_indents(s6, 3)
        , "\t     \tHello, Michael!" 
    );

}

static void test_str_memory_stat(void) {
    test_util_log_str("\n# test_str_memory_stat");

    str_memory_stat();
}

static void test_str_begin_with(void) {
    test_util_log_str("\n# test_str_begin_with");

    test_util_int_equal(
        "test 1"
        , str_begin_with("", "123")
        , 0 
    );

    test_util_int_equal(
        "test 2"
        , str_begin_with("34g", "3")
        , 1 
    );

    test_util_int_equal(
        "test 3"
        , str_begin_with("34g", "")
        , 1 
    );

    test_util_int_equal(
        "test 4"
        , str_begin_with("34g", "4")
        , 0 
    );
}

static void test_str_end_with(void) {
    test_util_log_str("\n# test_str_end_with");

    test_util_int_equal(
        "test 1"
        , str_end_with("", "123")
        , 0 
    );

    test_util_int_equal(
        "test 2"
        , str_end_with("hello, world!", "d!")
        , 1 
    );

    test_util_int_equal(
        "test 3"
        , str_end_with("hello, world!", "")
        , 1 
    );

    test_util_int_equal(
        "test 4"
        , str_end_with("hello, world!  ", "! ")
        , 0 
    );
}

void test_strutils(void) {
    test_str_trim_right();
    test_str_trim_left();
    test_str_trim();

    test_str_new_copy();

    test_str_split();
    test_str_from_arr();

    test_str_replace();
    test_str_replace_left();
    test_str_replace_right();

    test_str_trim_left_n_lf_indents();

    test_str_memory_stat();

    test_str_begin_with();
    test_str_end_with();
}
