#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;

void changeNode(Node*);

int main(){

    Node** head;

    changeNode(&head);

    return 0;
}

void changeNode(Node** head){

}
