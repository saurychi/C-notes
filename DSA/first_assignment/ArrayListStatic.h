#ifndef ARRAY_LIST_STATIC_H
#define ARRAY_LIST_STATIC_H

#include <stdbool.h>
#define MAX 10

typedef struct{
    int elems[MAX];
    int count;
} List;

void initList(List *list);
List createList();
void display(List list);
bool insertFront(List *list, int item);

#endif
