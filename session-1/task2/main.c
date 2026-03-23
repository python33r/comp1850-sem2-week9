#include <stdio.h>
#include <stdlib.h>
#include "node_structures.h"
#include "node.h"
#include "stack_structures.h"
#include "stack.h"

int main(void) {
    // create an empty stack
    Stack* stack = createStack();

    // push a node
    push(stack, 1);

    // display stack
    traverseI(stack->top);

    // free stack memory
    freeNodes(stack->top);
    free(stack);

    return 0;
}
