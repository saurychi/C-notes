#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "stack.h"

void initStack(Stack* s){
    s->elems = NULL;
    s->max = MAX;
    s->count = 0;
}
bool isEmpty(Stack s) {
    return s.elems == NULL;
}

bool isFull(Stack s){
    return s.count == MAX;
}

int peek(Stack s){
    return s.elems->num;
}

void push(Stack* s, int num){
    Node* temp = malloc(sizeof(Node));
    temp->num = num;
    temp->link = s->elems;
    s->elems = temp;
}

void pop(Stack* s) {
    Node* temp = s->elems;
    s->elems = s->elems->link;
    free(temp);
}

bool visualize(Stack s){
    if(isEmpty(s)){
        printf("Stack is empty\n");
        return false;
    }
    printf("\nStack{");
    while(!isEmpty(s)){
        printf("\n\t%d", peek(s));
        pop(&s);
    }
    printf("\n}");
    return true;
}

void sort(Stack* s){
    Stack tempS;
    initStack(&tempS);
    int temp;
    while(!isEmpty(*s)){
        temp = peek(*s);
        pop(s);
        while(!isEmpty(tempS) && peek(tempS) < temp){
            push(s, peek(tempS));
            pop(&tempS);
        }
        // visualize(tempS);

        push(&tempS, temp);
        // printf("Yo dayo!");
    }

    while(!isEmpty(tempS)){
        push(s, peek(tempS));
        pop(&tempS);
    }

}
