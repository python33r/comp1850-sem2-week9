#ifndef _STACK_H_
#define _STACK_H_

#include "stack_structures.h"

Data* createData(int);
Stack* createStack(void);
void enlargeStack(Stack*);
void displayStack(Stack*);
void freeStack(Stack*);
void push(Stack*, Data*);
Data* pop(Stack*);

#endif    // _STACK_H_
