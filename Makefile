CC = gcc
LIBS = -lwiringPi
blink: blink.o
	$(CC) blink.o -o blink.c $(LIBS)
