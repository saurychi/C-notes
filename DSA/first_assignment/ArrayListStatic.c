#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "ArrayListStatic.h"

void initList(List *list){
    list->count = 0;
}

List createList(){
    List list;
    list.count = 0;
    return list;
}

void display(List list){
    for(int i = 0; i < list.count; i++){
        printf("\n%d", list.elems[i]);
    }
}

bool insertFront(List *list, int item){
    if(list->count == 0){
        list->count++;
        list->elems[0] = item;
    } else if (list->count < MAX){
        list->count++;
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
    if(list->count < MAX){
        list->count++;
        list->elems[(list->count)-1] = item;
    } else {
        return false;
    }
    return true;
}

bool insertAt(List *list, int item, int position){
    if(list->count < MAX){
        if(position > list->count){
            return false;
        } else {
            list->count++;
            for(int i = list->count-1; i >= position; i--){
                list->elems[i] = list->elems[i-1];
            }
            list->elems[position - 1] = item;
        }
    } else {
        return false;
    }
    return true;
}

bool deleteFirst(List *list){
    for(int i = 0; i < list->count-1; i++){
        list->elems[i] = list->elems[i+1];
    }
    list->count--;

}

bool deleteLast(List *list){
    list->count--;
}

bool deleteAt(List *list, int position){
    for(int i = position-1; i < list->count-1; i++){
        list->elems[i] = list->elems[i+1];
    }
    list->count--;
}

// Search, Sort

void greet(){
    printf("Wonderhoy!");
}
