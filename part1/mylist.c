#include <stdlib.h>
#include "mylist.c"

struct Node *addFront(struct List *list, void *data){
	if(data == 0){
        return 0;
    }
	struct Node *front = (struct Node *)malloc(sizeof(struct Node));
    front->data = data;
    front->next = list->head;
    list->head = front;
	return front;
}

void traverseList(struct List *list, void (*f)(void *)){
	struct Node *pointer = list;
	while (pointer -> next != 0){
		(*f)(pointer);
		pointer++;
	}
}

void flipSignDouble(void *data){
	*(double *)data *= -1;
}

int compareDouble(const void *data1, const void *data2){
	if (*(double *)data1 == *(double *)data2)
		return 0;
	return 1;
}

struct Node *findNode(struct List *list, const void *dataSought, int (*compar)(const void *, const void *)){
	struct Node *pointer = list;
    while (pointer -> next != 0){
        if(!compar(pointer->data, dataSought)){
			return pointer;
		}
		pointer++;
    }
	return NULL;
}

void *popFront(struct List *list){
	struct Node *pointer = list->head;
	void *data = pointer->data;
	*list->head = *list->head->next;
	free(pointer);
	return data;
}

void removeAllNodes(struct List *list){
	struct Node *pointer = list->head;
	while (pointer != 0){
		popFront(list);
		pointer++;
	}
}

struct Node *addAfter(struct List *list, struct Node *prevNode, void *data){
	if(!prevNode)
		addFront(list, data0);
	    struct Node *add = (struct Node *)malloc(sizeof(struct Node));
    add->next = prevNode->next;
    add->data = data;
    prevNode->next = add;
    return add;
}

void reverseList(struct List *list){
	  struct Node *prv = NULL;
      struct Node *cur = list->head;
      struct Node *nxt;

      while (cur) {
		
	  }
}
