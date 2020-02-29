#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylist.h"


static int findDude(struct List *list)
{
    struct Node *pointer = list->head;
	while (pointer != 0){
        //printf("... ");
		if (strcmp(pointer->data, "dude") == 0){
			return 1;
			printf("!!!!");
		}
        pointer = pointer->next;
    }
	return 0;
} 

static void print(void *p)
{
    printf("%s \n", (char *)p);
}

static void die(const char *message)
{
    perror(message);
    exit(1);
}

int main(int argc, char **argv)
{
	if (argc<=1)
		return 1;
	struct List list;
    initList(&list);
	char** ptr = argv;
	for (int i = 1; i < argc; i++) {
    	if (addFront(&list, *(++ptr)) == NULL){
        	die("addFront() failed");
		}
    }
	
	//Print out the list
	traverseList(&list, &print);
	
	//Loof for dude
	int out = findDude(&list);
	if (out == 1){
		printf ("\ndude found\n");
	}
	else{
		printf ("\ndude not found\n");
	}
	
	//Clear
	while ((popFront(&list)) != NULL) {
		;
    }

	//End
    return 0;
}

