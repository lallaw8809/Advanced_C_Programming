single_list: main.o front.o end.o middle.o display.o d_front.o d_end.o rev.o
	gcc -o single_list *.o
	rm -rf  *.o

main.o: main.c main.h
	gcc -c main.c

front.o: add_front.c main.h
	gcc -c add_front.c

end.o: add_end.c main.h
	gcc -c add_end.c
	
middle.o: add_middle.c main.h
	gcc -c add_middle.c

display.o: list_display.c main.h
	gcc -c list_display.c

d_front.o: delete_front.c main.h
	gcc -c delete_front.c

d_end.o: delete_end.c main.h
	gcc -c delete_end.c

rev.o: reverse.c main.h
	gcc -c reverse.c

clean:
	rm -rf *~ single_list


	
