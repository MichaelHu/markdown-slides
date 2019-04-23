#ifndef HEADER_TAGSTACK
#include "tagstack.h"
#endif

#define HEADER_NODE

#define NODE_LEVEL_SPECIAL 99999

typedef enum {
    NODE_TYPE_BLOCK,
    NODE_TYPE_LINE,
    NODE_TYPE_INLINE
} t_node_type;

/**
 * 1. node can be used for block node and inline node
 * 2.
 */
typedef struct node {
    t_node_type type;
    t_tag tag;
    int level;

    /* extended fields */
    int nops;
    char **ops;
    struct node *prev;
    struct node *next;
    struct node *parent;
    struct node *children;
} t_node;

typedef struct {
    t_node *next;
    t_node *children;
} t_link;


t_node *node_create(t_node_type type, t_tag tag, int level, int nops, va_list args);
t_node *block_node_create(t_tag tag, int level, int nops, ...);
t_node *line_node_create(t_tag tag, int level, int nops, ...);
t_node *inline_node_create(t_tag tag, int level, int nops, ...);
t_node *tail_node_in_list(t_node *node);
t_link *show_node(t_node *node);
void traverse_nodes_with_visitor(
    t_node *root
    , t_link* (*visit)(t_node *)
    , int ext_args_count
    , ...
);
void traverse_nodes(t_node *root);
void check_null_string_pointer(t_node *root);
void fix_node_level(t_node *root);
void complement_block_nodes(t_node *root);
void rearrange_block_nodes(t_node *root);
void merge_block_nodes(t_node *root);

