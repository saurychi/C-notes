#include <stdio.h>
#include <stdlib.h>
#include "MinBH_Static.c"

int main()
{

  BinaryHeap BH;
  initBH(&BH);

  insertBH(&BH, 5);
  insertBH(&BH, 1);
  insertBH(&BH, 72);
  insertBH(&BH, 69);
  insertBH(&BH, 115);
  insertBH(&BH, 404);
  insertBH(&BH, 10);

  // BinaryHeap BH = {
  //     {8, 1, 2, 12, 4, 10, 7, 6, 0, 9, 5, 11, 3, 13},
  //     14
  // };

  // buildMinHeap(&BH);
  // 0 1 2 6 4 3 7 8 12 9 5 11 10 13

  // 8 1 2 12 4 10 7 6 0 9 5 11 3 13
  // minHeapify(&BH, 0);
  // 1 4 2 12 5 10 7 6 0 9 8 11 3 13

  // minHeapSort(&BH);

  deleteBH(&BH);
  // deleteBH(&BH);
  // deleteBH(&BH);
  // deleteBH(&BH);
  // deleteBH(&BH);
  // deleteBH(&BH);

  printf("\n\n");
  displayHeap(BH);

  return 0;
}
