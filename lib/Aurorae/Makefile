# Makefile

CC = gcc

CFLAGS += -Wall -Werror 

INCLUDES += -I/usr/include/python2.7

libAurorae.so: Aurorae.o
	$(CC) -shared $(CFLAGS) -o $@ Aurorae.o

%.o:
	$(CC) -c $(CFLAGS) -fPIC $(INCLUDES) $(basename $@).c $(LDFLAGS)

clean:
	rm -fr *.o *.so


