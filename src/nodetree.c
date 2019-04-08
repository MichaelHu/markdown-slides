#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "strutils.h"
#include "htmltags.h"
#include "nodetree.h"
#include "strbuf.h"

typedef struct {
    char *(*pre_parse)(t_node *);
    char *(*post_parse)(t_node *);
} t_parser;

static char *h_pre_parse(t_node *);
static char *h_post_parse(t_node *);

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

static char *table_pre_parse(t_node *);
static char *table_post_parse(t_node *);
static char *tr_pre_parse(t_node *);
static char *tr_post_parse(t_node *);
static char *td_pre_parse(t_node *);
static char *td_post_parse(t_node *);

static char *p_pre_parse(t_node *);
static char *p_post_parse(t_node *);
static char *blockquote_p_pre_parse(t_node *);
static char *blockquote_p_post_parse(t_node *);
static char *text_pre_parse(t_node *);
static char *text_post_parse(t_node *);

static char *block_pre_pre_parse(t_node *);
static char *block_pre_post_parse(t_node *);
static char *pre_pre_parse(t_node *);
static char *pre_post_parse(t_node *);


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

        /**
         * header
         */
        case TAG_H:
            p->pre_parse = h_pre_parse;
            p->post_parse = h_post_parse;
            break;


        /**
         * list 
         */
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

        /**
         * table 
         */
        case TAG_TABLE:
            p->pre_parse = table_pre_parse;
            p->post_parse = table_post_parse;
            break;
        case TAG_TR:
            p->pre_parse = tr_pre_parse;
            p->post_parse = tr_post_parse;
            break;
        case TAG_TD:
            p->pre_parse = td_pre_parse;
            p->post_parse = td_post_parse;
            break;

        /**
         * paragraph, indented paragraph, indented text, and blockquote paragraph parsers
         */
        case TAG_BLOCK_P:
            p->pre_parse = p_pre_parse;
            p->post_parse = p_post_parse;
            break;
        case TAG_BLOCK_INDENT_TEXT:
            /**
             * 1. parse only if it's not the first child
             * 2. if it's the first child, it outputs nothing
             */
            if (node->prev) {
                p->pre_parse = p_pre_parse;
                p->post_parse = p_post_parse;
            }
            break;
        case TAG_BLOCK_QUOTE_P:
            p->pre_parse = blockquote_p_pre_parse;
            p->post_parse = blockquote_p_post_parse;
            break;
        case TAG_P:
        case TAG_INDENT_P:
        case TAG_QUOTE_P:
        case TAG_INDENT_TEXT:
            p->pre_parse = text_pre_parse;
            p->post_parse = text_post_parse;
            break;


        /**
         * code parsers
         */
        case TAG_BLOCK_PRE:
        case TAG_BLOCK_INDENT_PRE:
            p->pre_parse = block_pre_pre_parse;
            p->post_parse = block_pre_post_parse;
            break;
        case TAG_PRE:
        case TAG_INDENT_PRE:
            p->pre_parse = pre_pre_parse;
            p->post_parse = pre_post_parse;
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
        // fprintf(stderr, "pre_visit_parse: %s\n", output);
        fprintf(stderr, "%s", output);
    }
    return NULL;
}

static void post_visit_parse(t_node *node) {
    t_parser *p = get_parser(node);
    char *output = NULL;
    if (p->post_parse) {
        output = p->post_parse(node);
        // fprintf(stderr, "post_visit_parse: %s\n", output);
        fprintf(stderr, "%s", output);
    }
    return;
}

void parse_node_tree(t_node *root) {
    traverse_nodes_with_visitor(root, pre_visit_parse, 1, post_visit_parse);
}



/**
 * ==========================================================
 * Parsers
 */


/**
 * header parsers
 */
static char *h_pre_parse(t_node *node) {
    return str_format(
        "\n%s<h%d%s>%s"
        , str_padding_left("", node->level * 4)
        , count_of_char(*(node->ops + 2), '#') 
        , *node->ops 
        , *(node->ops + 1)
    );
};
static char *h_post_parse(t_node *node) {
    return str_format(
        "</h%d>\n"
        , count_of_char(*(node->ops + 2), '#') 
    );
}


/**
 * list parsers
 */
static char *block_ul_pre_parse(t_node *node) {
    return str_format(
        "\n%s<ul>\n"
        , str_padding_left("", node->level * 4)
    );
}

static char *block_ul_post_parse(t_node *node) {
    return str_format(
        "\n%s</ul>\n"
        , str_padding_left("", node->level * 4)
    );
}

static char *block_ol_pre_parse(t_node *node) {
    return str_format(
        "\n%s<ol>\n"
        , str_padding_left("", node->level * 4)
    );
}

static char *block_ol_post_parse(t_node *node) {
    return str_format(
        "\n%s</ol>\n"
        , str_padding_left("", node->level * 4)
    );
}

static char *block_quote_ul_pre_parse(t_node *node) {
    return str_format(
        "\n<blockquote>\n%s<ul>\n"
        , str_padding_left("", node->level * 4)
    );
}

static char *block_quote_ul_post_parse(t_node *node) {
    return str_format(
        "\n%s</ul>\n</blockquote>\n"
        , str_padding_left("", node->level * 4)
    );
}

static char *block_quote_ol_pre_parse(t_node *node) {
    return str_format(
        "\n<blockquote>\n%s<ol>\n"
        , str_padding_left("", node->level * 4)
    );
}

static char *block_quote_ol_post_parse(t_node *node) {
    return str_format(
        "\n%s</ol>\n</blockquote>\n"
        , str_padding_left("", node->level * 4)
    );
}

static char *li_pre_parse(t_node *node) {
    return str_format(
        "\n%s<li%s>%s"
        , str_padding_left("", node->level * 4)
        , *node->ops
        , *(node->ops + 1)
    );
}

static char *li_post_parse(t_node *node) {
    return str_format(
        "\n%s</li>\n"
        , str_padding_left("", node->level * 4)
    );
}






/**
 * table parsers
 */
static char *table_pre_parse(t_node *node) {
    return str_format(
        "\n%s<table>\n"
        , str_padding_left("", node->level * 4)
    );
}

static char *table_post_parse(t_node *node) {
    return str_format(
        "\n%s</table>\n"
        , str_padding_left("", node->level * 4)
    );
}

static char *tr_pre_parse(t_node *node) {
    return str_format(
        "\n%s<tr>\n"
        , str_padding_left("", node->level * 4)
    );
}

static char *tr_post_parse(t_node *node) {
    return str_format(
        "\n%s</tr>\n"
        , str_padding_left("", node->level * 4)
    );
}

static char *td_pre_parse(t_node *node) {
    return str_format(
        "\n%s<td%s>%s"
        , str_padding_left("", node->level * 4)
        , *node->ops
        , *(node->ops + 1)
    );
}

static char *td_post_parse(t_node *node) {
    return str_format(
        "\n%s</td>\n"
        , str_padding_left("", node->level * 4)
    );
}



/**
 * paragraph, indented paragraph, indented text, blockquote paragraph parsers
 */
static char *p_pre_parse(t_node *node) {
    return str_format(
        "\n%s<p%s>"
        , str_padding_left("", node->level * 4)
        , *node->ops
    );
}

static char *p_post_parse(t_node *node) {
    return str_format(
        "\n%s</p>\n"
        , str_padding_left("", node->level * 4)
    );
}

static char *blockquote_p_pre_parse(t_node *node) {
    return str_format(
        "\n%s<blockquote><p%s>"
        , str_padding_left("", node->level * 4)
        , *node->ops
    );
}

static char *blockquote_p_post_parse(t_node *node) {
    return str_format(
        "\n%s</p></blockquote>"
        , str_padding_left("", node->level * 4)
    );
}

static char *text_pre_parse(t_node *node) {
    return str_format(
        "%s"
        , *(node->ops + 1)
    );
}

static char *text_post_parse(t_node *node) {
    return str_format(
        ""
    );
}


/**
 * code parsers
 */
static char *block_pre_pre_parse(t_node *node) {
    return str_format(
        "\n%s<pre><code%s>"
        , str_padding_left("", node->level * 4)
        , *node->ops
    );
}

static char *block_pre_post_parse(t_node *node) {
    return str_format(
        "%s</code></pre>\n"
        , str_padding_left("", node->level * 4)
    );
}

static char *pre_pre_parse(t_node *node) {
    return str_format(
        "%s\n"
        , str_trim_right(*(node->ops + 1))
    );
}

static char *pre_post_parse(t_node *node) {
    return str_format(
        ""
    );
}


