CC = gcc
CFLAGS = -Wall -g -c

OBJS = phoneBookMain.o register.o print.o search.o delete.o
all : main
phoneBookMain.o: phoneBookMain.c
	$(CC) $(CFLAGS) $<
%.o: %.c
	$(CC) $(INCLUDE) $(CFLAGS) $<
main: $(OBJS)
	$(CC) -o main $(OBJS)
clean:
	rm -f main $(OBJS)
