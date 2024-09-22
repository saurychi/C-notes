#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;

void AddBeginning(Node**);
void insertLast(Node**);
void insertAt(Node**, int);
void deleteBeginning(Node **);
void deleteEnd(Node **);
void deletAt(Node **, int);
void Sort(Node**);
void display(Node*);
void reverseArr(Node** head);

int main(){

    Node* head = NULL;


    AddBeginning(&head);
    AddBeginning(&head);
    AddBeginning(&head);
    AddBeginning(&head);
    AddBeginning(&head);

    // insertLast(&head);

    // insertAt(&head, 3);

    // printf("\n\n==Insert==");
    // display(head);

    // printf("\n\n==Delete==");
    // deleteBeginning(&head);
    // deleteEnd(&head);
    // deletAt(&head, 2);

    display(head);

    // printf("\n\n==Sort==");
    // Sort(&head);

    printf("\n\n==Reverse==");
    reverseArr(&head);

    display(head);

    return 0;
}

void AddBeginning(Node** head){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    Node* temp = malloc(sizeof(Node));
    temp->data = num;
    temp->next = *head;
    *head = temp;
}

void insertLast(Node** head){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    Node* newNode = malloc(sizeof(Node));
    newNode->data = num;
    newNode->next = NULL;

    Node* curr;
    for(curr = *head; curr->next != NULL; curr = curr->next);
    curr->next = newNode;
}

void insertAt(Node** head, int position){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    Node* newNode = malloc(sizeof(Node));
    newNode->data = num;

    Node* curr;
    int i = 0;
    for(curr = *head; i < position - 2; curr = curr->next){
        i++;
    }
    newNode->next = curr->next;
    curr->next = newNode;
}

void deleteBeginning(Node ** head){
    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteEnd(Node ** head){
    Node* curr;
    for(curr = *head; curr->next->next != NULL; curr = curr->next);
    free(curr->next->next);
    curr->next = NULL;
}

void deletAt(Node ** head, int position){

    int i = 0;
    Node* curr;
    for(curr = *head; i < position - 2; curr = curr->next){
        i++;
    }
    Node* temp = curr->next;
    curr->next = curr->next->next;
    free(temp);

}

void Sort(Node** head){
    Node* tempj;
    Node* tempk;
    Node* temp;
    int pos, count = 0;

    for(Node* curr = *head; curr != NULL; curr = curr->next){
        count++;
    }

    Node* curr = *head;
    for(int i = 0; i < count; i++){

        for(int j = 0; j < i; j++){
            curr = curr->next;
        }

        tempj = curr;
        for(Node* currj = curr; currj != NULL; currj = currj->next){
            if(currj->data > tempj->data){
                tempk = currj;
            }
        }

        temp = tempj;
        tempj = tempk;
        tempk = temp;

    }
}



void display(Node* head){
    int i = 0;
    if(head == NULL){
        printf("\nNo Data\n");
        return;
    }
    for(Node* curr = head; curr != NULL; curr = curr->next){
        ++i;
        printf("\n%d: %d", i, curr->data);
    }
}

void reverseArr(Node** head){
    Node* curr = NULL;
    Node* temp = NULL;
    Node* tempList = NULL;

    while(*head != NULL){
        tempList = malloc(sizeof(Node));

        if((*head)->next == NULL){
            printf("Lastest: %d", curr->data);
            tempList->data = curr->data;
        } else {
            for(curr = *head; curr->next->next != NULL; curr = curr->next);
            printf("Last: %d", curr->next->data);
            tempList->data = curr->next->data;
        }
        tempList->next = NULL;
        tempList = tempList->next;
        // delete last
        temp = curr->next;
        curr->next = NULL;
        free(temp);
    }

    *head = tempList;
}


