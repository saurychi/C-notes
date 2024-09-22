#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "LinkedListDynamic.h"

void initList(List* list){
    list->elems = NULL;
}

List createList(){
    List list;
    list.elems = NULL;
    return list;
}

void display(List list){
    for(Node* curr = list.elems; curr != NULL; curr = curr->next){
        printf("\n%d", curr->elem);
    }
}

bool insertFront(List *list, int item){
    Node* newNode = malloc(sizeof(Node));
    newNode->elem = item;
    newNode->next = list->elems;
    list->elems = newNode;


    return true;
}

bool insertLast(List *list, int item){
    Node* newNode = malloc(sizeof(Node));
    newNode->elem = item;
    newNode->next = NULL;

    Node* lastNode = NULL;
    for(lastNode = list->elems; lastNode->next != NULL; lastNode = lastNode->next);
    lastNode->next = newNode;

    return true;
}

bool insertAt(List *list, int item, int position){
    Node* newNode = malloc(sizeof(Node));
    newNode->elem = item;

    int counter = 0;

    Node* startNode = NULL;
    for(startNode = list->elems; counter < position-2; startNode = startNode->next, counter++);
    newNode->next = startNode->next;
    startNode->next = newNode;

    return true;
}

bool deleteFirst(List *list){
    Node* secondNode = list->elems->next;
    free(list->elems);
    list->elems = secondNode;
}

bool deleteLast(List *list){
    Node* sec_lastNode = NULL;
    for(sec_lastNode = list->elems; sec_lastNode->next->next != NULL; sec_lastNode = sec_lastNode->next);
    sec_lastNode->next = NULL;
}

bool deleteAt(List *list, int position){
    Node* toDelete_node = NULL;
    int counter = 0;
    for(toDelete_node = list->elems; counter < position-2; toDelete_node = toDelete_node->next, counter++);
    Node* nextNode = toDelete_node->next;
    toDelete_node->next = toDelete_node->next->next;
    free(nextNode);
}

// Search, Sort

void greet(){
    printf("Wonderhoy!");
}
