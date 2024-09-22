#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char title[50];
    int num;
} Data;

typedef struct Node{
    Data data;
    struct Node* next;
} Node;

void populate(Node** head, int len);
void display(Node* head);
void delete_first(Node** head);
void deleteAtPosition(Node** head, int pos);
void delete_last(Node** head);
void insert_first(Node** head);
void insert_last(Node** head);
void insertAtPos(Node** head, int pos);

int main(){

    Node* head;
    int len, pos;

    printf("Enter Number of data: ");
    scanf("%d", &len);

    populate(&head, len);
    display(head);

    int choice;

    while(1){

        printf("\n(1)Delete first\n");
        printf("(2)Delete any position\n");
        printf("(3)Delete last\n");
        printf("(4)Insert first\n");
        printf("(5)Insert Last\n");
        printf("(6)Insert any position\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 1){
            delete_first(&head);
            display(head);
        } else if(choice == 2){
            printf("\nEnter position to delete: ");
            scanf("%d", &pos);
            deleteAtPosition(&head, pos);
            display(head);
        } else if(choice == 3){
            delete_last(&head);
            display(head);
        } else if(choice == 4){
            insert_first(&head);
            display(head);
        } else if(choice == 5){
            insert_last(&head);
            display(head);
        } else if(choice == 6){
            printf("\nEnter position to insert: ");
            scanf("%d", &pos);
            insertAtPos(&head, pos);
            display(head);
        }
    }

    return 0;
}

void populate(Node** head, int len){

    *head = malloc(sizeof(Node));
    Node* curr = *head;

    strcpy(curr->data.title, "Walter");
    curr->data.num = 19;
    curr->next = malloc(sizeof(Node));
    curr = curr->next;
    strcpy(curr->data.title, "Emu");
    curr->data.num = 18;
    curr->next = malloc(sizeof(Node));
    curr = curr->next;

    for(int i = 0; i < len; i++){
        printf("Enter title: ");
        scanf(" %s", curr->data.title);
        printf("Enter number: ");
        scanf("%d", &(curr->data.num));
        if(i == len - 1){
            curr->next = NULL;
        } else {
            curr->next = malloc(sizeof(Node));
            curr = curr->next;
        }
    }
    curr->next = malloc(sizeof(Node));
    curr->next->data.num = 17;
    strcpy(curr->next->data.title, "Kasumi");
    curr->next->next = NULL;
}



void display(Node* head){
    printf("\nPeople\n");
    for(Node* curr = head; curr != NULL; curr = curr->next){
        printf("\nTitle: %s", curr->data.title);
        printf("\nNumber: %d", curr->data.num);
        printf("\n");
    }
}

void delete_first(Node** head){
    *head = (*head)->next;
}

void deleteAtPosition(Node** head, int pos){
    Node* curr = *head;
    for(int i = 0; i < pos - 2; i++){
        curr = curr->next;
    }
    Node* temp = curr->next;
    curr->next = curr->next->next;
    free(temp);
}

void delete_last(Node** head){
    Node* curr = NULL;
    for(curr = *head; curr->next->next != NULL; curr = curr->next);
    free(curr->next);
    curr->next = NULL;
}

void insert_first(Node** head){
    Node* temp = malloc(sizeof(Node));
    printf("Enter title: ");
    scanf(" %s", temp->data.title);
    printf("Enter num: ");
    scanf(" %d", &(temp->data.num));

    temp->next = *head;
    *head = temp;
}

void insert_last(Node** head){
    Node* temp = malloc(sizeof(Node));
    printf("Enter title: ");
    scanf(" %s", temp->data.title);
    printf("Enter num: ");
    scanf(" %d", &(temp->data.num));

    Node* curr;
    for(curr = *head; curr->next != NULL; curr = curr->next);
    curr->next = temp;
    temp->next = NULL;
}

void insertAtPos(Node** head, int pos){
    Node* temp = malloc(sizeof(Node));
    Node* curr = *head;
    printf("Enter title: ");
    scanf(" %s", temp->data.title);
    printf("Enter num: ");
    scanf(" %d", &(temp->data.num));

    for(int i = 0; i < pos - 2; i++){
        curr = curr->next;
    }
    temp->next = curr->next; 
    curr->next = temp;
}
