#ifndef STACK_H
#define STACK_H
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 10

typedef struct node{
    int num;
    struct node* link;
} Node;

typedef struct {
    Node* elems;
    int max;
    int count;
} Stack;

void initStack(Stack* s);
bool isEmpty(Stack s);
bool isFull(Stack s);
int peek(Stack s);
void push(Stack* s, int num);
void pop(Stack* s);
bool visualize(Stack s);
void sort(Stack* s);

#endif
