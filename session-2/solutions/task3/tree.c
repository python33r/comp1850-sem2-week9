#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

/*
 * allocate and initialise a tree structure
 */
Tree* makeTree(void) {
    Tree* new = malloc(sizeof(Tree));
    new->root = NULL;
    new->size = 0;
    return new;
}

/*
 * allocate and initialise a tree node
 */
Node* makeNode(Data* data) {
    Node *new = malloc(sizeof(Node));
    new->data = data;
    new->child[0] = NULL;
    new->child[1] = NULL;
    return new;
}

/*
 * allocate and initialise tree node data
 */
Data* makeData(int val) {
    Data* new = malloc(sizeof(Data));
    new->value = val;
    return new;
}

/*
 * deallocate a tree node and data
 */
void freeNode(Node* node) {
    if (node != NULL) {
        free(node->data);
        free(node);
    }
}

/*
 * recursive traversal in preorder
 */
void traversePre(Node* loc) {
    if (loc != NULL) {
        printf(" Node %d\n", loc->data->value);
        traversePre(loc->child[0]);
        traversePre(loc->child[1]);
    }
}

/*
 * recursive traversal in postorder
 */
void traversePost(Node* loc) {
    if (loc != NULL) {
        traversePost(loc->child[0]);
        traversePost(loc->child[1]);
        printf(" Node %d\n", loc->data->value);
    }
}

/*
 * recursive traversal in inorder
 */
void traverseIn(Node* loc) {
    if (loc != NULL) {
        traverseIn(loc->child[0]);
        printf(" Node %d\n", loc->data->value);
        traverseIn(loc->child[1]);
    }
}

/*
 * deallocate tree nodes using postorder traversal
 */
void deallocateTree(Node *loc) {
    if (loc != NULL) {
        deallocateTree(loc->child[0]);
        deallocateTree(loc->child[1]);
        freeNode(loc);
    }
}
