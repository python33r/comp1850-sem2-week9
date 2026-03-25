#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void info(Stack* stack) {
    printf("blockSize = %d\n", stack->blockSize);
    printf("size      = %d\n", stack->size);
    printf("top       = %d\n", stack->top);
    printf("data      @ %p\n", stack->data);
    printf("Contents  :");
    displayStack(stack);
    printf("\n");
}

int main(void) {
    Stack* stack = createStack();
    info(stack);

    // add 10 values to stack
    for (int i = 1; i <= 10; ++i) {
        push(stack, createData(1));
    }
    info(stack);

    // Add another value
    push(stack, createData(1));
    info(stack);

    // free stack dynamic memory
    freeStack(stack);
    free(stack);
    
    return 0;
}
