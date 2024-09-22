#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    char name[30];
    int age;
    char sex;
} Person;

typedef struct node{
    Person data;
    struct node *link;
} NodeType, *NodePtr, *Stack;

void initStack(Stack *s);
Person createPerson(char* name, int age, char sex);
bool isEmpty(Stack s);
void displayStack(Stack s);

bool push(Stack *s, Person p);
bool pop(Stack *s);
Person peek(Stack s);

/*Insert sorted base on lastname. Rember to use the property
  of the stack using push, pop, and peek functions.*/
bool insertSorted1(Stack *s, Person p);

/*Insert sorted base on lastname. Rember to use the property
  of the stack but without using push, pop, and peek functions.*/
bool insertSorted2(Stack *s, Person p);

/*Sort the values based on name. Use flag for ascending
  or descending. */
void sortStack(Stack *s, bool flag);



#endif
