#ifndef MY_STACK_H
#define MY_STACK_H
#define MAX 5
#include <stdbool.h>
#include "Student.h"


typedef struct{
    Student elems[MAX];
    int count;
}Stack;


Stack createStack();
void initStack(Stack *s);
bool isEmpty(Stack s);
bool isFull(Stack s);
void visualize(Stack s);

bool push(Stack *s, Student elem);
bool pop(Stack *s);
Student peek(Stack s);

Stack getEven(Stack s);

Stack getStudent(Stack *s, String program);
void sortStudent(Stack *s);

#endif
