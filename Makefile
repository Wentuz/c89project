
CC = gcc
CFLAGS = -std=c89 -Wall -Wextra -pedantic -I./include

TARGET = detab
SOURCES = src/main.c src/detab.c

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean
