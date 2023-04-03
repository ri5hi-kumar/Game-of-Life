all: output

lifegame.o: lifegame.c
	gcc -c lifegame.c -o lifegame.o

lab1a.o: lab1a.c
	gcc -c lab1a.c -o lab1a.o

output: lifegame.o lab1a.o
	gcc lifegame.o lab1a.o -o output -lncurses

clean:
	rm -f ./lab1a.o ./lifegame.o output