#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "htmltags.h"
#include "node.h"

static t_tag block_node_tags[] = {
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
static int block_node_tags_size = sizeof(block_node_tags) / sizeof(int);
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
 */
static void traverse_nodes_with_visitor(t_node *root, t_link* (*visit)(t_node *)) {
    t_link *new_link;
    t_node *new_children;
    t_node *new_next;

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

    traverse_nodes_with_visitor(new_children, visit);
    traverse_nodes_with_visitor(new_next, visit);
}

void traverse_nodes(t_node *root) {
    // traverse_nodes_with_visitor(root, show_node);
    traverse_nodes_with_visitor(root, show_links);
}

static int index_of(t_tag tag) {
    int i;
    for (i = 0; i < block_node_tags_size; i++) {
        if (tag == block_node_tags[i]) {
            return i;
        }
    }
    return -1;
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
    traverse_nodes_with_visitor(root, visit_node_to_check_parent_link);
}


int is_block_node(t_node *node) {
    return index_of(node->tag) > -1;
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
    traverse_nodes_with_visitor(root, visit_nonblock_node);
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
    traverse_nodes_with_visitor(root, visit_to_rearrange_block_node);
}


