#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "Stack.h"

void greet(char* error){
    printf("\n %s", error);
}

void initStack(Stack *s){
    *s = NULL;
}

bool isEmpty(Stack s){
    return s == NULL;
}

Person createPerson(char* name, int age, char sex){
    Person p;
    strcpy(p.name, name);
    p.age = age;
    p.sex = sex;

    return p;
}

bool push(Stack *s, Person p){
    NodePtr temp = malloc(sizeof(NodeType));
    temp->data = p;

    temp->link = (*s);
    *s = temp;
    return true;
}

bool pop(Stack *s){
    NodePtr temp = *s;
    *s = (*s)->link;
    free(temp);

    return true;
}

Person peek(Stack s){
    return s->data;
}

void displayStack(Stack s){
    printf("\nStack {");
    for(NodePtr curr = s; curr != NULL; curr = curr->link){
        printf("%s", curr->data.name);

        if(curr->link != NULL){
            printf(", ");
        }
    }
    printf("}");
}

/*Insert sorted base on lastname. Remember to use the property
  of the stack using push, pop, and peek functions.*/
bool insertSorted1(Stack *s, Person p){
    Stack temp;
    initStack(&temp);

    while(strcmp((*s)->data.name, p.name) < 0 && !isEmpty(*s)){
        push(&temp, peek(*s));
        pop(s);
    }

    push(s, p);

    while(!isEmpty(temp)){
        push(s, peek(temp));
        pop(&temp);
    }
}

/*Insert sorted base on lastname. Rember to use the property
  of the stack but without using push, pop, and peek functions.*/
bool insertSorted2(Stack *s, Person p){
    Stack tempS = NULL;
    Stack tempPop = NULL;

    NodePtr tempP = malloc(sizeof(NodeType));
    tempP->data = p;

    while(strcmp((*s)->data.name, p.name) < 0 && (*s) != NULL){
        NodePtr temp = malloc(sizeof(NodeType));
        temp->data = (*s)->data;
        temp->link = tempS;
        tempS = temp;

        tempPop = (*s);
        *s = (*s)->link;
        free(tempPop);
    }

    tempP->link = (*s);
    (*s) = tempP;

    // displayStack(tempS);

    while(tempS != NULL){
        NodePtr temp = malloc(sizeof(NodeType));
        temp->data = tempS->data;
        temp->link = (*s);
        *s = temp;

        tempPop = tempS;
        tempS = tempS->link;
        free(tempPop);
    }
}

/*Sort the values based on name. Use flag for ascending
  or descending. */
void sortStack(Stack *s, bool flag){
    Stack temp;
    initStack(&temp);

    Person top;

    // 1 = Ascending
    while(!isEmpty(*s)){
        top = peek(*s);
        pop(s);

        if(flag == 1){
            while(!isEmpty(temp) && strcmp(top.name, peek(temp).name) < 0){
                push(s, peek(temp));
                pop(&temp);
            }
            push(&temp, top);
        } else {
            while(!isEmpty(temp) && strcmp(top.name, peek(temp).name) > 0){
                push(s, peek(temp));
                pop(&temp);
            }
            push(&temp, top);
        }
    }

    while(!isEmpty(temp)){
        push(s, peek(temp));
        pop(&temp);
    }
}
