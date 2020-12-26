# See the file /usr/include/make/default.mk for info on how to.

LDLIBS = -lm 
CC = gcc
CFLAGS =  -Wall

PROXIMITY = proximity.o
proximity: $(PROXIMITY)
	$(CC) $(CFLAGS) $(PROXIMITY) -o proximity $(LDLIBS);

doc: README
	less README

clean:
	\rm *.o 
