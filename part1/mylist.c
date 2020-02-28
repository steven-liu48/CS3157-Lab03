#include "mylist.c"

struct Node *addFront(struct List *list, void *data){
	struct Node front = {data, 0};
	list -> head = &front;
	if (data != 0){
		return &front;
	}
	return 0;
}

void traverseList(struct List *list, void (*f)(void *)){
	struct Node *pointer = list;
	while (pointer -> next != 0){
		(*f)(pointer);
		pointer++;
	}
}

void flipSignDouble(void *data){
	*data *= -1;
}

int compareDouble(const void *data1, const void *data2){
	if (*data1 == *data2)
		return 0;
	return 1;
}

struct Node *findNode(struct List *list, const void *dataSought, int (*compar)(const void *, const void *)){

}

void *popFront(struct List *list){

}

void removeAllNodes(struct List *list){

}

struct Node *addAfter(struct List *list, struct Node *prevNode, void *data){

}

void reverseList(struct List *list){

}	
