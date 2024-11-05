#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "functions.h"

void initStack(Stack* s){
    *s = NULL;
}
int peek(Stack s){
    return s->elem;
}
void push(Stack* s, int num){
    NodePtr temp = malloc(sizeof(NodeType));
    temp->elem = num;
    temp->link = *s;
    *s = temp;
}
void pop(Stack* s){
    NodePtr temp = *s;
    *s = (*s)->link;
    free(temp);
}
bool isEmptyS(Stack s){
    return s == NULL;
}
void visualizeStack(Stack s){
    Stack tempS;
    initStack(&tempS);

    while(s != NULL){
        printf(" %d", peek(s));
        push(&tempS, peek(s));
        pop(&s);
    }

    while(tempS != NULL){
        push(&s, peek(tempS));
        pop(&tempS);
    }
}


void initQueue(Queue* q){
    q->head = NULL;
    q->tail = NULL;
}

int frontQ(Queue q) {
    return q.head->elem;
}

bool isEmptyQ(Queue q){
    return q.head == NULL;
}

void enqueue(Queue* q, int num){
    NodePtr temp = malloc(sizeof(NodeType));
    temp->elem = num;
    temp->link = NULL;

    if(q->head == NULL){
        q->head = temp;
        q->tail = temp;
    } else {
        q->tail->link = temp;
        q->tail = q->tail->link;
    }
}

void dequeue(Queue* q){
    NodePtr temp = q->head;
    q->head = q->head->link;
    free(temp);
}

void visualizeQueue(Queue q){
    Queue temp;
    initQueue(&temp);

    while(!isEmptyQ(q)){
        enqueue(&temp, frontQ(q));
        printf(" %d", frontQ(q));
        dequeue(&q);
    }

    while(!isEmptyQ(temp)){
        enqueue(&q, frontQ(temp));
        dequeue(&temp);
    }
}

Queue stack_to_queue(Stack s){
    Stack tempS;
    initStack(&tempS);
    Queue tempQ;
    initQueue(&tempQ);

    while(!isEmptyS(s)){
        enqueue(&tempQ, peek(s));
        push(&tempS, peek(s));
        pop(&s);
    }

    while(!isEmptyS(tempS)){
        push(&s, peek(tempS));
        pop(&tempS);
    }

    return tempQ;
}
