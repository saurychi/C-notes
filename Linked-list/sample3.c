#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int num;
    struct Node* next;
} Node;

void populate(Node*, int);
Node* getEven(Node*);
void display(Node*);
void insertLast(Node**, int);

int main(){

    Node head;
    int len;

    printf("How many numbers are there? ");
    scanf("%d", &len);
    populate(&head, len);
    display(&head);

    printf("\n");
    Node* evenNums = getEven(&head);
    display(evenNums);

    return 0;

}

void populate(Node* head, int len){
    printf("Enter number: ");
    scanf("%d", &(head->num));
    Node* curr = head;
    curr->next = malloc(sizeof(Node));
    curr = curr->next;
    for(int i = 0; i < len - 1; i++){
        printf("Enter number: ");
        scanf("%d", &(curr->num));
        if(i == len - 2){
            curr->next = NULL;
        } else {
            curr->next = malloc(sizeof(Node));
            curr = curr->next;
        }
    }
}

void insertLast(Node** node, int num){
    Node* temp = malloc(sizeof(Node));
    temp->num = num;
    temp->next = NULL;
    if(*node == NULL){
        *node = temp;
    } else {
        Node* curr;
        for(curr = *node; curr->next != NULL; curr = curr->next);
        curr->next = temp;
    }
}

Node* getEven(Node* head){
    Node* evenNums = NULL;
    for(Node* curr = head; curr != NULL; curr = curr->next){
        if(curr->num % 2 == 0){
            insertLast(&evenNums, curr->num);
        }
    }
    return evenNums;
}

void display(Node* head){
    printf("%d ", head->num);
    for(Node* curr = head->next; curr != NULL; curr = curr->next){
        printf("%d ", curr->num);
    }
}
