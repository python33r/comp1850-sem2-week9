#ifndef _TREE_H_
#define _TREE_H_

#include "tree_structure.h"

Tree* makeTree(void);
Node* makeNode(Data*);
Data* makeData(int);

void traversePre(Node*);
void traversePost(Node*);
void traverseIn(Node*);

void freeNode(Node*);
void deallocateTree(Node*);

#endif   // _TREE_H_
