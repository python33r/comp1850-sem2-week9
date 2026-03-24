#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "list.h"

int main(void) {
    // create an empty list
    List* list = createList();

    // add some nodes
    addNode(list, NULL, 1);  // add at head - special case - pass NULL

    // display the list

    traverseI(list->head);

    // add and delete more nodes with addNode() and removeNode()
    // deallocate deleted nodes - test with valgrind to check this

    printf("Adding some more nodes...\n");
    addNode(list, list->head, 2);
    addNode(list, list->head->next, 3);
    traverseI(list->head);

    printf("Removing a node...\n");
    Node* removed = removeNode(list, list->head);
    freeNode(removed);

    traverseI(list->head);

    // free list memory
    freeNodes(list->head);
    free(list);

    return 0;
}
