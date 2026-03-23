
# Stack

## Stack data structure

`Stack: { Node *top, int size }`

## Stack operations

`push()` and `pop()`

## Tasks

### 1. Inspect the `Makefile`
- Compile with `make`

### 2. Inspect the code
- inspect the implementation of the stack functions
    - sketch how `push()` and `pop()` modify the data structure and `top` pointer
- run the code and inspect the output
- the code in `main()` performs one simple stack operation
    - verify that the output is what you expect from the code

### 3. Implementation
- add code to `main()` to test `push()` and `pop()`
- display the stack data using 'traverseI()` to verify the behaviour

### 4. Test with `valgrind`
- do we have memory leaks?
- ensure you have tested `pop()`
    - if you `pop()` data it is detached from the stack and must be separately deallocated with `free()`
