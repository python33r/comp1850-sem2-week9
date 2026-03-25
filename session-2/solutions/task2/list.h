#ifndef _LIST_H_
#define _LIST_H_

#include "list_structures.h"

Data* createData(int);
List* createList(void);
void enlargeList(List*);
void displayList(List*);
void freeList(List*);
void insert(List*, Data*, int);
Data* delete(List*, int);

#endif   // _LIST_H_
