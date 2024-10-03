#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "hash.h"

void initHash(Hash* h, int max){
    h->elems = malloc(sizeof(Elem*) * max);
    for(int i = 0; i < max; i++){
        h->elems[i] = NULL;
    }
    h->max = max;
    h->count = 0;
    // printf("Init Done!\n");
}

int getHash(char* string, int max){
    int sum = 0;

    for(int i = 0; i < 3; i++){
        // printf("Name: %s", string); // this prints: "Naem: emu"
        sum += string[i];
    }
    // int result = sum % max;
    // printf("\nSum: %d", result);
    return sum % max;
}

void visualize(Hash h){
    printf("HashMap: {\n");
    for(int i = 0; i < h.max; i++){
        if(h.elems[i] == NULL){
            printf("Index %d: \n", i);
        } else {
            printf("Index %d: %s\n", i, h.elems[i]->name);
        }
    }
}

bool addHash(Hash* h, char* string){
    int i = getHash(string, h->max);

    Elem* temp = malloc(sizeof(Elem));
    temp->name = malloc(sizeof(char));
    strcpy(temp->name, string);

    if(h->elems[i] != NULL){
        i++;
    }
    h->elems[i] = temp;


    return true;
}

bool removeHash(Hash* h, char* string){
    int i = getHash(string, h->max);

    while(h->elems[i] == NULL && strcmp(h->elems[i]->name, string) != 0){
        i++;
    }

    Elem* temp = h->elems[i];
    h->elems[i] = NULL;
    free(temp);

}
