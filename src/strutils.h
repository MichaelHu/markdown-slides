#define HEADER_STRUTILS

typedef struct {
    int size;
    char **arr;
} t_str_collection;

char *str_format(char *format, ...);
char *str_concat(char *s1, char *s2);
char *str_padding_left(char *s, int count);
char *str_trim_left(char *s);
char *str_trim_right(char *s);
char *str_trim(char *s);
char *str_trim_left_n_lf_indents( char *str, int cnt );
char *str_new_copy(char *start, char *end);
t_str_collection *str_split(char *s, char *sep);
int count_of_char(char *s, char c);
char *str_from_arr(char **arr, int size);
char *str_from_arr_with_glue(char **arr, int size, char *glue);
char *str_replace(char *s, char *pattern, char *replacement);
char *str_replace_left(char *s, char *pattern, char *replacement);
char *str_replace_right(char *s, char *pattern, char *replacement);
void str_memory_stat();

char *html_escape(char *s);
int str_begin_with(char *s, char *p);
int str_end_with(char *s, char *p);
