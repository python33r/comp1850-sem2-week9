#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*
 * create a Data item for the stack
 */
Data* createData(int val) {
  Data *new = malloc(sizeof(Data));
  new->value = val;
  return new;
}

/*
 * allocate and initialise a stack data structure 
 */
Stack* createStack(void) {
    Stack* new = malloc(sizeof(Stack));
    new->blockSize = 10;
    new->size = new->blockSize;
    new->data = calloc(new->size, sizeof(Data*));  // allocate an initial block for stack storage
    new->top = 0;                                  // top set to index 0
    return new;
}

/*
 * reallocate dynamic array data if we have reached stack->size
 */
void enlargeStack(Stack* stack) {
    stack->size += stack->blockSize;
    stack->data = realloc(stack->data, stack->size * sizeof(Data*));  // allocate a further 'block' to the stack to increase size
}

/*
 * push a Data item onto the stack
 */
void push(Stack* stack, Data* new) {
    if (stack->top == stack->size) {  // reallocate if we have reached max size
        enlargeStack(stack);
    }

    stack->data[stack->top] = new;
    stack->top++;
}

/*
 * pop the top Data item from the stack
 */
Data *pop(Stack *stack) {
    if (stack->top == 0) {  // check for empty stack
        return NULL;
    }

    Data *new = stack->data[stack->top];
    stack->top--;

    return new;
}

/*
 * display stack data - traverse list
 */
void displayStack(Stack* stack) {
    if (stack->top == 0) {
        printf(" <none>\n");
        return;
    }

    for (int k = 0; k < stack->top; ++k) {
        printf(" %d", stack->data[k]->value);
    }

    printf("\n");
}

/*
 * free dynamic array data
 */
void freeStack(Stack* stack) {
    for(int k = 0; k < stack->size; ++k) {
        free(stack->data[k]);   // free stack Data item
    }
    free(stack->data);          // free stack Data array
}
