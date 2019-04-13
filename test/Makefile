all: clean test 

build: test.out

test: build
	./test.out

test.out: main.o test-utils.o \
	strutils.o \
	markdown-utils.o \
	test-strutils.o \
	test-markdown-utils.o
	gcc $^ -o $@ -g

strutils.o:
	gcc -c ../src/strutils.c -g

markdown-utils.o:
	gcc -c ../src/markdown-utils.c -g

test-utils.o:
	gcc -c ./test-lib/test-utils.c -g

.c.o:
	gcc -c $< -g

clean:
	rm -rf *.o 

