#ifndef _NODE_H_
#define _NODE_H_

Data* createData(int);
Node* createNode(Data*);

void freeNode(Node*);
void freeNodes(Node*);

void traverseI(Node*);
void traverseW(Node*);
void traverseR(Node*);

#endif   // _NODE_H_
