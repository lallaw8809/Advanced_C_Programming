single_list: main.o add_front.o add_end.o add_middle.o display.o
	gcc -o single_list *.o
	rm -rf  *.o

main.o: main.c main.h
	gcc -c main.c

add_front.o: add_front.c main.h
	gcc -c add_front.c

add_end.o: add_end.c main.h
	gcc -c add_end.c
	
add_middle.o: add_middle.c main.h
	gcc -c add_middle.c

display.o: list_display.c main.h
	gcc -c list_display.c

clean:
	rm -rf *~ single_list *.o


	
