all: clean test 

build: test.out

test: build
	./test.out

test.out: main.o test-utils.o \
	strutils.o \
	test-strutils.o
	gcc $^ -o $@ -g

strutils.o:
	gcc -c ../src/strutils.c -g

test-utils.o:
	gcc -c ./test-lib/test-utils.c -g

.c.o:
	gcc -c $< -g

clean:
	rm -rf *.o 

