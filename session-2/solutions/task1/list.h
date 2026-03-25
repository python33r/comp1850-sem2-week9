#ifndef _LIST_H_
#define _LIST_H_

#include "list_structures.h"

List *createList(void);
void addNode(List*, Node*, int);
Node* removeNode(List*, Node*);

#endif   // _LIST_H_
