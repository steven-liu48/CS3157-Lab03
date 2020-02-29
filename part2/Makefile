revecho: revecho.o ../part1/libmylist.a
	gcc -o revecho revecho.o -L../part1 -lmylist

revecho.o: revecho.c ../part1/mylist.h
	gcc -c revecho.c -I../part1

.PHONY: vtest
vtest: revecho
	valgrind --leak-check=yes ./revecho 213 432 434 12dude dude

.PHONY: clean
clean:
	rm -f *.o *.a revecho
