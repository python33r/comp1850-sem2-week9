#include <stdio.h>
#include <stdlib.h>
#include "tree_node.h"
#include "tree_structure.h"
#include "tree.h"

int main(void) {
    // create tree and root node

    Tree* tree = makeTree();
    tree->root = makeNode(makeData(1));
    
    // create child nodes

    Node* p = tree->root;
    p->child[0] = makeNode(makeData(2));
    p->child[1] = makeNode(makeData(3));

    p = tree->root->child[0];
    p->child[0] = makeNode(makeData(4));
    p->child[1] = makeNode(makeData(5));

    p = tree->root->child[1];
    p->child[1] = makeNode(makeData(6));

    tree->size = 6;

    // traverse to print node data

    printf("Pre-order traversal:\n");
    traversePre(tree->root);

    printf("\nPost-order traversal:\n");
    traversePost(tree->root);

    printf("\nIn-order traversal:\n");
    traverseIn(tree->root);

    // free memory

    deallocateTree(tree->root);
    free(tree);

    return 0;
}
