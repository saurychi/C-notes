#ifndef MY_QUEUE_H
#define MY_QUEUE_H
#include <stdbool.h>
#include "MyData.h"

typedef Student Data;

typedef struct node{
    Data elem;
    struct node* link;
} NodeType, *NodePtr;

typedef struct{
    NodePtr head;
    NodePtr tail;
} Queue;

#endif
