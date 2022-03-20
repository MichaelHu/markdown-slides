all: clean doyacc dolex markdown.out

onlylex: clean dolex lex.out

lex-yacc: doyacc dolex

debug: clean markdown.out

doyacc:
	bison -d -t --locations -v -omarkdown-new.y.c markdown-new.y

dolex:
	flex -omarkdown-new.lex.c markdown-new.lex

lex.out: markdown-new.lex.o tagstack.o \
	tagstackcheck.o strbuf.o strutils.o \
	lex-state-stack.o node.o nodetree.o \
	markdown-utils.o logutils.o
	gcc $^ -o $@ -g

markdown.out: main.o input.o markdown-new.y.o markdown-new.lex.o tagstack.o \
	tagstackcheck.o strbuf.o strutils.o \
	lex-state-stack.o node.o nodetree.o \
	markdown-utils.o logutils.o
	gcc $^ -o $@ -g

.c.o:
	gcc -c $< -g

clean:
	rm -rf *.o 

