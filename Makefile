# Write this Makefile
myas: main.o check.o trans.o
	gcc -o myas main.o check.o trans.o -lm
main.o: main.c
	gcc -O -Wall -c main.c
check.o: check.c
	gcc -O -Wall -c check.c
trans.o: trans.c
	gcc -O -Wall -c trans.c
clean:
	rm -f main.o check.o trans.o myas


