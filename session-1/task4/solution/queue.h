#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "queue_structures.h"

Queue* createQueue(void);
void join(Queue*, int);
Node* leave(Queue*);

#endif   // _QUEUE_H_
