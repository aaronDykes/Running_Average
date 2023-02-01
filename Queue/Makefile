.PHONY	:= all clean
CC 		:= gcc
FLAGS 	:= -g

all:			circle

circle:			circle_main.o circle.o
				${CC} ${FLAGS} -o circle circle_main.o circle.o

circle_main.o:	circle_main.c depend.h
				${CC} ${FLAGS} -c circle_main.c

circle.o:		circle.c circle.h depend.h
				${CC} ${FLAGS} -c circle.c

clean:			
				rm circle

