#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "Queue.h"

void initNQueue(NQueue *nq){
    nq->front = 0;
    nq->rear = -1;
}

bool isEmpty(NQueue nq){
    return ((nq.rear + 1) % MAX == nq.front);
}

// doko?
bool isFull(NQueue nq){
    return ((nq.rear + 2) % MAX == nq.front);
}

void displayQueue(NQueue nq){
    printf("\nQueue: {");
    if(!isEmpty(nq)){
        for(int i = nq.front; i != nq.rear; i=(i + 1) % MAX){
            printf("\n\t%s, %s", nq.elems[i].lname, nq.elems[i].fname);
        }
        printf("\n\t%s, %s", nq.elems[nq.rear].lname, nq.elems[nq.rear].fname);
    }
    printf("\n}\n");
}

bool enqueue(NQueue *nq, Name n){
    if(isFull(*nq)){
        printf("\nFull\n");
        return false;
    }
    nq->rear = (nq->rear + 1) % MAX;
    nq->elems[nq->rear] = n;
    // printf("\nRear: %d", nq->rear);

    return true;
}
bool dequeue(NQueue *nq){
    if(isEmpty(*nq)){
        return false;
    }
    nq->front = (nq->front + 1) % MAX;
    return true;
}
Name front(NQueue nq){
    return nq.elems[nq.front];
}

Name createName(char* fname, char* lname){
    Name n;
    strcpy(n.fname, fname);
    strcpy(n.lname, lname);

    return n;
}

Name* filterNames(NQueue *nq, char *filterString){
    // printf("Wonderhoy!");
    Name* fn = malloc(sizeof(Name) * MAX);
    Name temp;
    int j = 0;
    int i = nq->front; // 0
    int rear = nq->rear;
    // printf("\nFront: %d", nq->front);
    // printf("\nRear: %d", nq->rear);
    while(i != rear){
        if(strcmp(front(*nq).lname, filterString) == 0){
            fn[j++] = front(*nq);
            dequeue(nq);
            // printf("Name: %s", fn[j].lname);
        } else {
            temp = nq->elems[i];
            dequeue(nq);
            enqueue(nq, temp);
        }
        i = (i + 1) % MAX;
    }

    // printf("Wonderhoy!");
    fn[j] = createName("", "");
    // printf("Name: %s", fn[j].lname);
    return fn;
}

// learn sorting dynamic queues
bool insertSorted(NQueue *nq, Name n){
    if(isFull(*nq)){
        return false;
    }
    Name temp;
    NQueue tempQ;
    initNQueue(&tempQ);

    // printf("\n1");
    while(!isEmpty(*nq) && front(*nq).lname[0] >= n.lname[0]){
        temp = front(*nq);
        dequeue(nq);
        enqueue(&tempQ, temp);
    }

    enqueue(nq, n);

    while(!isEmpty(tempQ)){
        temp = front(tempQ);
        dequeue(&tempQ);
        enqueue(nq, temp);
    }

    return true;
}
