app : main.o
	gcc -o app main.o

main.o : main.c
	gcc -c main.c -o main.o

clean :
	rm *.o app
