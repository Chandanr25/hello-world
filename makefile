app : hello_world.o search.o main.o
	gcc -o app main.o hello_world.o search.o

main.o : main.c
	gcc -c main.c -o main.o

hello_world.o : hello_world.c
	gcc -c hello_world.c -o hello_world.o

search.o : search.c
	gcc -c search.c -o search.o

clean :
	rm *.o app
