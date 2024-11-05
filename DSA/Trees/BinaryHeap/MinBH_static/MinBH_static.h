#ifndef BH_STATIC
#define BH_STATIC
#define MAX 20
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int elems[MAX];
    int count;
} BinaryHeap;

void initBH(BinaryHeap* BH);
void buildMinHeap(BinaryHeap* BH);
void minHeapify(BinaryHeap* BH, int i);
void insertBH(BinaryHeap* BH, int num);
void deleteBH(BinaryHeap* BH);
void minHeapSort(BinaryHeap* BH);
void displayHeap(BinaryHeap BH);



#endif
