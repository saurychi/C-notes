#ifndef QUEUE_H
#define QUEUE_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node* link;
} Node;

typedef struct {
    Node* head;
    Node* tail;
} Queue;

void initQueue(Queue* q);
bool isEmpty(Queue q);
bool enqueue(Queue* q, int num);
bool dequeue(Queue* q);
void display(Queue q);
void visualize(Queue q);




#endif
