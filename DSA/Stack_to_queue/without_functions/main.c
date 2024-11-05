#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int elem;
    struct node* link;
} NodeType, *NodePtr, *Stack;

typedef struct{
    NodePtr head;
    NodePtr tail;
} Queue;

int main(){

    Stack s;
    s = NULL;
    NodePtr temp = NULL;

    temp = malloc(sizeof(NodeType));
    temp->elem = 1;
    temp->link = s;
    s = temp;

    temp = malloc(sizeof(NodeType));
    temp->elem = 9;
    temp->link = s;
    s = temp;

    temp = malloc(sizeof(NodeType));
    temp->elem = 7;
    temp->link = s;
    s = temp;

    temp = malloc(sizeof(NodeType));
    temp->elem = 3;
    temp->link = s;
    s = temp;

    // showing stack
    Stack ts;
    ts = NULL;
    while(s != NULL){
        // printf(" %d", s->elem);
        temp = malloc(sizeof(NodeType));
        temp->elem = s->elem;
        temp->link = ts;
        ts = temp;

        temp = s;
        s = s->link;
        free(temp);
    }

    while(ts != NULL){
        temp = malloc(sizeof(NodeType));
        temp->elem = ts->elem;
        temp->link = s;
        s = temp;

        temp = ts;
        ts = ts->link;
        free(temp);
    }

    Queue q;
    q.head = NULL;
    q.tail = NULL;

    temp = malloc(sizeof(NodeType));
    temp->elem = 1;
    temp->link = NULL;

    if(q.head == NULL){
        q.head = temp;
        q.tail = temp;
    } else {
        q.tail->link = temp;
        q.tail = q.tail->link;
    }

    temp = malloc(sizeof(NodeType));
    temp->elem = 9;
    temp->link = NULL;
    q.tail->link = temp;
    q.tail = q.tail->link;

    temp = malloc(sizeof(NodeType));
    temp->elem = 7;
    temp->link = NULL;
    q.tail->link = temp;
    q.tail = q.tail->link;

    temp = malloc(sizeof(NodeType));
    temp->elem = 3;
    temp->link = NULL;
    q.tail->link = temp;
    q.tail = q.tail->link;


    Queue tq;
    tq.head = NULL;
    tq.tail = NULL;

    while(q.head != NULL){
        printf(" %d", q.head->elem);
        temp = malloc(sizeof(NodeType));
        temp->elem = q.head->elem;
        temp->link = NULL;

        if(tq.head == NULL){
            tq.head = temp;
            tq.tail = temp;
        } else {
            tq.tail->link = temp;
            tq.tail = tq.tail->link;
        }

        temp = q.head;
        q.head = q.head->link;
        free(temp);
    }

    while(tq.head != NULL){
        temp = malloc(sizeof(NodeType));
        temp->elem = tq.head->elem;
        temp->link = NULL;

        if(q.head == NULL){
            q.head = temp;
            q.tail = temp;
        } else {
            q.tail->link = temp;
            q.tail = q.tail->link;
        }

        temp = tq.head;
        tq.head = tq.head->link;
        free(temp);
    }

    




    return 0;
}
