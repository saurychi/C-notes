#include <stdio.h>
#include <stdlib.h>
#include "MaxBH_Recursive.c"

int main(){

    // BinaryHeap BH;
    // initBH(&BH);

    // insertBH(&BH, 5);
    // insertBH(&BH, 1);
    // insertBH(&BH, 72);
    // insertBH(&BH, 69);
    // insertBH(&BH, 115);
    // insertBH(&BH, 404);
    // insertBH(&BH, 10);

    BinaryHeap BH = {
        {8, 1, 2, 12, 4, 10, 7, 6, 0, 9, 5, 11, 3, 13},
        14
    };

    buildMaxHeap(&BH);
    // 13 12 11 6 9 10 7 1 0 4 5 8 3 2

    // 8 1 2 12 4 10 7 6 0 9 5 11 3 13
    // maxHeapify(&BH, 2);
    // 8 1 10 12 4 11 7 6 0 9 5 2 3 13

    maxHeapSort(&BH);

    // deleteBH(&BH);
    // deleteBH(&BH);
    // deleteBH(&BH);
    // deleteBH(&BH);
    // deleteBH(&BH);
    // deleteBH(&BH);

    displayHeap(BH);

    return 0;
}
