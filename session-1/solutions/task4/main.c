#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "queue.h"

int main(void) {

    // create an empty queue
    Queue* queue = createQueue();

    // test join 
    // - use traverseI() to display the nodes
    // - which pointer do you pass to traverseI(): front or back?

    printf("Initial queue:");
    traverseI(queue->front);

    for (int i = 0; i < 3; ++i) {
        join(queue, i + 1);
    }

    printf("After 3 joins:");
    traverseI(queue->front);

    // test leave 
    // - take care to free detached memory

    Node* node = leave(queue);
    freeNode(node);

    printf("After 1 leave:");
    traverseI(queue->front);

    // free queue memory
    freeNodes(queue->front);
    // free queue
    free(queue);

    return 0;
}
