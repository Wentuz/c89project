
CC = gcc
CFLAGS = -std=c89 -Wall -Wextra -pedantic -I./include
INCLUDES = -I/usr/local/include
LIBS = -L/usr/local/lib -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

TARGET = untiltedStairs
SOURCES = src/main.c src/detab.c

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET) $(LIBS)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean
