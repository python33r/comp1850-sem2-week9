#ifndef _LIST_STRUCTURES_H_
#define _LIST_STRUCTURES_H_

typedef struct _data {
    int value;
} Data;

typedef struct _list {
    int blockSize;          // default block-size
    int size;               // currently allocated size
    Data** data;            // array of Data*
    int length;             // length of actual list
} List;

#endif   // _LIST_STRUCTURES_H_
