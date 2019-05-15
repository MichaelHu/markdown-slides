#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "strutils.h"
#include "logutils.h"
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

    , TAG_BLOCK_QUOTE
    , TAG_QUOTE_H
    , TAG_BLOCK_QUOTE_UL
    , TAG_BLOCK_QUOTE_OL
    , TAG_BLOCK_QUOTE_P
    , TAG_BLOCK_QUOTE_BLANK

    , TAG_BLOCK_BLANK
    , TAG_BLOCK_PRE
    , TAG_BLOCK_INDENT_PRE

    , TAG_BLOCK_BLANK
    , TAG_ERROR
};
static int tags_of_block_node_size = sizeof(tags_of_block_node) / sizeof(t_tag);

static t_tag tags_of_node_need_merged_when_adjacent[] = {
    TAG_BLOCK_PRE
    , TAG_BLOCK_INDENT_PRE
};
static int tags_of_node_need_merged_when_adjacent_size 
    = sizeof(tags_of_node_need_merged_when_adjacent) / sizeof(t_tag);

static t_tag tags_of_node_need_merged_when_adjacent_and_not_blank_seperated[] = {
    TAG_BLOCK_UL
    , TAG_BLOCK_OL
    , TAG_BLOCK_INDENT_UL
    , TAG_BLOCK_INDENT_OL
    , TAG_BLOCK_BLANK
    , TAG_BLOCK_QUOTE_UL
    , TAG_BLOCK_QUOTE_OL
};
static int tags_of_node_need_merged_when_adjacent_and_not_blank_seperated_size
    = sizeof(tags_of_node_need_merged_when_adjacent_and_not_blank_seperated) / sizeof(t_tag);

static t_tag tags_of_list_node[] = {
    TAG_UL
    , TAG_OL
    , TAG_INDENT_UL
    , TAG_INDENT_OL
    , TAG_QUOTE_UL
    , TAG_QUOTE_OL
};
static int tags_of_list_node_size
    = sizeof(tags_of_list_node) / sizeof(t_tag);



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
        case TAG_QUOTE_BLANK:
            return TAG_BLOCK_QUOTE_BLANK;
        case TAG_BLANK:
            return TAG_BLOCK_BLANK;
        case TAG_PRE:
            return TAG_BLOCK_PRE;
        case TAG_INDENT_PRE:
            return TAG_BLOCK_INDENT_PRE;
        case TAG_TR:
            return TAG_TABLE;
        default:
            return TAG_ROOT;
    }
}

static t_tag get_parent_block_node_level(t_node *node) {
    switch (node->tag) {
        case TAG_TR:
            return node->level - 1;

        default:
            return node->level;
    }
}

static int is_blank_node(t_node *node) {
    return (
        node->tag == TAG_BLANK
        || node->tag == TAG_BLOCK_BLANK
    );
}

static int is_tableceil_node(t_node *node) {
    return (
        node->tag == TAG_TD
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

static int is_line_list_node(t_node *node) {
    return index_of(
        tags_of_list_node
        , tags_of_list_node_size
        , node->tag
    ) > -1;
}

static int is_node_need_merged_when_adjacent(t_node *node) {
    return index_of(
        tags_of_node_need_merged_when_adjacent
        , tags_of_node_need_merged_when_adjacent_size
        , node->tag
    ) > -1;
}

static int is_node_need_merged_when_adjacent_and_not_blank_seperated(t_node *node) {
    return index_of(
        tags_of_node_need_merged_when_adjacent_and_not_blank_seperated
        , tags_of_node_need_merged_when_adjacent_and_not_blank_seperated_size
        , node->tag
    ) > -1;
}

static t_node *prev_node;

t_node *tail_node_in_list(t_node *node) {
    t_node *p = node, *pre = node;

    while (p) {
        pre = p;
        p = p->next;
    }
    return pre;
}

/**
 * 1. demonstrate how to write a function accepting argument of va_list
 * 2. like vprintf(char *fmt, va_list args)
 * ===================================================================================
 */
t_node *node_create(t_node_type type, t_tag tag, int level, int nops, va_list args) {
    t_node *p;
    int i;

    if( ( p = 
            (t_node *)malloc(sizeof(t_node)) ) 
        == NULL){
        fprintf(stderr, "node_create(): out of memory");
        exit(1);
    }

    if( ( p -> ops = 
            (char **)malloc(nops * sizeof(char *)) ) 
        == NULL){
        fprintf(stderr, "node_create(): out of memory");
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

t_node *line_node_create(t_tag tag, int level, int nops, ...) {
    t_node *p;
    va_list args;
    va_start(args, nops);
    p = node_create(NODE_TYPE_LINE, tag, level, nops, args);
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
            , "%s@tag: |%s|; level: |%d|; nops: |%d|; attr: |%s|; content: |%s|\n"
            , str_padding_left("", node->level * 4)
            , get_tag_type(node->tag)
            , node->level
            , node->nops
            , node->ops[0]
            , node->ops[1]
        );
    }
    else if (node->nops >= 1) {
        fprintf(
            stderr
            , "%s@tag: |%s|; level: |%d|; nops: |%d|; attr: |%s|\n"
            , str_padding_left("", node->level * 4)
            , get_tag_type(node->tag)
            , node->level
            , node->nops
            , node->ops[0]
        );
    }
    else {
        fprintf(
            stderr
            , "%s@tag: |%s|; level: |%d|\n"
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
        , "%s>tag: %s; level: %d; parent: %s; parent-level: %d\n"
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
void traverse_nodes_with_visitor(
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

    if (new_link) {
        new_next = new_link->next;
    }

    if (new_link) {
        new_children = new_link->children;
    }

    if (ext_args_count <= 0) {
        if (new_children) {
            traverse_nodes_with_visitor(new_children, visit, 0);
        }

        if (new_next) {
            traverse_nodes_with_visitor(new_next, visit, 0);
        }
    }
    else {
        va_start(args, ext_args_count);
        post_visit = va_arg(args, void (*)(t_node *));

        if (new_children) {
            traverse_nodes_with_visitor(new_children, visit, ext_args_count, post_visit);
        }

        if (post_visit) {
            post_visit(root);
        }

        if (new_next) {
            traverse_nodes_with_visitor(new_next, visit, ext_args_count, post_visit);
        }
        va_end(args);
    }
}




/**
 * Traverse
 * ===================================================================================
 */
void traverse_nodes(t_node *root) {
    // traverse_nodes_with_visitor(root, show_node, 0);
    traverse_nodes_with_visitor(root, show_links, 0);
}




/**
 * Fix node level
 * ===================================================================================
 */
static t_link *visit_node_to_fix_level(t_node *node) {
    int level = node->level, parent_level;

    if (NODE_LEVEL_SPECIAL == level) {
        level = 0;
        if (node->parent) {
            parent_level = node->parent->level;
            if (parent_level < 0) {
                parent_level = 0;
            }
            level = parent_level + 1;
        }
    }

    node->level = level;
    return NULL;
}

void fix_node_level(t_node *root) {
    traverse_nodes_with_visitor(root, visit_node_to_fix_level, 0);
}

/**
 * Check NULL string pointers
 * ===================================================================================
 */
static t_link *visit_node_to_check_null_string_pointer(t_node *node) {
    int i = 0;
    while (i < node->nops) {
        if (!*(node->ops + i)) {
            fprintf(stderr, "@error: NULL string pointer: *(node->ops + %d)", i);
        }
        i++;
    }
    return NULL;
}

void check_null_string_pointer(t_node *root) {
    traverse_nodes_with_visitor(root, visit_node_to_check_null_string_pointer, 0);
}


/**
 * Check parent links
 * ===================================================================================
 */

static t_link *visit_node_to_check_parent_link(t_node *node) {
    if (node->prev) {
        // nodes in list must have a valid parent link
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


/**
 * Complement block nodes
 * ===================================================================================
 */

static void move_node_and_siblings_as_children_of_new_node(t_node *node, t_node *new_parent) {
    t_node *parent = node->parent, *tmp;

    // 1. insert new_uncle after parent node
    new_parent->next = parent->next;
    // 1.1 bugfix@1904110125: Segmentation fault: 11, we should check if new_parent->next is valid
    if (new_parent->next) {
        new_parent->next->prev = new_parent;
    }
    parent->next = new_parent;
    new_parent->prev = parent;
    new_parent->parent = parent->parent;

    // 2. set current node the first child of new_unclue
    new_parent->children = node;
    if (node->parent->children == node) {
        /**
         * Note: 
         * all the nodes following current node are also moved 
         * so parent's children link is set to NULL
         */
        node->parent->children = NULL;
    }
    node->parent = new_parent;

    // 3. remove connection with the previous sibling node
    if (node->prev) {
        node->prev->next = NULL;
        node->prev = NULL;
    }

    // 4. update parent links of the remained sibling nodes
    tmp = node;
    while (tmp) {
        tmp->parent = node->parent;
        tmp = tmp->next;
    }
}

static t_link *visit_indented_node_to_complement_parent(t_node *node) {
    t_node *parent, *new_uncle, *tmp;

    // show_node(node);
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
        case TAG_QUOTE_P:
            if (parent && node->level != parent->level) {
                new_uncle = block_node_create(
                    get_parent_block_node_tag(node->tag)
                    , get_parent_block_node_level(node)

                    /**
                     * 1. notes: parent block node should have attributes
                     * 2. otherwise, you may get message "Segmentation Fault"
                     * 3. the error message occurs more frequently especially under Windows
                     */
                    , 1
                    , *node->ops
                );

                // show_node(new_uncle);
                move_node_and_siblings_as_children_of_new_node(node, new_uncle);
            }
            break;

        case TAG_QUOTE_BLANK:
            if (parent && node->level != parent->level) {
                new_uncle = block_node_create(
                    get_parent_block_node_tag(node->tag)
                    , get_parent_block_node_level(node)
                    , 0
                );

                // show_node(new_uncle);
                move_node_and_siblings_as_children_of_new_node(node, new_uncle);
            }
            break;
        default:
            break;
    }

    return NULL;
}

static t_link *visit_tr_node_to_complement_parent(t_node *node) {
    t_node *parent, *new_uncle, *tmp;
    t_node *p;

    if (is_block_node(node)) {
        return NULL;
    }

    parent = node->parent;

    if (!parent) {
        fprintf(stderr, "==NULL parent link==\n");
    }

    switch (node->tag) {
        case TAG_TR:
            if (
                    parent 
                    && node->level <= parent->level
                    && node->level >= 1
                ) {
                new_uncle = block_node_create(
                    get_parent_block_node_tag(node->tag)
                    , get_parent_block_node_level(node)
                    , 0
                );

                move_node_and_siblings_as_children_of_new_node(node, new_uncle);
            }
            break;
        default:
            break;
    }

    return NULL;
}

void complement_block_nodes(t_node *root) {
    // log_str("===========fix_parent_links===========");
    check_parent_links(root);

    // log_str("===========complement_block_nodes===========");
    traverse_nodes_with_visitor(root, visit_indented_node_to_complement_parent, 0);
    traverse_nodes_with_visitor(root, visit_tr_node_to_complement_parent, 0);
}




/**
 * Rearrange block nodes
 * ===================================================================================
 */

static t_link *move_as_the_tail(t_node *target, t_node *node) {
    t_link *new_link = NULL;
    t_node *tail = target;

    if (!tail || !node) {
        fprintf(stderr, "move_as_tail(): NULL target or NULL node\n");
        return NULL;
    }

    new_link = (t_link *)malloc(sizeof(t_node));

    if (node->parent && node->parent->children == node) {
        node->parent->children = node->next;
    }
    node->parent = tail->parent;

    if (node->next) {
        node->next->prev = node->prev;
    }
    if (node->prev) {
        node->prev->next = node->next;
    }

    new_link->children = node->children;
    new_link->next = node->next;

    tail->next = node;
    node->prev = tail;
    // node is now be the tail node
    node->next = NULL;

    return new_link;
}

static t_link *visit_to_rearrange_block_node(t_node *node) {
    t_link *new_link = NULL;
    t_node *p, *tail, *tmp;

    if (node->parent == node) {
        log_str("visit_to_rearrange_block_node() 1: parent self-looping");
        show_node(node);
    }

    if (is_block_node(node)) {

        /* indented block node */
        if (node->level > 0) {
            if (!prev_node) {
                log_str("prev_node NULL");
            }

            p = prev_node;

            // search the closest parent list node
            while (p) {

                if (p->parent == p) {
                    log_str("visit_to_rearrange_block_node() 2: parent self-looping");
                    show_node(node);
                }

                if (p->level == node->level - 1 && is_line_list_node(p)) {
                    break;
                } 

                p = p->parent;
            }

            if (!is_line_list_node(p)) {
                fprintf(stderr, "visit_to_rearrange_block_nod(): error containing list node\n");
            }


            new_link = (t_link *)malloc(sizeof(t_node));
            
            if (!p->children) {
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
                tail = tail_node_in_list(p->children);
                new_link = move_as_the_tail(tail, node);
            }

        }
        else if (
                TAG_BLOCK_BLANK == node->tag
                || TAG_ERROR == node->tag
            ) {
            p = prev_node;

            // search the closest parent block node or line-level list node or table-ceil node
            while (p) {
                if (
                        ( 
                            is_block_node(p) 
                            /**
                             * 1. TAG_ERROR, like TAG_H, has no children
                             * 2. so, the closest parent block node must not be TAG_ERROR
                             */
                            && TAG_ERROR != p->tag 
                        )
                        || is_line_list_node(p)
                        || is_tableceil_node(p)
                    ) {
                    break;
                } 

                p = p->parent;
            }

            if (!is_block_node(p) && !is_line_list_node(p) && !is_tableceil_node(p)) {
                log_str("visit_to_rearrange_block_node(): p is neither a block node, nor a line-level list node");
                // show_node(p);
            }

            if (p->children) {
                tail = tail_node_in_list(p->children);
                new_link = move_as_the_tail(tail, node);

                // update the level
                node->level = tail->level;
                tmp = node->children;
                while (tmp) {
                    tmp->level = node->level;
                    tmp = tmp->next;
                }
            }

        }

    }

    // save previous visited node
    prev_node = node;

    return new_link;
}

void rearrange_block_nodes(t_node *root) {
    prev_node = NULL;
    traverse_nodes_with_visitor(root, visit_to_rearrange_block_node, 0);
}




/**
 * Merge nodes
 * ===================================================================================
 */

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

    if (!is_block_node(node)) {
        // Note: prev_node should always be updated even if it's not a block node
        prev_node = node;
        return new_link;
    }

    if (node->prev && node->tag == node->prev->tag) {
        if (
            is_node_need_merged_when_adjacent(node)
            || (
                    (
                        is_node_need_merged_when_adjacent_and_not_blank_seperated(node) 
                        && !is_blank_node(prev_node)
                    )
                || 
                    (
                        is_node_need_merged_when_adjacent_and_not_blank_seperated(node) 
                            && is_blank_node(prev_node)
                            && !prev_node->prev
                    )
                )
            ) {
            // show_node(prev_node);
            new_link = merge_children_then_clean_the_useless(node->prev, node);
        }
    }

    prev_node = node;

    return new_link;
}

void merge_block_nodes(t_node *root) {
    prev_node = NULL;
    traverse_nodes_with_visitor(root, visit_to_merge_block_nodes, 0);
}



