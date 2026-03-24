#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/*
 * create a Data item for the List
 */
Data* createData(int val) {
  Data *new = malloc(sizeof(Data));
  new->value = val;
  return new;
}

/*
 * allocate and initialise a List data structure 
 */
List* createList(void) {
    List *new = malloc(sizeof(List));
    new->blockSize = 10;
    new->size = new->blockSize;
    new->data = calloc(new->size, sizeof(Data *));  // allocate an initial block for List storage
    new->length = 0;
    return new;
}

/*
 * reallocate dynamic array data if we have reached list->size
 */
void enlargeList(List* list) {
    list->size += list->blockSize;
    list->data = realloc(list->data, list->size * sizeof(Data*));  // allocate a further 'block' to the List to increase size
}

/*
 * insert a Data item onto the List 
 */
void insert(List* list, Data* new, int loc) {
    if (list->length == list->size) {     // reallocate if we have reached max size
        enlargeList(list);
    }

    if(loc > list->length || loc < 0) {   // check for invalid loc
        return;
    }

    // shuffle list up to create a gap at index loc
    for(int k = list->length; k > loc; --k) {
        list->data[k] = list->data[k-1];
    }

    list->data[loc] = new;   // insert the data at loc
    list->length++;          // increase the list length
}

/*
 * remove a Data item from the List
 */
Data* delete(List* list, int loc) {
    Data* item = NULL;

    if (list->length > 0 && loc >= 0 && loc < list->length) {
        // list is not empty and loc is valid, so we can begin by grabbing
        // a pointer to the item we are deleting, so we can return it
        item = list->data[loc];

        // shift everything from loc onwards down by one position
        for (int k = loc; k < list->length - 1; ++k) {
            list->data[k] = list->data[k + 1];
        }

        // previous step leaves us with two pointers to the same item,
        // representing the old and new ends of the list; we need to null
        // out the former to prevent a potential 'double free' issue
        list->data[list->length - 1] = NULL;

        // finally we update the list length
        list->length--;
    }

    return item;
}

/*
 * display List data - traverse list from front to back
 */
void displayList(List* list) {
    printf("Length = %d, data = [", list->length);

    for (int k = 0; k < list->length; ++k) {
        printf("%d", list->data[k]->value);
        if (k != list->length - 1) {
            printf(", ");
        }
    }

    printf("]\n");
}

/*
 * free dynamic array data
 */
void freeList(List* list) {
    for (int k = 0; k < list->size; ++k) {
        free(list->data[k]);  // free List Data item
    }
    free(list->data);         // free List Data array
}
