# See the file /usr/include/make/default.mk for info on how to.

LDLIBS = -lm 
CC = gcc
CFLAGS =  -Wall

BINPATH = .

CHECKCLRS = checkclrs.o graph.o colorrtns.o
checkclrs: $(CHECKCLRS)
	$(CC) $(CFLAGS) $(CHECKCLRS) -o checkclrs $(LDLIBS);
$(CHECKCLRS): mysys.h colorrtns.h graph.h makefile

doc: README
	less README

clean:
	\rm *.o 
