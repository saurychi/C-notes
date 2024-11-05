#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "functions.c"

int main(){

    Stack s;
    initStack(&s);

    push(&s, 1);
    push(&s, 6);
    push(&s, 9);
    push(&s, 2);
    push(&s, 7);
    push(&s, 3);

    visualizeStack(s);

    printf("\n");

    Queue q;
    initQueue(&q);

    enqueue(&q, 1);
    enqueue(&q, 6);
    enqueue(&q, 9);
    enqueue(&q, 2);
    enqueue(&q, 7);
    enqueue(&q, 3);

    visualizeQueue(q);

    printf("\n");

    Queue q2;
    initQueue(&q2);
    q2 = stack_to_queue(s);

    visualizeQueue(q2);


    return 0;

}
