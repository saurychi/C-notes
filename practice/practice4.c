#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[50];
    int id;
} Item;

void addItems(Item** arr, int* len);
void displayItems(Item** arr, int len);

int main(){

    int len = 0;

    Item** items = malloc(len * sizeof(Item)); // array of structs

    printf("Hello\n");
    addItems(items, &len);
    displayItems(items, len);

    free(items);
    items = NULL;
    return 0;
}

void addItems(Item** arr, int* len){
    (*len)++;
    *arr = realloc(*arr, (*len) * sizeof(Item));
    strcpy((*arr)[(*len) - 1].name, "fa");
    (*arr)[(*len) - 1].id = 69;

}

void displayItems(Item** arr, int len){
    for(int i = 0; i < len; i++){
        printf("Name: %s\n", arr[i]->name);
        printf("ID: %d\n", arr[i]->id);
    }
}
