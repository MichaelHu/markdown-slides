all: clean doyacc dolex markdown.out

onlylex: clean dolex lex.out

lex-yacc: doyacc dolex

debug: clean markdown.out

doyacc:
	bison -d -t --locations -v -omarkdown.y.c markdown.y

dolex:
	flex -omarkdown.lex.c markdown.lex

lex.out: markdown.lex.o tagstack.o \
	tagstackcheck.o strbuf.o strutils.o \
	lex-state-stack.o node.o nodetree.o \
	markdown-utils.o logutils.o
	gcc $^ -o $@ -g

markdown.out: main.o input.o markdown.y.o markdown.lex.o tagstack.o \
	tagstackcheck.o strbuf.o strutils.o \
	lex-state-stack.o node.o nodetree.o \
	markdown-utils.o logutils.o
	gcc $^ -o $@ -g

.c.o:
	gcc -c $< -g

clean:
	rm -rf *.o 

