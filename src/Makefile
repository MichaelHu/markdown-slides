all: clean doyacc dolex markdown.out

lex-yacc: doyacc dolex

debug: clean markdown.out

doyacc:
	bison -d -t --locations -v -omarkdown.y.c markdown.y

dolex:
	flex -omarkdown.lex.c markdown.lex

markdown.out: main.o input.o markdown.y.o markdown.lex.o htmltags.o tagstack.o \
	tagstackcheck.o blocknode.o blocknodestack.o strbuf.o \
	lex-state-stack.o node.o nodetree.o
	gcc $^ -o $@ -g

.c.o:
	gcc -c $< -g

clean:
	rm -rf *.o 

