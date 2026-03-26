#ifndef _TREE_H_
#define _TREE_H_

typedef struct _tree_node {
    int value;
    struct _tree_node* child[2];
} TreeNode;

typedef struct _tree {
    TreeNode* root;
    int size;
} Tree;

Tree* alloc_tree(void);
TreeNode* alloc_tree_node(int);
void traverse_pre(TreeNode*);
void traverse_post(TreeNode*);
void traverse_in(TreeNode*);
void free_tree_nodes(TreeNode*);

#endif   // _TREE_H_
