all: clean test 

build: test.out

test: build
	./test.out

test.out: main.o test-utils.o \
	strutils.o \
	markdown-utils.o \
	node.o \
	tagstack.o \
	tagstackcheck.o \
	logutils.o \
	test-strutils.o \
	test-markdown-utils.o \
	test-node.o
	gcc $^ -o $@ -g

strutils.o:
	gcc -c ../src/strutils.c -g

markdown-utils.o:
	gcc -c ../src/markdown-utils.c -g

node.o:
	gcc -c ../src/node.c -g

tagstack.o:
	gcc -c ../src/tagstack.c -g

logutils.o:
	gcc -c ../src/logutils.c -g

tagstackcheck.o:
	gcc -c ../src/tagstackcheck.c -g

test-utils.o:
	gcc -c ./test-lib/test-utils.c -g

.c.o:
	gcc -c $< -g

clean:
	rm -rf *.o 

