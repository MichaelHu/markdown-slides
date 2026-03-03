#include <stddef.h>
#include "../src/node.h"
#include "test-lib/test-utils.h"

static void test_block_node_create(void) {
    test_util_log_str("\n# test_block_node_create");
    
    t_node *node = block_node_create(TAG_H, 0, 1, "test");
    test_util_int_equal("test 1: node tag", node->tag, TAG_H);
    test_util_int_equal("test 2: node level", node->level, 0);
    test_util_str_equal("test 3: node content", *node->ops, "test");
    
    // 注意：node 结构的内存释放需要在更高层次的代码中处理
}

static void test_line_node_create(void) {
    test_util_log_str("\n# test_line_node_create");
    
    t_node *node = line_node_create(TAG_P, 0, 1, "test");
    test_util_int_equal("test 1: node tag", node->tag, TAG_P);
    test_util_int_equal("test 2: node level", node->level, 0);
    test_util_str_equal("test 3: node content", *node->ops, "test");
    
    // 注意：node 结构的内存释放需要在更高层次的代码中处理
}

static void test_inline_node_create(void) {
    test_util_log_str("\n# test_inline_node_create");
    
    t_node *node = inline_node_create(TAG_INLINE_TEXT, NODE_LEVEL_SPECIAL, 1, "test");
    test_util_int_equal("test 1: node tag", node->tag, TAG_INLINE_TEXT);
    test_util_int_equal("test 2: node level", node->level, NODE_LEVEL_SPECIAL);
    test_util_str_equal("test 3: node content", *node->ops, "test");
    
    // 注意：node 结构的内存释放需要在更高层次的代码中处理
}

static void test_tail_node_in_list(void) {
    test_util_log_str("\n# test_tail_node_in_list");
    
    // 创建一个节点列表
    t_node *node1 = block_node_create(TAG_H, 0, 1, "node1");
    t_node *node2 = block_node_create(TAG_H, 0, 1, "node2");
    t_node *node3 = block_node_create(TAG_H, 0, 1, "node3");
    
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    
    t_node *tail = tail_node_in_list(node1);
    test_util_str_equal("test 1: tail node content", *tail->ops, "node3");
    
    // 注意：node 结构的内存释放需要在更高层次的代码中处理
}

void test_node(void) {
    test_block_node_create();
    test_line_node_create();
    test_inline_node_create();
    test_tail_node_in_list();
}
