CC = gcc
LDFLAGS = -I/usr/include/python3.10 -lpython3.10
TARGET = program
SRC = source.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(SRC) $(LDFLAGS)

