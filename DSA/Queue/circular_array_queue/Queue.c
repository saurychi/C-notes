#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "Queue.h"

void intQueue(QueueADT* q, int max){
    // clockwise
    q->max = max;
    q->studList = malloc(sizeof(Student) * q->max);
    q->front = 1;
    q->rear = 0;
}

QueueADT createQueue(int max){
    QueueADT q;
    q.max = max;
    q.studList = malloc(sizeof(Student) * q.max);
    q.front = 1;
    q.rear = 0;
    return q;
}

bool isEmpty(QueueADT q){
    return (q.rear + 1) % q.max == q.front;
}

bool isFull(QueueADT q){
    return (q.rear + 2) % q.max == q.front;
}

void makeEmpty(QueueADT *q){
    q->front = 1;
    q->rear = 0;
}

bool enqueue(QueueADT *q, Student s){
    if(!isFull(*q)){
        q->rear = (q->rear + 1) % q->max; // (0 + 1) % 7
        q->studList[q->rear] = s;
        // printf("\nRear: %d", q->rear);
        return true;
    }
    return false;
}

bool dequeue(QueueADT *q){
    if(!isEmpty(*q)){
        q->front = ((q->front + 1) % q->max);
        return true;
    }
    return false;
}

Student front(QueueADT q){
    return q.studList[q.front];
}

void visualize(QueueADT q){
    printf("Queue {\n");
    for(int i = q.front; i <= q.rear; i++){
        printf("  %s", q.studList[i].studName.fname);
        if(i != q.rear){
            printf(",\n");
        }
    }
    printf("\n}\n");

    printf("Front: %d\n", q.front);
    printf("Rear: %d", q.rear);
}

Name createName(String fname, String lname){
    Name n;

    strcpy(n.fname, fname);
    strcpy(n.lname, lname);

    return n;
}

Student createStudent(int ID, Name name, bool sex, String program, int year){
    Student s;

    s.studID = ID;
    s.studName = name;
    s.sex = sex;
    strcpy(s.program, program);
    s.year = year;

    return s;
}
