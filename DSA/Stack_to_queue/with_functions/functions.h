#ifndef FUNCTIONS_H
#define FUNCTION_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int elem;
    struct node* link;
} NodeType, *NodePtr, *Stack;

typedef struct {
    NodePtr elems;
    NodePtr head;
    NodePtr tail;
} Queue;

void initStack(Stack* s);
int peek(Stack s);
void push(Stack* s, int num);
void pop(Stack* s);
bool isEmptyS(Stack s);
void visualizeStack(Stack s);


void initQueue(Queue* q);
int frontQ(Queue q);
bool isEmptyQ(Queue q);
void enqueue(Queue* q, int num);
void dequeue(Queue* q);
void visualizeQueue(Queue q);

Queue stack_to_queue(Stack s);

#endif
