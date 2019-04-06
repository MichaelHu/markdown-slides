#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "htmltags.h"
#include "node.h"

static t_tag tags_of_block_node[] = {
    TAG_ROOT
    , TAG_H
    , TAG_TABLE
    , TAG_LINES
    , TAG_BLOCK_P
    , TAG_BLOCK_UL
    , TAG_BLOCK_OL
    , TAG_BLOCK_INDENT_UL
    , TAG_BLOCK_INDENT_OL
    , TAG_BLOCK_INDENT_TEXT
    , TAG_BLOCK_QUOTE_UL
    , TAG_BLOCK_QUOTE_OL
    , TAG_BLOCK_BLANK
    , TAG_BLOCK_PRE
    , TAG_BLOCK_INDENT_PRE
};
static int tags_of_block_node_size = sizeof(tags_of_block_node) / sizeof(t_tag);

static t_tag tags_of_node_need_merged_when_adjacent[] = {
    TAG_BLOCK_UL
    , TAG_BLOCK_OL
    , TAG_BLOCK_INDENT_UL
    , TAG_BLOCK_INDENT_OL
    , TAG_BLOCK_BLANK
    , TAG_BLOCK_QUOTE_UL
    , TAG_BLOCK_QUOTE_OL
};
static int tags_of_node_need_merged_when_adjacent_size 
    = sizeof(tags_of_node_need_merged_when_adjacent) / sizeof(t_tag);

static t_tag tags_of_node_need_merged_even_seperated_by_blanks[] = {
    TAG_BLOCK_PRE
    , TAG_BLOCK_INDENT_PRE
};
static int tags_of_node_need_merged_even_seperated_by_blanks_size
    = sizeof(tags_of_node_need_merged_even_seperated_by_blanks) / sizeof(t_tag);


static t_tag get_parent_block_node_tag(t_tag tag) {
    switch (tag) {
        case TAG_P:
            return TAG_BLOCK_P;
        case TAG_UL:
            return TAG_BLOCK_UL;
        case TAG_OL:
            return TAG_BLOCK_OL;
        case TAG_INDENT_UL:
            return TAG_BLOCK_INDENT_UL;
        case TAG_INDENT_OL:
            return TAG_BLOCK_INDENT_OL;
        case TAG_INDENT_TEXT:
            return TAG_BLOCK_INDENT_TEXT;
        case TAG_QUOTE_UL:
            return TAG_BLOCK_QUOTE_UL;
        case TAG_QUOTE_OL:
            return TAG_BLOCK_QUOTE_OL;
        case TAG_QUOTE_P:
            return TAG_BLOCK_QUOTE_P;
        case TAG_BLANK:
            return TAG_BLOCK_BLANK;
        case TAG_PRE:
            return TAG_BLOCK_PRE;
        case TAG_INDENT_PRE:
            return TAG_BLOCK_INDENT_PRE;
        default:
            return TAG_ROOT;
    }
}
static int is_line_list_node(t_node *node) {
    return (
        node->tag == TAG_UL
        || node->tag == TAG_OL
        || node->tag == TAG_INDENT_UL
        || node->tag == TAG_INDENT_OL
    );
}

static int is_blank_node(t_node *node) {
    return (
        node->tag == TAG_BLANK
        || node->tag == TAG_BLOCK_BLANK
    );
}

static int index_of(t_tag *arr, int size, t_tag tag) {
    int i;
    for (i = 0; i < size; i++) {
        if (tag == arr[i]) {
            return i;
        }
    }
    return -1;
}

static int is_block_node(t_node *node) {
    return index_of(tags_of_block_node, tags_of_block_node_size, node->tag) > -1;
}

static int is_node_need_merged_when_adjacent(t_node *node) {
    return index_of(
        tags_of_node_need_merged_when_adjacent
        , tags_of_node_need_merged_when_adjacent_size
        , node->tag
    ) > -1;
}

static int is_node_need_merged_even_seperated_by_blanks(t_node *node) {
    return index_of(
        tags_of_node_need_merged_even_seperated_by_blanks
        , tags_of_node_need_merged_even_seperated_by_blanks_size
        , node->tag
    ) > -1;
}


/**
 * 1. demonstrate how to write a function accepting argument of va_list
 * 2. like vprintf(char *fmt, va_list args)
 */
t_node *node_create(t_node_type type, t_tag tag, int level, int nops, va_list args) {
    t_node *p;
    int i;

    if( ( p = 
            (t_node *)malloc(sizeof(t_node)) ) 
        == NULL){
        fprintf(stderr, "out of memory");
        exit(1);
    }

    if( ( p -> ops = 
            (char **)malloc(nops * sizeof(char *)) ) 
        == NULL){
        fprintf(stderr, "out of memory");
        exit(1);
    }

    p->type = type;
    p->tag = tag;
    p->level = level;
    p->nops = nops;
    p->prev = NULL;
    p->next = NULL;
    p->parent = NULL;
    p->children = NULL;

    for (i = 0; i < nops; i++){
        p->ops[i] = va_arg(args, char*);
    }

    return p;
}

t_node *block_node_create(t_tag tag, int level, int nops, ...) {
    t_node *p;
    va_list args;
    va_start(args, nops);
    p = node_create(NODE_TYPE_BLOCK, tag, level, nops, args);
    va_end(args);
    return p;
}

t_node *inline_node_create(t_tag tag, int level, int nops, ...) {
    t_node *p;
    va_list args;
    va_start(args, nops);
    p = node_create(NODE_TYPE_INLINE, tag, level, nops, args);
    va_end(args);
    return p;
}

t_link *show_node(t_node *node) {
    if (node->nops >= 2) {
        fprintf(
            stderr
            , "%stag: %s; level: %d; nops: %d; attr: %s; content: %s\n"
            , str_padding_left("", node->level * 4)
            , get_tag_type(node->tag)
            , node->level
            , node->nops
            , node->ops[0]
            , node->ops[1]
        );
    }
    else {
        fprintf(
            stderr
            , "%stag: %s; level: %d\n"
            , str_padding_left("", node->level * 4)
            , get_tag_type(node->tag)
            , node->level
        );
    }

    return NULL;
}

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

/**
 * 1. tree demonstrated below:
 *
 *          next
 *      0 ---------- 0 ---------- 0
 *      | children   |            |
 *      0 - 0        0 - 0        0 - 0
 *
 * 2. use pre-order depth-traverse
 * 3. new_link can be used when the tree has been changed in visit method
 * 4. post-visit method is optional, it can be supplied by variable argument list
 */
static void traverse_nodes_with_visitor(
        t_node *root
        , t_link* (*visit)(t_node *)
        , int ext_args_count
        , ...
    ) {
    va_list args;
    t_link *new_link;
    t_node *new_children;
    t_node *new_next;
    void (*post_visit)(t_node *) = NULL;

    if (!root) {
        return;
    }

    new_children = root->children;
    new_next = root->next;

    if (visit) {
        new_link = visit(root);
    }

    if (new_link && new_link->next) {
        new_next = new_link->next;
    }

    if (new_link && new_link->children) {
        new_children = new_link->children;
    }

    if (ext_args_count <= 0) {
        traverse_nodes_with_visitor(new_children, visit, 0);
        traverse_nodes_with_visitor(new_next, visit, 0);
    }
    else {
        va_start(args, ext_args_count);
        post_visit = va_arg(args, void (*)(t_node *));

        traverse_nodes_with_visitor(new_children, visit, ext_args_count, post_visit);
        traverse_nodes_with_visitor(new_next, visit, ext_args_count, post_visit);

        if (post_visit) {
            post_visit(root);
        }
        va_end(args);
    }
}

void traverse_nodes(t_node *root) {
    // traverse_nodes_with_visitor(root, show_node, 0);
    traverse_nodes_with_visitor(root, show_links, 0);
}

/**
 * 1. nodes in list must have a valid parent link
 */
static t_link *visit_node_to_check_parent_link(t_node *node) {
    if (node->prev) {
        if (!node->parent) {
            fprintf(stderr, "==parent link error==\n");
            show_node(node);
        }
    }
    return NULL;
}

static void check_parent_links(t_node *root) {
    traverse_nodes_with_visitor(root, visit_node_to_check_parent_link, 0);
}


static t_link *visit_nonblock_node(t_node *node) {
    t_node *parent, *new_uncle, *tmp;

    if (is_block_node(node)) {
        return NULL;
    }

    parent = node->parent;

    if (!parent) {
        fprintf(stderr, "==NULL parent link==\n");
    }

    switch (node->tag) {
        case TAG_INDENT_UL:
        case TAG_INDENT_OL:
        case TAG_INDENT_TEXT:
            if (parent && node->level != parent->level) {
                // show_node(node);
                new_uncle = block_node_create(
                    get_parent_block_node_tag(node->tag)
                    , node->level
                    , 0
                );

                // 1. insert new_uncle after parent node
                new_uncle->next = parent->next;
                new_uncle->next->prev = new_uncle;
                parent->next = new_uncle;
                new_uncle->prev = parent;
                new_uncle->parent = parent->parent;

                // 2. set current node the first child of new_unclue
                new_uncle->children = node;
                if (node->parent->children == node) {
                    node->parent->children = NULL;
                }
                node->parent = new_uncle;

                // 3. remove connection with the previous sibling node
                node->prev->next = NULL;
                node->prev = NULL;

                // 4. update parent links of the remained sibling nodes
                tmp = node;
                while (tmp) {
                    tmp->parent = node->parent;
                    tmp = tmp->next;
                }
            }
            break;
        default:
            break;
    }

    return NULL;
}

void complement_block_nodes(t_node *root) {
    fprintf(stderr, "===========fix_parent_links===========\n");
    check_parent_links(root);

    fprintf(stderr, "===========complement_block_nodes===========\n");
    traverse_nodes_with_visitor(root, visit_nonblock_node, 0);
}

t_node *tail_node_in_list(t_node *node) {
    t_node *p = node, *pre = node;

    while (p) {
        pre = p;
        p = p->next;
    }
    return pre;
}

static t_node *prev_node;
static t_link *visit_to_rearrange_block_node(t_node *node) {
    t_link *new_link = NULL;
    t_node *p, *tail, *tmp;

    show_node(node);

    if (node->parent == node) {
        fprintf(stderr, "1: parent self-looping\n");
        show_node(node);
    }

    if (is_block_node(node)) {

        /* indented block node */
        if (node->level > 0) {
            if (!prev_node) {
                fprintf(stderr, "prev_node NULL\n");
            }

            p = prev_node;

            fprintf(stderr, "search closest parent list_node\n");
            while (p) {

                if (p->parent == p) {
                    fprintf(stderr, "2: parent self-looping\n");
                    show_node(node);
                }

                if (p->level == node->level - 1 && is_line_list_node(p)) {
                    break;
                } 

                p = p->parent;
            }
            fprintf(stderr, "finish searching closest parent list_node\n");
            show_node(p);

            if (!is_line_list_node(p)) {
                fprintf(stderr, "error containing list node\n");
            }

            new_link = (t_link *)malloc(sizeof(t_node));
            
            if (!p->children) {
                fprintf(stderr, "p->children NULL\n");
                p->children = node;

                /**
                 * 1. if node is at the head of a list, we should make the next node the head
                 * 2. node is a indented node( level >0 ), it always has a valid parent link
                 */
                if (node->parent->children == node) {
                    node->parent->children = node->next;
                }
                node->parent = p;

                if (node->next) {
                    node->next->prev = node->prev;
                }
                if (node->prev) {
                    node->prev->next = node->next;
                }

                new_link->next = node->next;
                new_link->children = node->children;

                node->next = NULL;
                node->prev = NULL;
            }
            else {
                fprintf(stderr, "p->children exists\n");
                tail = tail_node_in_list(p->children);
                fprintf(stderr, "parent node:\n");
                show_node(p);
                fprintf(stderr, "tail node:\n");
                show_node(tail);

                if (node->parent->children == node) {
                    node->parent->children = node->next;
                }
                node->parent = tail->parent;

                if (node->next) {
                    node->next->prev = node->prev;
                }
                if (node->prev) {
                    node->prev->next = node->next;
                }

                new_link->next = node->next;
                new_link->children = node->children;

                tail->next = node;
                node->prev = tail;
                // node is now be the tail node
                node->next = NULL;
            }

        }

    }

    /**
     * 1. blank node cannot be prev_node
     * 2. if so, we cannot find the nearest ancestor list node, because blank node is of level 0
     */
    if (!is_blank_node(node)){
        prev_node = node;
    }
    return new_link;
}

void rearrange_block_nodes(t_node *root) {
    prev_node = NULL;
    traverse_nodes_with_visitor(root, visit_to_rearrange_block_node, 0);
}



static t_link *merge_children_then_clean_the_useless(t_node *to, t_node *from) {
    t_link *new_link;
    t_node *tail_node, *tmp;

    if (!to || !from) {
        fprintf(stderr, "merge_children(to, from): NULL to or NULL from\n");
    }

    // `from` and `to` always have children list
    tail_node = tail_node_in_list(to->children);

    // 1. append node's children list to the target node's children list
    tail_node->next = from->children;
    from->children->prev = tail_node;

    // 2. update children's parent links
    tmp = from->children;
    while (tmp) {
        tmp->parent = tail_node->parent;
        tmp = tmp->next;
    }

    // 3. save links
    new_link = (t_link *)malloc(sizeof(t_node));
    new_link->next = from->next;
    new_link->children = from->children;

    // 4. remove the `from` node from list 
    from->prev->next = from->next;
    if (from->next) {
        from->next->prev = from->prev;
    }
    from->prev = NULL;
    from->next = NULL;
    from->children = NULL;

    // 5. free the node
    free(from);

    return new_link;
}

static t_link *visit_to_merge_block_nodes(t_node *node) {
    t_link *new_link = NULL;
    t_node *tail_node, *tmp;

    if (!is_block_node(node)) {
        return new_link;
    }

    if (is_node_need_merged_when_adjacent(node)) {
        if (node->prev && node->tag == node->prev->tag) {
            new_link = merge_children_then_clean_the_useless(node->prev, node);
        }
    }
    else if (is_node_need_merged_even_seperated_by_blanks(node)) {
        if (node->prev) {

            /**
             * try to find 
             * 1. adjacent node with the same tag
             * 2. or previous sibling node with the same tag seperated by one or more blank line node
             */
            tmp = node->prev;
            while (tmp) {
                if (tmp->tag == node->tag || !is_blank_node(tmp)) {
                    break;
                }
                tmp = tmp->prev;
            }

            // find it
            if (tmp && tmp->tag == node->tag) {
                new_link = merge_children_then_clean_the_useless(tmp, node);
            }
        }
    }

    return new_link;
}

void merge_block_nodes(t_node *root) {
    traverse_nodes_with_visitor(root, visit_to_merge_block_nodes, 0);
}


static t_link *pre_visit_parse(t_node *node) {
    fprintf(stderr, "pre_visit_parse\n");
    return NULL;
}

static void post_visit_parse(t_node *node) {
    fprintf(stderr, "post_visit_parse\n");
    return;
}

void parse_doc_tree(t_node *root) {
    traverse_nodes_with_visitor(root, pre_visit_parse, 1, post_visit_parse);
}

