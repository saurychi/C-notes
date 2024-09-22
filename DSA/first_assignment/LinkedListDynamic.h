#ifndef LINKED_LIST_DYNAMIC_H
#define LINKED_LIST_DYNAMIC_H

#include <stdbool.h>

typedef struct Node{
    int elem;
    struct Node* next;
} Node;

typedef struct List{
    Node* elems;
} List;

void initList(List *list);
List createList();
void display(List list);
bool insertFront(List *list, int item);

#endif
