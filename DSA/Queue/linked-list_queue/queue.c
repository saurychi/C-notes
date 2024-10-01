#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "queue.h"


void initQueue(Queue* q){
    q->head = NULL;
    q->tail = NULL;
}

int front(Queue q){
    return q.head->num;
}

bool isEmpty(Queue q){
    return q.head == NULL;
}

bool enqueue(Queue* q, int num){
    Node* temp = malloc(sizeof(Node));
    temp->num = num;
    temp->link = NULL;

    if(isEmpty(*q)){
        q->head = temp;
        q->tail = temp;
    } else {
        q->tail->link = temp;
        q->tail = temp;
    }

}

bool dequeue(Queue* q){
    Node* temp = q->head;
    q->head = q->head->link;
    free(temp);
}

void display(Queue q){
    printf("Queue: {\n");
    for(Node* curr = q.head; curr != NULL; curr = curr->link){
        printf("\t%d\n", curr->num);
    }
    printf("}\n");
}

// void visualize(Queue q){
//     int num = front(q);
//     printf("Queue: {\n");
//     do {
//         printf(" %d", front(q));
//         dequeue(&q);
//         enqueue(&q, num);
//     } while(front(q) != num);
//     printf("\n}");
// }

void visualize(Queue q){
    printf("Queue: {\n");
    while (q.head != NULL) {
        printf(" %d", q.head->num);
        q.head = q.head->link;
    }
    printf("\n}");
}

// void visualize(Queue q){
//     printf("Queue: {\n");
//     Node* temp = q.head;
//     while (temp != NULL) {
//         printf(" %d", temp->num);
//         temp = temp->link;
//     }
//     printf("\n}");
// }
