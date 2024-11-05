#include <stdio.h>
#include <stdlib.h>
#include "MaxBH_recursive.h"

void initBH(BinaryHeap* BH){
    BH->count = 0;
}

void maxHeapify(BinaryHeap* BH, int i){
    int left = (i*2)+1;
    int right = (i*2)+2;
    int largest = i;

    if(left > BH->count || right > BH->count){
        return;
    }

    int num = BH->elems[i];

    if(left < BH->count && BH->elems[largest] < BH->elems[left])
        largest = left;

    if(right < BH->count && BH->elems[largest] < BH->elems[right])
        largest = right;

    if(largest != i){
        int num = BH->elems[i];
        BH->elems[i] = BH->elems[largest];
        BH->elems[largest] = num;
        maxHeapify(BH, largest);
    }

}

void buildMaxHeap(BinaryHeap* BH){
    for(int i = (BH->count/2)-1; i >= 0; i--){
        maxHeapify(BH, i);
    }
}

void insertBH(BinaryHeap* BH, int num){
    if(BH->count == 20){
        return;
    }
    BH->count++;
    BH->elems[BH->count-1] = num;
    int i;
    for(i = BH->count-1; i != 0 && BH->elems[(i-1)/2] < num; i = (i-1)/2){
        BH->elems[i] = BH->elems[(i-1)/2];
    }
    BH->elems[(i-1)/2] = num;
}

void deleteBH(BinaryHeap* BH){
    BH->elems[0] = BH->elems[BH->count-1];
    BH->count--;
    maxHeapify(BH, 0);
}

void maxHeapSort(BinaryHeap* BH){
    int og_count = BH->count;
    int num;
    while(BH->count != 0){
        num = BH->elems[0];
        BH->elems[0] = BH->elems[BH->count-1];
        BH->elems[BH->count-1] = num;
        BH->count--;
        maxHeapify(BH, 0);
    }

    BH->count = og_count;
}

void displayHeap(BinaryHeap BH) {
    printf("\n\n");
    for(int i = 0; i < BH.count; i++){
        printf("%d ", BH.elems[i]);
    }
}
