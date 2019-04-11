# test-list-190411

## test 1

有用的如：`"{char}, :reg, :reg {arg}, y, p, P`

1. :reg {arg}

        " 查看寄存器", 0, 1, 2的内容
        :reg "012

2. 使用好寄存器解决剪切内容丢失问题：
        
        " show retisters 
        :reg
        " use register 3 for the next delete, yank or put 
        "3
        " put 
        p
         
3. 将指定行保存到寄存器中：

        :10,15y a



## test 2

* line 1
    text 1

    text 2

* line 2


## test 3

text 1

* list 1
* list 2

    -m "v2.0:" \
    -m "1. add TAG_BLOCK_QUOTE_P into tags_of_block_node array; " \
    -m "2. add tags_of_list_node[], and update is_line_list_node()" \
    -m "3. prefix output of show_node() with @, and show_links() with #" \
    -m "4. update visit_to_rearrange_block_node(t_node *node) to search the closest parent block node or line-level list node" \
    -m "5. update visit_to_merge_block_nodes(t_node *node) to merge two list item if they are seperated by only 1 blank" \
    -m "6. update block_pre_pre_parse(t_node *node): \"\n%s<pre><code%s>\" -> \"\n<pre%s><code>\", and remove pefix blank padding" 

