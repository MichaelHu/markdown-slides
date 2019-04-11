#!/bin/bash

echo "parsing $1"

../src/markdown.out "$1" \
    > "$1".html

# ../src/markdown.out "$1" \
#     | cat ./tpl/header$2.tpl.html - ./tpl/footer$2.tpl.html \
#     > "$1".html

