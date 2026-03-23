#ifndef _STACK_H_
#define _STACK_H_

#include "stack_structures.h"

Stack* createStack(void);
void push(Stack*, int);
Node* pop(Stack*);

#endif   // _STACK_H_
