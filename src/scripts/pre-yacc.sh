#!/bin/bash

> markdown-new.y

(
cat <<EOF
    /**
     * ========== note: It's an auto-generated file, don't modify it directly! ===========
     */
%{
    /**
     * ========== header begin ===========
     */
EOF
) >> markdown-new.y

cat \
    ./y/header.c \
>> markdown-new.y

cat \
    ./y/rules-config.c \
>> markdown-new.y

(
cat <<EOF
    /**
     * ========== header end ===========
     */
%}

    /**
     * ========== token begin ===========
     */
EOF
) >> markdown-new.y

cat \
    ./y/token.y \
>> markdown-new.y

(
cat <<EOF
%%
    /**
     * ========== grammar rules begin ===========
     */
EOF
) >> markdown-new.y

# file list from y directory, make sure that markdown-file.y the first item!
for i in `cat <<EOF
    markdown-file.y
    block.y
    blocks.y
    code_text.y
    code_text_item.y
    codeblock.y
    header.y
    image.y
    inline_code_text.y
    inline_code_text_item.y
    inline_element.y
    inline_elements.y
    inline_text.y
    inline_text_item.y
    inlinecode.y
    italic.y
    lf_indentsN.y
    lf_indentsN_codeblock.y
    lf_q_indentsN.y
    lf_q_indentsN_codeblock.y
    line-through.y
    line.y
    lines.y
    link.y
    paragraph.y
    quote-block.y
    quote_codeblock.y
    quote_header.y
    quote_paragraph.y
    quote_unorderlist_0.y
    quote_unorderlist_1.y
    strong.y
    unorderlist_0.y
    unorderlist_1.y
    unorderlist_2.y
EOF
`; do 
    cat "./y/grammar-rules/$i" >> markdown-new.y;
done

(
cat <<EOF

    /**
     * ========== grammar rules end ===========
     */
%%
EOF
) >> markdown-new.y

cat \
    ./y/export.c \
>> markdown-new.y

