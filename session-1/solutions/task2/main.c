#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "stack.h"

int main(void) {
    // create an empty stack
    Stack* stack = createStack();

    // push some values onto stack
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);

    // display stack
    traverseI(stack->top);

    // pop a value off of stack
    Node* node = pop(stack);

    if (node != NULL) {
        printf("Popped %d from stack\n", node->data->value);
        // must free node separately because it no longer part of stack!
        freeNode(node);
    }

    // display stack again
    traverseI(stack->top);

    // free stack memory
    freeNodes(stack->top);
    free(stack);

    return 0;
}
