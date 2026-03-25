
# Binary tree

## Tree data structure

    Node: { Data *data, Node *child[2] }
    Tree: { Node *root, int size }

## Tree operations

`traversePre()`

## Tasks

### 1. Use the `Makefile`
- Compile with `make` and verify you can build the application

### 2. Inspect the code
- the data structures are adapted for the tree 
- the `main()` function creates tree nodes and links them into a tree structure
    - sketch the structure that is created on paper
- the `tree.c` code implements node creation and preorder tree traversal
- run the code and inspect the output
- verify the preorder traversal on paper 

### 3. Test with `valgrind`
- do we have memory leaks?
- we currently do not deallocate the tree nodes so we should see that in the report. 

### 4. Implementation

**Tree traversal**

The implementation of preorder traversal is provided in `traversePre()`
- implement postorder and inorder traversal
- the algorithm description on the slides should illustrate the modifications that are required
    - the changes from preoder -> postorder -> inorder are relatively small
- function stubs are provided in `tree.c`
- trace the traversals on paper and verify your code produces the same result

**Deallocating the tree**:

Implement the function `deallocateTree()`
- the stub is provided in `tree.c`
- we have to traverse the tree to find all the nodes
- we can only free a node after free'ing the children
    - to avoid detaching part of the tree
    - this means that a postorder traversal approach is appropriate
    - rather than "visit" a node we can `free()` it
- Once your code compiles you can test with `valgrind`

What would happen if we deallocated with preorder or inorder traversal?
- Trace an example on paper to illustrate your answer. 

