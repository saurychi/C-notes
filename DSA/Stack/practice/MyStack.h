#ifndef MY_STACK_H
#define MY_STACK_H
#define MAX 5
#include <stdbool.h>
typedef struct{

    int elems[MAX];
    int count;
}Stack;


Stack createStack();
void intiStack(Stack *s);
bool isEmpty(Stack s);
bool isFull(Stack s);
void visualize(Stack s);

bool push(Stack *s, int elems);
bool pop(Stack *s);
int peek(Stack s);

Stack getEven(Stack s);

#endif
