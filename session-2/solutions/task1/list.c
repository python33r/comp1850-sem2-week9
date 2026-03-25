#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "list.h"

/*
 * allocate and initialise a list structure
 */
List* createList(void) {
    List* new = malloc(sizeof(List));
    new->head = NULL;
    new->size = 0;
    return new;
}

/*
 * add a node after the location (pass loc=NULL to add at the head)
 */
void addNode(List *list, Node *loc, int val) {
    Node* new = createNode(createData(val));

    if (loc == NULL) {            // adding at head (special case)
        new->next = list->head;
        list->head = new;
    }
    else {                        // adding at other locations - after loc
        new->next = loc->next;
        loc->next = new;
    }

    list->size++;                 // increase List size
}

/*
 * remove node after the location (pass loc=NULL to remove at the head)
 */
Node* removeNode(List* list, Node* loc) {
    Node* removed;

    if (list->size == 0) {           // check if List is already empty
        return NULL;
    }

    if (loc == NULL) {               // head is special case
        removed = list->head;
        list->head = removed->next;
    }
    else {                           // other nodes
        removed = loc->next;
        loc->next = removed->next;
    }

    list->size--;                    // decrease List size

    return removed;
}
