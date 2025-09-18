ABC.exe:main.o big3c.o factc.o
	gcc -o ABC.exe main.o big3c.o factc.o
main.o:main.c
	gcc -c main.c
big3c.o:big3c.c
	gcc -c big3c.c
factc.o:factc.c
	gcc -c factc.c

