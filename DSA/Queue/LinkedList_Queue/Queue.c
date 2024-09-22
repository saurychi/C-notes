#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "Queue.h"
#include "MyData.h"

void greet(){
    printf("\nWonderhoy!");
}

void initQueue(Queue* q){
    q->head = NULL;
    q->tail = NULL;
}

Queue createQueue(){
    Queue q;

    q.head = NULL;
    q.tail = NULL;


    return q;
}

bool isEmpty(Queue q){
    if(q.head == NULL){
        return true;
    }
    return false;
}

void visualize(Queue q){
    printf("Linked Queue List{ \n");
    for(NodePtr curr = q.head; curr != NULL; curr = curr->link){
        printf("\t%-10s %-10s = %-10d\n", curr->elem.structName.lname, curr->elem.structName.fname, curr->elem.studID);
    }
    printf("\n}");
}

Data front(Queue q){
    return q.head->elem;
}

bool dequeue(Queue *q){
    if(!isEmpty(*q)){
        NodePtr tempPtr = q->head;
        q->head = q->head->link;
        free(tempPtr);
        return true;
    }
    return false;
}

void display(Queue q){
    NodePtr temp;
    printf("Linked Queue List{ \n");
    while(!isEmpty(q)){
    // for(int i = 0; i < 6; i++){
        printf("\t%s, %s\n", front(q).structName.lname, front(q).structName.fname);
        dequeue(&q);
    }
    printf("\n}");
}

bool enqueue(Queue *q, Data d){
    NodePtr n = malloc(sizeof(NodeType));
    if(n != NULL){
        n->elem = d;
        n->link = NULL;
        if (q->head == NULL) {
            q->head = n;
            q->tail = n;
        } else {
            q->tail->link = n;
            q->tail = n;
        }
        return true;
    }
    return false;
}

Name createName(String fname, String lname){
    Name n;

    strcpy(n.fname, fname);
    strcpy(n.lname, lname);

    // printf("\nName: %s, %s\n", fname, lname);

    return n;
}


Student createStudent(int id, Name studName, char sex, String program){
    Student s;

    s.studID = id;
    s.structName = studName;
    s.sex = sex;
    strcpy(s.program, program);

    // printf("\nName: %s, %s\n", s.structName.fname, s.structName.lname);

    return s;
}

void makeNull(Queue *q){ // dont use any function specially dequeue()
    q->head = NULL;
    q->tail = NULL;
}

bool insertSorted(Queue *q, Data d){ // insert data in correct position
    NodePtr curr = q->head;
    Data temp;
    if(curr == NULL){
        enqueue(q, d);
        return true;
    }
    while(d.studID > curr->elem.studID && !isEmpty(*q)){
        temp = curr->elem;
        dequeue(q);
        enqueue(q, temp);
        greet();
    }
    enqueue(q, d);
    return true;
}

// Name* getStudent(Queue q, String program, char sex);

void sortQueue(Queue* q){
    Queue sq;
    initQueue(&sq);
    Data temp;
    int largest_num;
    int current;

    while(!isEmpty(*q)){
        largest_num = q->head->elem.studID;
        current = q->head->elem.studID;
        // printf("\nCurrent: %d", current);
        do{
            temp = q->head->elem;
            dequeue(q);
            enqueue(q, temp);
            if(largest_num < q->head->elem.studID){
                // printf("\nCurrent: %d", curr->elem.studID);
                largest_num = q->head->elem.studID;
            }
        } while(q->head->elem.studID != current);
        // printf("\nLargest: %d", largest_num);

        // printf("\nFirst: %d", q->head->elem.studID);
        while(q->head->elem.studID != largest_num){
            temp = q->head->elem;
            dequeue(q);
            enqueue(q, temp);
        }

        temp = q->head->elem;
        dequeue(q);
        enqueue(&sq, temp);

        // printf("\nFirst(sq): %d", sq.head->elem.studID);

    }

    q->head = sq.head;

}
