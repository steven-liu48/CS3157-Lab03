mylist-test: mylist-test.o libmylist.a
	gcc -g mylist-test.o -o mylist-test -L. -lmylist

mylist.o: mylist.c mylist.h
	gcc -c -g -Wall mylist.c

mylist-test.o: mylist-test.c mylist.h
	gcc -c -g -Wall mylist-test.c

libmylist.a: mylist.o
	ar rcs libmylist.a mylist.o

.PHONY: vtest
vtest: mylist-test
	valgrind --leak-check=yes ./mylist-test

.PHONY: clean
clean:
	rm -f *.o *.a mylist-test
