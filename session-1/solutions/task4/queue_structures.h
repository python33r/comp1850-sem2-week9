#ifndef _QUEUE_STRUCTURES_H_
#define _QUEUE_STRUCTURES_H_

typedef struct _queue {
    struct _node* front;
    struct _node* back;
    int size;
} Queue;

#endif   // _QUEUE_STRUCTURES_H_
