
output: major1.o parity.o
	gcc -Wall major1.o parity.o -o bitwisemenu

major1.o: major1.c major1.h
	gcc -c major1.c

parity.o: parity.c major1.h
	gcc -c parity.c

clean:
	rm *.o bitwisemenu
