#ifndef HEADER_TAGSTACK
#include "tagstack.h"
#endif

typedef enum {
    NODE_TYPE_BLOCK,
    NODE_TYPE_INLINE
} t_node_type;

/**
 * 1. node can be used for block node and inline node
 * 2.
 */
typedef struct node {
    t_node_type type;
    t_tag tag;
    char *attr;
    int level;

    /* extended fields */
    int nops;
    char **ops;
    struct node *prev;
    struct node *next;
    struct node *parent;
    struct node *children;
} t_node;

t_node *node_create(t_node_type type, t_tag tag, int level, int nops, va_list args);
t_node *block_node_create(t_tag tag, int level, int nops, ...);
t_node *inline_node_create(t_tag tag, int level, int nops, ...);
t_node *tail_node_in_list(t_node *node);
void node_show(t_node *node);
void node_traverse(t_node *root);
void complement_block_nodes(t_node *root);


/*
char* blocknode_parse(t_blocknode *node);
void blocklist_parse(void);
*/





/* blocknode stack */
/*
#define BLOCKNODE_STACK_SIZE 20

typedef struct { 
    int size;
    t_blocknode *arr[TAG_STACK_SIZE];
} t_blocknode_stack;

void blocknode_init_stack(void);
t_blocknode *blocknode_top_stack(void);
int blocknode_empty_stack(void);
int blocknode_full_stack(void);
int blocknode_in_stack(t_tag tag, int level);
void blocknode_push_stack(t_blocknode *node);
void blocknode_show_stack(void);
t_blocknode *blocknode_pop_stack(void);
t_blocknode *blocknode_shift_stack(void);
*/
