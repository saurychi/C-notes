#include <stdio.h>
#include <stdlib.h>
#include "MinBH_recursive.h"

void initBH(BinaryHeap* BH){
    BH->count = 0;
}

void minHeapify(BinaryHeap* BH, int i){
    // buildMinHeap(&BH);
    int left = (i*2)+1;
    int right = (i*2)+2;
    int largest = i;

    if(left < BH->count && BH->elems[left] < BH->elems[largest]){
        largest = left;
    }
    if(right < BH->count && BH->elems[right] < BH->elems[largest]){
        largest = right;
    }

    if(i != largest){
        int num = BH->elems[i];
        BH->elems[i] = BH->elems[largest];
        BH->elems[largest] = num;
        minHeapify(BH, largest);
    }

}

void buildMinHeap(BinaryHeap* BH){
    for(int i = (BH->count/2)-1; i >= 0; i--){
        minHeapify(BH, i);
    }
}

void insertBH(BinaryHeap* BH, int num){
    if(BH->count == 20){
        return;
    }

    BH->count++;
    int i;
    for(i = BH->count-1; i != 0 && num < BH->elems[(i-1)/2]; i = (i-1)/2){
        BH->elems[i] = BH->elems[(i-1)/2];
    }

    BH->elems[i] = num;
}

void deleteBH(BinaryHeap* BH){
    BH->elems[0] = BH->elems[BH->count-1];
    BH->count--;
    minHeapify(BH, 0);
}

void minHeapSort(BinaryHeap* BH){
    int og_count = BH->count;
    int num;

    while(BH->count != 0){
        num = BH->elems[0];
        BH->elems[0] = BH->elems[BH->count-1];
        BH->elems[BH->count-1] = num;
        BH->count--;
        minHeapify(BH, 0);
    }

    BH->count = og_count;
}

void displayHeap(BinaryHeap BH){
    printf("\n\n");
    for(int i = 0; i < BH.count; i++){
        printf("%d ", BH.elems[i]);
    }
}
