typedef struct tag_info {
    char *attr;
    char *content;
} t_tag_info;

t_tag_info *markdown_get_tag_info(char *s);
t_tag_info *markdown_get_standard_link_tag_info(char *content, char *attr);
t_tag_info *markdown_get_standard_image_tag_info(char *content, char *attr);

