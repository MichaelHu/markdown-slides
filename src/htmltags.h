typedef struct tag_info {
    char *attr;
    char *content;
} t_tag_info;

t_tag_info *markdown_get_tag_info(char *s);

char *create_image(char *title, char *href);
char *create_link(char *title, char *href);
char *create_hn(char *s, int level);
char *create_emphasis(char *s);
char *create_strong(char *s);
char *create_codespan(char *attr, char *content);

char *html_escape(char *s);


