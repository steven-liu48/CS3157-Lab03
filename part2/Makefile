revecho: revecho.o mylist.o
	gcc -g -Wall revecho.o mylist.o -o revecho

mylist.o: mylist.c mylist.h
	gcc -c -g -Wall mylist.c

revecho.o: revecho.c mylist.h
	gcc -c -g -Wall revecho.c


.PHONY: vtest
vtest: revecho
	valgrind --leak-check=yes ./revecho 213 432 434 12dude dude

.PHONY: clean
clean:
	rm -f *.o *.a mylist-test
