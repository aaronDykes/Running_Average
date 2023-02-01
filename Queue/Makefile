CC 		:= gcc
OFLAGS 	:= -O2
CFLAGS	:= -g

all: circle

%.o: %.c
	$(CC) $(CFLAGS) -c $^

circle: circle.o circle_main.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm circle *.o
	rm -rf circle.dSYM

