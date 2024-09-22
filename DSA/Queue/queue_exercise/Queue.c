#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Queue.h"

void initNQueue(NQueue *nq){

}

bool isEmpty(NQueue nq);
bool isFull(NQueue nq);
void displayQueue(NQueue nq);

bool enqueue(NQueue *nq, Name n);
bool dequeue(NQueue *nq);
Name front(NQueue nq);
