#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char* name;
    int age;
}Data;

typedef struct Node{
    Data data;
    struct Node* next;
} Node;

void insertAtLast(Node**);

int main(){

    Node* head = NULL;

    insertAtLast(&head);

    return 0;
}

void insertAtLast(Node** head){

    Node* newNode = malloc(sizeof(Node));
    char* name;

    printf("Enter name: ");
    scanf("%s", name);

    printf("\n\n%s", name);

    if(*head == NULL){

    }

    free(newNode);
}
