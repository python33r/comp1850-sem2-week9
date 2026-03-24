
# List

## Dynamic array data structure

    Data: { int value }
    List: { int blockSize, int size, Data *data[], int length }

## List functions

### Memory management:

create data structures, reallocate data structures, free data structures

### List operations:

`insert()` and `delete()`

### Display:

`displayList()` Traversal operation is a simple for-loop

## Tasks

### 1. Compile and run

- The code provided:
    - Defines the `List` structure in `list_structures.h`
    - Defines functions for operating on the list in `list.c`
        - `freeList()` free's memory associated with the list data
        - `displayList()` prints the list length and the data values stored in the current list
        - `insert()` adds a data item into the list at a specified index `loc`
- Compile the code with `make` and test
    - add code to `main()` to insert nodes at specified index locations
        - insert a node value 4 at index 1
        - insert a node value 5 at index 1
        - insert a node value 6 at index 0
    - use `displayList()` to verify the behaviour
    - sketch the structure you expect to validate the behaviour
    - add some further nodes, ensuring you provide appropriate values for loc
- Test the code with `valgrind`
    - Verify there are no memory leaks with `insert()` operations

### 2. `delete()` operation

- Implement the `delete()` operation
    - A function stub is provided in `list.c`
    - The following specification can be used:
        - check that `list->length > 0` else `return NULL`
        - check that `0 <= loc < list->length` else `return NULL`
        - assign a new Data pointer with the Data pointer stored at data[loc]
        - shuffle the data array data[loc+1:length-1] down to data[loc:length-2] to fill the gap  
        - return the new Data pointer   
    - Hint: the pattern is similar to the `insert()` function although the order of operations is different
    - Test
        - verify behaviour on paper for a deletion operation
        - use `valgrind` to verify there are no memory leaks
