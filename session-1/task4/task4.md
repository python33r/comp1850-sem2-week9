# Queue data structure

    Queue: { Node *back, Node *front, int size }

# Queue functions

## Memory management:

`createQueue()` + Node operations

## Queue operations:

`join()` and `leave()`

## Display:

Node traversal operation 

# Tasks

## Modifying the data structure

Add code in `main()` to test the `join()` and `leave()` functions
- sketch the modifications to the structure to predict the result 
- test the output using the traversal operation to display the data structure
- test with `valgrind` to ensure there are no memory leaks

## Design question

Why have we made the choice of the first node as `front` and the last node as `back`?
- consider the `join()` and `leave()` operations required and the implementation
- write out the modifications required to the data structures in each case
- are they simpler, harder or the same complexity?

## Extension task

Implement a second version of the queue with `front` and `back` reversed.
