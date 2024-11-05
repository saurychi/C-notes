#include <stdio.h>
#include <stdlib.h>
#include "MinBH_Static.h"

void initBH(BinaryHeap* BH){
    BH->count = 0;
}


void buildMinHeap(BinaryHeap* BH){

    // BH->elems[(2*i)+1] -> left child node
    // BH->elems[(2*i)+2] -> right child node
    // BH->elems[(i-1)/2] -> parent node
    int count, num, child, childInd;
    for(int i = BH->count/2 - 1; i >= 0; i--){
        int count = i;
        int num = BH->elems[i];

        while((2*count)+1 < BH->count || (2*count)+2 < BH->count){
            if((2*count)+1 < BH->count && (2*count)+2 < BH->count){
                child = BH->elems[(2*count)+1] < BH->elems[(2*count)+2] ? BH->elems[(2*count)+1] : BH->elems[(2*count)+2];
                childInd = BH->elems[(2*count)+1] < BH->elems[(2*count)+2] ? (2*count)+1 : (2*count)+2;
            } else if((2*count)+1 < BH->count){
                child = BH->elems[(2*count)+1];
                childInd = (2*count)+1;
            } else {
                child = BH->elems[(2*count)+2];
                childInd = (2*count)+2;
            }

            if(child < num){
                BH->elems[count] = child;
                count = childInd;
            } else {
                break;
            }
        }

        BH->elems[count] = num;
    }
}

void minHeapify(BinaryHeap* BH, int i){
    int child, childInd;
    int num = BH->elems[i];
    int count = i;

    while((count*2)+1 < BH->count || (count*2)+2 < BH->count){
        if((count*2)+1 < BH->count && (count*2)+2 < BH->count){
            child = BH->elems[(count*2)+1] < BH->elems[(count*2)+2] ? BH->elems[(count*2)+1] : BH->elems[(count*2)+2];
            childInd = BH->elems[(count*2)+1] < BH->elems[(count*2)+2] ? (count*2)+1 : (count*2)+2;
        } else if((count*2)+1 < BH->count){
            child = BH->elems[(count*2)+1];
            childInd = (count*2)+1;
        } else {
            child = BH->elems[(count*2)+2];
            childInd = (count*2)+2;
        }

        if(child < num){
            BH->elems[count] = child;
            count = childInd;
        } else {
            break;
        }
    }

    BH->elems[count] = num;
}

// minHeap
void insertBH(BinaryHeap* BH, int num){
    if(BH->count == 20){
        return;
    }
    int count;
    for(count = BH->count; count != 0 && BH->elems[(count - 1)/2] > num; count = (count - 1)/2){
        BH->elems[count] = BH->elems[(count - 1)/2];
    }
    BH->elems[count] = num;
    BH->count++;

}

void minHeapSort(BinaryHeap* BH){
    // buildMinHeap(BH); // must be a max heap already
    int og_count = BH->count;
    int num, count, child, childInd;

    while(BH->count != 0){
        num = BH->elems[BH->count-1];
        count = 0;
        BH->elems[BH->count-1] = BH->elems[0];
        BH->elems[0] = num;
        BH->count--;

        while((count*2)+1 < BH->count || (count*2)+1 < BH->count){
            if((count*2)+1 < BH->count && (count*2)+2 < BH->count){
                child = BH->elems[(count*2)+1] < BH->elems[(count*2)+2] ? BH->elems[(count*2)+1] : BH->elems[(count*2)+2];
                childInd = BH->elems[(count*2)+1] < BH->elems[(count*2)+2] ? (count*2)+1 : (count*2)+2;
            } else if((count*2)+1 < BH->count){
                child = BH->elems[(count*2)+1];
                childInd = (count*2)+1;
            } else {
                child = BH->elems[(count*2)+2];
                childInd = (count*2)+2;
            }

            if(num > child){
                BH->elems[count] = child;
                count = childInd;
            } else {
                break;
            }
        }

        BH->elems[count] = num;
        // displayHeap(*BH);
    }
    BH->count = og_count;
}

// minHeap
void deleteBH(BinaryHeap* BH){
    int root = BH->elems[0];
    BH->elems[0] = BH->elems[BH->count-1];
    BH->count--;
    int num = BH->elems[0];
    int child, childIndx;
    int i = 0;

    while((2*i)+1 < BH->count || (2*i)+2 < BH->count){
        if((2*i)+1 < BH->count-1 && (2*i)+2 < BH->count-1){
            child = BH->elems[(2*i)+1] < BH->elems[(2*i)+2] ? BH->elems[(2*i)+1] : BH->elems[(2*i)+2];
            childIndx = BH->elems[(2*i)+1] < BH->elems[(2*i)+2] ? (2*i)+1 : (2*i)+2;
        } else if ((2*i)+1 < BH->count-1){ // left
            child = BH->elems[(2*i)+1];
            childIndx = (2*i)+1;
        } else { // right
            child = BH->elems[(2*i)+2];
            childIndx = (2*i)+2;
        }

        if(num > child){
            BH->elems[i] = child;
            BH->elems[childIndx] = num;
            i = childIndx;
        } else {
            break;
        }
    }
}

void displayHeap(BinaryHeap BH){
    for(int i = 0; i < BH.count; i++){
        printf("%d ", BH.elems[i]);
    }
    printf("\n");
}
