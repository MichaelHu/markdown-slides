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

void show_node(t_node *node) {
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
 */
static void traverse_nodes_with_visitor(t_node *root, void (*visit)(t_node *)) {
    if (!root) {
        return;
    }

    if (visit) {
        visit(root);
    }

    traverse_nodes_with_visitor(root->children, visit);
    traverse_nodes_with_visitor(root->next, visit);
}

void traverse_nodes(t_node *root) {
    traverse_nodes_with_visitor(root, show_node);
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
static void visit_node_to_check_parent_link(t_node *node) {
    if (node->prev) {
        if (!node->parent) {
            fprintf(stderr, "==parent link error==\n");
            show_node(node);
        }
    }
}

static void check_parent_links(t_node *root) {
    traverse_nodes_with_visitor(root, visit_node_to_check_parent_link);
}


int is_block_node(t_node *node) {
    return index_of(node->tag) > -1;
}

void visit_nonblock_node(t_node *node) {
    t_node *parent, *new_uncle, *tmp;

    if (is_block_node(node)) {
        return;
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

                // 1. prepend new_uncle
                new_uncle->next = parent->next;
                new_uncle->next->prev = new_uncle;

                // 2. append new_uncle
                parent->next = new_uncle;
                new_uncle->prev = parent;
                new_uncle->parent = parent->parent;

                // 3. set current node the first child of new_unclue
                new_uncle->children = node;
                node->parent = new_uncle;

                // 4. remove connection with the previous sibling node
                node->prev->next = NULL;
                node->prev = NULL;

                // 5. update parent links of the remained sibling nodes
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


