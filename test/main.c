#include <stdio.h>
#include <time.h>

extern void test_strutils(void);
extern void test_markdown_utils(void);
extern void test_node(void);
extern void test_markdown_parser(void);

int main(int argc, char **argv){
    test_strutils();
    test_markdown_utils();
    test_node();
    test_markdown_parser();

    return 0;
}

