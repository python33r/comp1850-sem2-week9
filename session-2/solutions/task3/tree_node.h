#ifndef _TREE_NODE_H_
#define _TREE_NODE_H_

typedef struct _data {
    int value;
} Data;

typedef struct _node {
    Data* data;
    struct _node* child[2];
} Node;

#endif   // _TREE_NODE_H_
