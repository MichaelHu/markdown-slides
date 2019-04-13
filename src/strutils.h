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
char *str_new_copy(char *start, char *end);
t_str_collection *str_split(char *s, char *sep);
int count_of_char(char *s, char c);
char *str_from_arr(char **arr, int size);
char *str_from_arr_with_glue(char **arr, int size, char *glue);

char *html_escape(char *s);
