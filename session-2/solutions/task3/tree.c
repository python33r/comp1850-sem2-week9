#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

/*
 * allocate and initialise a tree structure
 */
Tree* alloc_tree(void) {
    Tree* new = malloc(sizeof(Tree));
    new->root = NULL;
    new->size = 0;
    return new;
}

/*
 * allocate and initialise a tree node
 */
TreeNode* alloc_tree_node(int value) {
    TreeNode* new = malloc(sizeof(TreeNode));
    new->value = value;
    new->child[0] = NULL;
    new->child[1] = NULL;
    return new;
}

/*
 * recursive traversal in pre-order
 */
void traverse_pre(TreeNode* node) {
    if (node != NULL) {
        printf(" Node %d\n", node->value);
        traverse_pre(node->child[0]);
        traverse_pre(node->child[1]);
    }
}

/*
 * recursive traversal in post-order
 */
void traverse_post(TreeNode* node) {
    if (node != NULL) {
        traverse_post(node->child[0]);
        traverse_post(node->child[1]);
        printf(" Node %d\n", node->value);
    }
}

/*
 * recursive traversal in in-order
 */
void traverse_in(TreeNode* node) {
    if (node != NULL) {
        traverse_in(node->child[0]);
        printf(" Node %d\n", node->value);
        traverse_in(node->child[1]);
    }
}

/*
 * free tree nodes using postorder traversal
 */
void free_tree_nodes(TreeNode* node) {
    if (node != NULL) {
        free_tree_nodes(node->child[0]);
        free_tree_nodes(node->child[1]);
        free(node);
    }
}
