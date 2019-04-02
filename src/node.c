#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "htmltags.h"
#include "node.h"

static t_tag block_node_tags[] = {
    TAG_ROOT
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
};
static int block_node_tags_size = sizeof(block_node_tags) / sizeof(int);

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
    if (!node->nops) {
        fprintf(
            stderr
            , "%stag: %s; level: %d\n"
            , str_padding_left("", node->level * 4)
            , get_tag_type(node->tag)
            , node->level
        );
    }
    else if (node->nops == 2) {
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
    else if (node->nops == 3) {
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
static void node_traverse_with_visitor(t_node *root, void (*visit)(t_node *)) {
    if (!root) {
        return;
    }

    if (visit) {
        visit(root);
    }

    node_traverse_with_visitor(root->children, visit);
    node_traverse_with_visitor(root->next, visit);
}

void traverse_nodes(t_node *root) {
    node_traverse_with_visitor(root, show_node);
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

int is_block_node(t_node *node) {
    return index_of(node->tag) > -1;
}

void visit_nonblock_node(t_node *node) {
    if (!is_block_node(node)) {
        show_node(node);
    }
}

void complement_block_nodes(t_node *root) {
    fprintf(stderr, "===========complement_block_nodes===========\n");
    node_traverse_with_visitor(root, visit_nonblock_node);
}

t_node *tail_node_in_list(t_node *node) {
    t_node *p = node, *pre = node;

    while (p) {
        pre = p;
        p = p->next;
    }
    return pre;
}


