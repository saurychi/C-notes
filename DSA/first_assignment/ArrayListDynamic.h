#ifndef ARRAY_LIST_DYNAMIC_H
#define ARRAY_LIST_DYNAMIC_H

#include <stdbool.h>

typedef struct{
    int *elems;
    int count;
    int max;
} List;

// void initlist(List *list, int max);
List createListDynamic(int max);
void displayList(List list);
//bool insertFront(List *list, int item);
// continue the other functions

#endif
