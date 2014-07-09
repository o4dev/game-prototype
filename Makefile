# Makefile

CC = gcc

CFLAGS += -Wall  

INCLUDES += -I./includes/

LDFLAGS += -l:lib/Aurorae/libAurorae.so
LDFLAGS += -lSDL
LDFLAGS += -lpython2.7


SRC    = src/main.c
TARGET = game

$(TARGET): libAurorae.so
	$(CC) $(CFLAGS) $(INCLUDES) -o bin/$(TARGET) $(SRC) $(LDFLAGS)

libAurorae.so:
	cd lib/Aurorae && $(MAKE) $@

clean:
	rm -fr *.o *.so bin/$(TARGET)
	pyclean .
	cd lib/Aurorae && $(MAKE) clean
