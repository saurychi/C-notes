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
void buildMaxHeap(BinaryHeap* BH);
void maxHeapify(BinaryHeap* BH, int i);
void insertBH(BinaryHeap* BH, int num);
void deleteBH(BinaryHeap* BH);
void maxHeapSort(BinaryHeap* BH);
void displayHeap(BinaryHeap BH);



#endif
