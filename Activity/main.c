#include "traffic_priority.c"
#include <stdio.h>
#include <string.h>

int main(){
    PriorityQueue pq;

    pq.arr[0] = createActivity("straight", "main", 50, 1);
    pq.arr[1] = createActivity("left", "diversion", 20, 4);
    pq.arr[2] = createActivity("right", "main", 25, 5);
    pq.arr[3] = createActivity("pedestrian", "diversion", 20, 8);
    pq.arr[4] = createActivity("straight", "diversion", 30, 2);
    pq.arr[5] = createActivity("left", "main", 25, 3);
    pq.arr[6] = createActivity("right", "diversion", 20, 6);
    pq.arr[7] = createActivity("pedestrian", "main", 15, 7);

    pq.count = 8;

    buildmaxHeap(&pq);

    /*

       8
     5   7
    4 1 6 3
   2

    */
    maxHeapSort(&pq);
    displayPQ(pq);

    int result = getTime(pq, "straight", "main", "pedestrian", "main");
    printf("\n\nTime to take from 'straight main' to 'pedestrian main' is: %d", result);

    printTraffic(pq, "straight", "main", "pedestrian", "main");


    return 0;
}
