#define HEADER_TEST_UTILS

void test_util_log(char *format, ...); 
void test_util_log_str(char *s); 
void test_util_log_int(int i); 
void test_util_print_str(char *s);
void test_util_str_equal(char *description, char *s1, char *s2); 
void test_util_int_equal(char *description, int a, int b);
