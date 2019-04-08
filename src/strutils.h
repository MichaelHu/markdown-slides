#define HEADER_STRUTILS

char *str_format(char *format, ...);
char *str_concat(char *s1, char *s2);
char *str_padding_left(char *s, int count);
char *str_trim_left(char *s);
char *str_trim_right(char *s);
