#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "queue.h"

/*
 * create and initialise a queue structure
 */
Queue* createQueue(void) {
    Queue* new = malloc(sizeof(Queue));
    new->front = NULL;
    new->back = NULL;
    new->size = 0;
    return new;
}

/*
 * add a node at the back
 */
void join(Queue* queue, int val) {
    Data* data = createData(val);
    Node* new = createNode(data);

    if (queue->size==0) {               // check if queue is empty
        queue->back = new;
        queue->front = new; 
    }
    else {
        queue->back->next = new;        // add to queue at back
        queue->back = new;              // move queue back
    }

    queue->size++;                      // increase queue size

    return;
}

/*
 * remove a node at the front
 */
Node* leave(Queue* queue) {

    if (queue->size==0) {              // check if queue is already empty
        return NULL;
    }

    Node *node = queue->front;
    queue->front = node->next;         // move queue front
    queue->size--;                     // decrease queue size

    if (queue->size==0) {              // check if queue is now empty
        queue->back = NULL;
    }

    return node;
}
