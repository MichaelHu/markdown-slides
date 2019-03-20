#include <stdio.h>
#include <time.h>
#include "htmltags.h" 
#include "blocknode.h" 
#include "node.h" 
#include "markdown.y.h"

#define VERSION "0.1.9"
#define BUILDTIME "17/07/27 20:11"

/* declare external variables and function prototypes */
extern int yylineno;
extern char *yytext;
extern YYLTYPE yylloc;
extern void yyset_debug ( int debug_flag  );
extern void markdown(void);

/* input.c */
int GetNextChar(char *b, int maxBuffer);
int getNextLine(void);
int setInputFile(FILE *input);
void PrintError(char *errorstring, ...);

/* help */
void getTime(char *s, int size){
    struct tm *ptr;
    time_t localTime;
    localTime = time(NULL);
    ptr = localtime(&localTime);
    strftime(s, size - 1, "%x %X", ptr);
}

void printHelp(void){
    fprintf(
        stdout
        , 
"\n\
Usage: markdown [ file ]\n\
\n\
Markdown Parser v%s ( build: %s ), powered by flex & bison\n\
Github: https://github.com/MichaelHu/markdown-slides\n\
"
        , VERSION
        , BUILDTIME
    );
}

extern void yyerror(char *s) {
    /*
    fprintf(stderr
            , "[ %d:%d,%d:%d ] " 
            , yylloc.first_line
            , yylloc.first_column
            , yylloc.last_line
            , yylloc.last_column
        );
    */
    fprintf(stderr, "[ line %d ] %s, %s\n", yylineno, s, yytext);
    // PrintError(s);
}



int main(int argc, char **argv){
    FILE *input;
    if(argc == 1){
        printHelp();
        return 0;
    }
    
    yyset_debug( 1 );

    input = fopen(argv[1], "r");
    if(setInputFile(input)){
        if(getNextLine() == 0){
            markdown();
        }
    }
    fclose(input);
}

