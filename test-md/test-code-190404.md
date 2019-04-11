# test-code-190404

## test 1

    static t_link *show_links(t_node *node) {

        fprintf(
            stderr
            , "%stag: %s; level: %d; parent: %s; parent-level: %d\n"
            , str_padding_left("", node->level * 4)
            , get_tag_type(node->tag)
            , node->level
            , node->parent ? get_tag_type(node->parent->tag) : "NULL"
            , node->parent ? node->parent->level : -9999
        );

        return NULL;
    }


## test 2

```
code line 1
code line 2
```


## test 3

```
code line 1
code line 2


