#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "htmltags.h"
#include "nodetree.h"
#include "strbuf.h"

typedef struct {
    char *(*pre_parse)(t_node *);
    char *(*post_parse)(t_node *);
} t_parser;

static char *block_ul_pre_parse(t_node *);
static char *block_ul_post_parse(t_node *);
static char *block_ol_pre_parse(t_node *);
static char *block_ol_post_parse(t_node *);
static char *block_quote_ul_pre_parse(t_node *);
static char *block_quote_ul_post_parse(t_node *);
static char *block_quote_ol_pre_parse(t_node *);
static char *block_quote_ol_post_parse(t_node *);
static char *li_pre_parse(t_node *);
static char *li_post_parse(t_node *);

static t_parser *get_parser(t_node *node) {
    t_parser *p;

    if( ( p = 
            (t_parser *)malloc(sizeof(t_parser)) ) 
        == NULL){
        fprintf(stderr, "get_parser: out of memory\n");
        exit(1);
    }

    p->pre_parse = NULL;
    p->post_parse = NULL;

    switch (node->tag) {
        case TAG_BLOCK_UL:
        case TAG_BLOCK_INDENT_UL:
            p->pre_parse = block_ul_pre_parse;
            p->post_parse = block_ul_post_parse;
            break;
        case TAG_BLOCK_OL:
        case TAG_BLOCK_INDENT_OL:
            p->pre_parse = block_ol_pre_parse;
            p->post_parse = block_ol_post_parse;
            break;
        case TAG_BLOCK_QUOTE_UL:
            p->pre_parse = block_quote_ul_pre_parse;
            p->post_parse = block_quote_ul_post_parse;
            break;
        case TAG_BLOCK_QUOTE_OL:
            p->pre_parse = block_quote_ol_pre_parse;
            p->post_parse = block_quote_ol_post_parse;
            break;
        case TAG_UL:
        case TAG_OL:
        case TAG_INDENT_UL:
        case TAG_INDENT_OL:
        case TAG_QUOTE_UL:
        case TAG_QUOTE_OL:
            p->pre_parse = li_pre_parse;
            p->post_parse = li_post_parse;
            break;

        default:
            break;
    }

    return p;
}

static t_link *pre_visit_parse(t_node *node) {
    t_parser *p = get_parser(node);
    char *output = NULL;
    if (p->pre_parse) {
        output = p->pre_parse(node);
        fprintf(stderr, "pre_visit_parse: %s\n", output);
    }
    return NULL;
}

static void post_visit_parse(t_node *node) {
    t_parser *p = get_parser(node);
    char *output = NULL;
    if (p->post_parse) {
        output = p->post_parse(node);
        fprintf(stderr, "post_visit_parse: %s\n", output);
    }
    return;
}

void parse_node_tree(t_node *root) {
    traverse_nodes_with_visitor(root, pre_visit_parse, 1, post_visit_parse);
}



/**
 * Parsers
 */

static char *block_ul_pre_parse(t_node *node) {
    return str_format(
        "%s<ul>"
        , str_padding_left("", node->level * 4)
    );
}

static char *block_ul_post_parse(t_node *node) {
    return str_format(
        "%s</ul>"
        , str_padding_left("", node->level * 4)
    );
}

static char *block_ol_pre_parse(t_node *node) {
    return str_format(
        "%s<ol>"
        , str_padding_left("", node->level * 4)
    );
}

static char *block_ol_post_parse(t_node *node) {
    return str_format(
        "%s</ol>"
        , str_padding_left("", node->level * 4)
    );
}

static char *block_quote_ul_pre_parse(t_node *node) {
    return str_format(
        "<blockquote>\n%s<ul>"
        , str_padding_left("", node->level * 4)
    );
}

static char *block_quote_ul_post_parse(t_node *node) {
    return str_format(
        "%s</ul\n</blockquote>"
        , str_padding_left("", node->level * 4)
    );
}

static char *block_quote_ol_pre_parse(t_node *node) {
    return str_format(
        "<blockquote>\n%s<ol>"
        , str_padding_left("", node->level * 4)
    );
}

static char *block_quote_ol_post_parse(t_node *node) {
    return str_format(
        "%s</ol>\n</blockquote>"
        , str_padding_left("", node->level * 4)
    );
}

static char *li_pre_parse(t_node *node) {
    return str_format(
        "%s<li%s>%s"
        , str_padding_left("", node->level * 4)
        , *node->ops
        , *(node->ops + 1)
    );
}

static char *li_post_parse(t_node *node) {
    return str_format(
        "%s</li>"
        , str_padding_left("", node->level * 4)
    );
}
