#ifndef ARITHMETIC_H
#define ARITHMETIC_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct node{
    char acter;
    struct node* link;
} Node, *NodePtr, *Stack;

void initStack(Stack* s);
void push(Stack* s, char c);
void pop(Stack* s);
char peek(Stack s);
void visualize(Stack s);
Stack postFix_generator(char* infix);
int solve_postFix(Stack* s);


#endif
