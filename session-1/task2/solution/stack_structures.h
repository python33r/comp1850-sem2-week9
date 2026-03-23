#ifndef _STACK_STRUCTURES_H_
#define _STACK_STRUCTURES_H_

#include "node_structures.h"

typedef struct _stack {
    Node* top;
    int size;
} Stack;

#endif   // _STACK_STRUCTURES_H_
