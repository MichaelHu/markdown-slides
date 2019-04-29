#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "strutils.h"
#include "logutils.h"
#include "nodetree.h"
#include "strbuf.h"

typedef struct {
    char *(*pre_parse)(t_node *);
    char *(*post_parse)(t_node *);
} t_parser;

typedef t_link *(*t_pre_visit)(t_node *);
typedef void (*t_post_visit)(t_node *);
typedef struct {
    t_pre_visit pre_visit;
    t_post_visit post_visit;
} t_visitor;



/**
 * Parser prototypes
 */

static char *h_pre_parse(t_node *);
static char *h_post_parse(t_node *);
static char *quote_h_pre_parse(t_node *);
static char *quote_h_post_parse(t_node *);

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
static char *quote_p_pre_parse(t_node *);
static char *quote_p_post_parse(t_node *);
static char *text_pre_parse(t_node *);
static char *text_post_parse(t_node *);

static char *block_pre_pre_parse(t_node *);
static char *block_pre_post_parse(t_node *);
static char *pre_pre_parse(t_node *);
static char *pre_post_parse(t_node *);

static char *blank_pre_parse(t_node *);
static char *blank_post_parse(t_node *);

static char *raw_text_pre_parse(t_node *);
static char *raw_text_post_parse(t_node *);

static char *pairedblock_pre_parse(t_node *);
static char *pairedblock_post_parse(t_node *);

static char *link_pre_parse(t_node *);
static char *link_post_parse(t_node *);

static char *inline_code_pre_parse(t_node *);
static char *inline_code_post_parse(t_node *);

static char *inline_img_pre_parse(t_node *);
static char *inline_img_post_parse(t_node *);

static char *inline_em_pre_parse(t_node *);
static char *inline_em_post_parse(t_node *);

static char *inline_strong_pre_parse(t_node *);
static char *inline_strong_post_parse(t_node *);

static char *default_pre_parse(t_node *);
static char *default_post_parse(t_node *);

/**
 * Visitor prototypes
 */
static t_link *block_blank_pre_visit(t_node *);
static void block_blank_post_visit(t_node *);


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
        case TAG_QUOTE_H:
            p->pre_parse = quote_h_pre_parse;
            p->post_parse = quote_h_post_parse;
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
            if (node->prev && node->prev->tag != TAG_INLINE_ELEMENTS) {
                p->pre_parse = p_pre_parse;
                p->post_parse = p_post_parse;
            }
            break;
        case TAG_BLOCK_QUOTE_P:
            p->pre_parse = quote_p_pre_parse;
            p->post_parse = quote_p_post_parse;
            break;

        case TAG_INLINE_TEXT:
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


        /**
         * raw_text parsers
         */
        case TAG_RAW_TEXT:
            p->pre_parse = raw_text_pre_parse;
            p->post_parse = raw_text_post_parse;
            break;


        /**
         * pairedblock parsers
         */
        case TAG_SCRIPTBLOCK:
        case TAG_STYLEBLOCK:
        case TAG_SVGBLOCK:
            p->pre_parse = pairedblock_pre_parse;
            p->post_parse = pairedblock_post_parse;
            break;


        /**
         * some inline element parsers
         */
        case TAG_INLINE_LINK:
            p->pre_parse = link_pre_parse;
            p->post_parse = link_post_parse;
            break;
        case TAG_INLINE_CODE:
            p->pre_parse = inline_code_pre_parse;
            p->post_parse = inline_code_post_parse;
            break;
        case TAG_INLINE_IMAGE:
            p->pre_parse = inline_img_pre_parse;
            p->post_parse = inline_img_post_parse;
            break;
        case TAG_INLINE_EM:
            p->pre_parse = inline_em_pre_parse;
            p->post_parse = inline_em_post_parse;
            break;
        case TAG_INLINE_STRONG:
            p->pre_parse = inline_strong_pre_parse;
            p->post_parse = inline_strong_post_parse;
            break;


        /**
         * blank line parsers
         */
        case TAG_BLOCK_BLANK:
            break;

        case TAG_BLANK:
            p->pre_parse = blank_pre_parse;
            p->post_parse = blank_post_parse;
            break;


        /**
         * 1. these line-level tags contain tag TAG_INLINE_TEXT
         * 2. so, they don't need to output
         */
        case TAG_P:
        case TAG_INDENT_P:
        case TAG_INDENT_TEXT:
        case TAG_QUOTE_P:

        /**
         * other tags use default parser 
         */
        default:
            p->pre_parse = default_pre_parse;
            p->post_parse = default_post_parse;
            break;
    }

    return p;
}

static t_visitor *get_visitor(t_node *node) {
    t_visitor *p = NULL;

    if( ( p = 
            (t_visitor *)malloc(sizeof(t_visitor)) ) 
        == NULL){
        fprintf(stderr, "get_visitor: out of memory\n");
        exit(1);
    }

    p->pre_visit = NULL;
    p->post_visit = NULL;

    switch (node->tag) {
        case TAG_BLOCK_BLANK:
            p->pre_visit = block_blank_pre_visit;
            p->post_visit = block_blank_post_visit;
            break;

        default:
            break;
    }

    return p;
}


static t_link *pre_visit_parse(t_node *node) {
    t_parser *p = get_parser(node);
    t_visitor *v = get_visitor(node);
    t_link *new_link = NULL;
    char *output = NULL;

    if (p->pre_parse) {
        output = p->pre_parse(node);
        // fprintf(stderr, "pre_visit_parse: %s\n", output);
        fprintf(stdout, "%s", output);
    }

    if (v->pre_visit) {
        new_link = v->pre_visit(node);
    }

    return new_link;
}

static void post_visit_parse(t_node *node) {
    t_parser *p = get_parser(node);
    t_visitor *v = get_visitor(node);
    char *output = NULL;

    if (p->post_parse) {
        output = p->post_parse(node);
        // fprintf(stderr, "post_visit_parse: %s\n", output);
        fprintf(stdout, "%s", output);
    }

    if (v->post_visit) {
        v->post_visit(node);
    }

    return;
}

void parse_node_tree(t_node *root) {
    traverse_nodes_with_visitor(root, pre_visit_parse, 1, post_visit_parse);
}


/**
 * ==========================================================
 * 1. Parsers
 */


/**
 * header parsers
 */
static char *h_pre_parse(t_node *node) {
    return str_format(
        "\n%s<h%d%s>"
        , str_padding_left("", node->level * 4)
        , count_of_char(*(node->ops + 2), '#') 
        , *node->ops 
    );
};
static char *h_post_parse(t_node *node) {
    return str_format(
        "</h%d>\n"
        , count_of_char(*(node->ops + 2), '#') 
    );
}

static char *quote_h_pre_parse(t_node *node) {
    return str_format(
        "\n%s<blockquote><h%d%s>%s"
        , str_padding_left("", node->level * 4)
        , count_of_char(*(node->ops + 2), '#') 
        , *node->ops 
        , *(node->ops + 1)
    );
};
static char *quote_h_post_parse(t_node *node) {
    return str_format(
        "</h%d></blockquote>\n"
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
        "\n%s<li%s>"
        , str_padding_left("", node->level * 4)
        , *node->ops
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
        "\n%s<%s%s>"
        , str_padding_left("", node->level * 4)
        , node->parent->prev ? "td" : "th"
        , *node->ops
    );
}

static char *td_post_parse(t_node *node) {
    return str_format(
        "\n%s</%s>\n"
        , str_padding_left("", node->level * 4)
        , node->parent->prev ? "td" : "th"
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

static char *quote_p_pre_parse(t_node *node) {
    return str_format(
        "\n%s<blockquote><p%s>"
        , str_padding_left("", node->level * 4)
        , *node->ops
    );
}

static char *quote_p_post_parse(t_node *node) {
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
        "\n<pre%s><code>"
        , *node->ops
    );
}

static char *block_pre_post_parse(t_node *node) {
    return str_format(
        // Note: no prefix blank padding
        "</code></pre>\n"
    );
}

static char *pre_pre_parse(t_node *node) {
    char *format = "%s\n";

    // when last node, no newline
    if (!node->next) {
        format = "%s";
    }

    return str_format(
        format
        , html_escape(str_trim_right(*(node->ops + 1)))
    );
}

static char *pre_post_parse(t_node *node) {
    return str_format(
        ""
    );
}


/**
 * raw_text parsers
 */
static char *raw_text_pre_parse(t_node *node) {
    return str_format(
        "\n%s%s%s"
        , str_padding_left("", node->level * 4)
        , *node->ops
        , *(node->ops + 1)
    );
}

static char *raw_text_post_parse(t_node *node) {
    return str_format(
        ""
    );
}


/**
 * pairedblock parsers
 */
static char *pairedblock_pre_parse(t_node *node) {
    return str_format(
        "\n%s%s"
        , str_padding_left("", node->level * 4)
        , *node->ops
    );
}

static char *pairedblock_post_parse(t_node *node) {
    return str_format(
        "%s%s\n"
        , str_padding_left("", node->level * 4)
        , *(node->ops + 1)
    );
}


/**
 * blank line parsers
 */
static char *blank_pre_parse(t_node *node) {
    return str_format(
        "\n"
    );
}

static char *blank_post_parse(t_node *node) {
    return str_format(
        ""
    );
}



/**
 * inline element parsers
 */
static char *link_pre_parse(t_node *node) {
    char *attr = *(node->ops);
    char *content = *(node->ops + 1);
    int is_simple_link = 0 == strlen(attr);
    return str_format(
        is_simple_link
            ? "<a href=\"%s\">%s</a>"
            : "<a%s>%s</a>"
        , is_simple_link ? html_escape(content) : attr
        , html_escape(content)
    );
}

static char *link_post_parse(t_node *node) {
    return str_format(
        ""
    );
}

static char *inline_code_pre_parse(t_node *node) {
    char *attr = *(node->ops);
    char *content = *(node->ops + 1);
    return str_format(
        "<code%s>%s</code>"
        , attr
        , html_escape(content)
    );
}

static char *inline_code_post_parse(t_node *node) {
    return str_format(
        ""
    );
}

static char *inline_img_pre_parse(t_node *node) {
    char *attr = *(node->ops);
    char *content = *(node->ops + 1);
    return str_format(
        "<img%s>"
        , attr
    );
}

static char *inline_img_post_parse(t_node *node) {
    return str_format(
        ""
    );
}

static char *inline_em_pre_parse(t_node *node) {
    char *attr = *(node->ops);
    return str_format(
        "<em%s>"
        , attr
    );
}

static char *inline_em_post_parse(t_node *node) {
    return "</em>";
}

static char *inline_strong_pre_parse(t_node *node) {
    char *attr = *(node->ops);
    return str_format(
        "<strong%s>"
        , attr
    );
}

static char *inline_strong_post_parse(t_node *node) {
    return "</strong>";
}

/**
 * default parsers
 */
static char *default_pre_parse(t_node *node) {
    return "";
}

static char *default_post_parse(t_node *node) {
    return "";
}


/**
 * ==========================================================
 * 2. Visitors
 */

static t_link *block_blank_pre_visit(t_node *node) {
    t_link *new_link = NULL;

    /**
     * 1. only if the block_blank node is under TAG_BLOCK_PRE or TAG_BLOCK_INDENT_PRE,
     * 2. and is not the last child 
     * 3. then, we output the blank lines  
     * 4. otherwise, we output nothing
     */
    if (
            (
            node->parent->tag != TAG_BLOCK_PRE 
            && node->parent->tag != TAG_BLOCK_INDENT_PRE 
            )
            || !node->next
       ) {
        new_link = (t_link *)malloc(sizeof(t_link)); 
        new_link->children = NULL;
        new_link->next = node->next;
    }
    else {
    }

    return new_link;
}

static void block_blank_post_visit(t_node *node) {
    return;
}



