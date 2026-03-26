#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main(void) {
    // create tree and root node

    Tree* tree = alloc_tree();
    tree->root = alloc_tree_node(1);
    tree->size++;
    
    // create child nodes

    TreeNode* p = tree->root;
    p->child[0] = alloc_tree_node(2);
    tree->size++;
    p->child[1] = alloc_tree_node(3);
    tree->size++;

    p = tree->root->child[0];
    p->child[0] = alloc_tree_node(4);
    tree->size++;
    p->child[1] = alloc_tree_node(5);
    tree->size++;

    p = tree->root->child[1];
    p->child[1] = alloc_tree_node(6);
    tree->size++;

    printf("Tree size (no. of nodes) = %d\n\n", tree->size);

    // traverse to print node data

    printf("Pre-order traversal:\n");
    traverse_pre(tree->root);

    printf("\nPost-order traversal:\n");
    traverse_post(tree->root);

    printf("\nIn-order traversal:\n");
    traverse_in(tree->root);

    // free memory

    free_tree_nodes(tree->root);
    free(tree);

    return 0;
}
