#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "ArrayListDynamic.h"

void initList(List *list, int max){
    list->count = 0;
    list->max = max;
    list->elems = NULL;
}

List createList(int max){
    List list;
    list.elems = malloc(sizeof(int) * max);
    list.count = 0;
    list.max = max;
    return list;
}

void display(List list){
    for(int i = 0; i < list.count; i++){
        printf("\n%d", list.elems[i]);
    }
}

bool insertFront(List *list, int item){
    list->count++;
    if(list->count == 1){
        list->elems = malloc(sizeof(int) * list->count);
        list->elems[0] = item;
    } else if(list->count < list->max){
        list->elems = realloc(list->elems, (sizeof(int) * list->count));
        for(int i = list->count-1; i >= 0; i--){
            list->elems[i] = list->elems[i-1];
        }
        list->elems[0] = item;
    } else {
        return false;
    }
    return true;
}

bool insertLast(List *list, int item){
    list->count++;
    if(list->count == 1){
        list->elems = malloc(sizeof(int) * list->count);
        list->elems[0] = item;
    } else if(list->count < list->max){
        list->elems = realloc(list->elems, (sizeof(int) * list->count));
        list->elems[list->count-1] = item;
    } else {
        return false;
    }
    return true;
}

bool insertAt(List *list, int item, int position){
    list->count++;
    if(position > list->count){
        return false;
    } else if(list->count < list->max){
        list->elems = realloc(list->elems, (sizeof(int) * list->count));
        for(int i = list->count-1; i >= position; i--){
            list->elems[i] = list->elems[i-1];
        }
        list->elems[position-1] = item;
    } else {
        return false;
    }
    return true;
}

bool deleteFirst(List *list){
    if(list->count == 0){
        return false;
    } else {
        for(int i = 0; i < list->count; i ++){
            list->elems[i] = list->elems[i+1];
        }
        list->count--;
    }
    return true;
}

bool deleteLast(List *list){
    if(list->count == 0){
        return false;
    } else {
        list->count--;
    }
    return true;
}

bool deleteAt(List *list, int position){
    if(list->count == 0){
        return false;
    } else {
        for(int i = position-1; i < list->count; i++){
            list->elems[i] = list->elems[i+1];
        }
        list->count--;
    }
    return true;
}
