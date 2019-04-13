#include <stdio.h>
#include <time.h>

extern void test_strutils(void);
extern void test_markdown_utils(void);

int main(int argc, char **argv){
    test_strutils();
    test_markdown_utils();
}

