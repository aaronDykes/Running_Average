circle:			circle_main.o circle.o
	gcc -o circle -g circle_main.o circle.o

circle_main.o:	circle_main.c depend.h
	gcc -c circle_main.c -g

circle.o:		circle.c circle.h depend.h
	gcc -c circle.c -g

