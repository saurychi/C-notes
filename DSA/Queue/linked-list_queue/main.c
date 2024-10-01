#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "queue.c"

int main(){

    Queue q;
    initQueue(&q);

    enqueue(&q, 7);
    enqueue(&q, 9);
    enqueue(&q, 5);
    enqueue(&q, 1);
    enqueue(&q, 6);
    enqueue(&q, 3);
    enqueue(&q, 2);

    // dequeue(&q);
    // dequeue(&q);
    // dequeue(&q);
    // dequeue(&q);
    // dequeue(&q);
    // dequeue(&q);
    // dequeue(&q);

    visualize(q);
    visualize(q);
    // display(q);


    return 0;
}
