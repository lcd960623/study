main:main.o add.o
	gcc -o main main.o add.o
main.o:main.c
	gcc -c main.c
add.o:add.c
	gcc -c add.c

.PHONY:main.o clean
clean:
	rm *.o