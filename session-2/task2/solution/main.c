#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void) {
    List* list = createList();

    // add some data to the list

    insert(list, createData(1), 0);   // add with value 1 at index 0

    displayList(list);

    insert(list, createData(4), 1);
    insert(list, createData(5), 1);
    insert(list, createData(6), 0);

    displayList(list);

    // remove some data

    Data* item = delete(list, 2);
    if (item != NULL) {
        printf("Removed %d\n", item->value);
        free(item);
    }

    displayList(list);

    // free list dynamic memory

    freeList(list);
    free(list);

    return 0;
}
