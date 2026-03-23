#include <stdio.h>
#include <stdlib.h>
#include "stack_structures.h"
#include "stack.h"

int main(void) {
    Stack* stack = createStack();

    // push() - add some data to the stack
    push(stack, createData(1));
    displayStack(stack);

    // free stack dynamic memory
    freeStack(stack);
    free(stack);
    
    return 0;
}
