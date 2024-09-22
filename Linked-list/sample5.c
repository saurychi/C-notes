#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct tm tm;

typedef struct{
    char fname[20];
    char lname[20];
} Name;

typedef struct{
    int month;
    int year;
} Date;

typedef struct{
    Name personName;
    Date expiryDate;
    int balance;
    int idNum;
} BankInfo;

typedef struct Node{
    BankInfo data;
    struct Node* next;
} Node;

void populate(Node**, int);
void display(Node*);
void transferBal(Node**);
void findSpecific(Node**);
void removeExpired(Node**, Node**);

int main(){

    Node* accounts = malloc(sizeof(Node));
    Node* expired = NULL;
    int len;

    printf("Enter number of accounts: ");
    scanf("%d", &len);

    populate(&accounts, len); // 5

    // display(accounts);

    // findSpecific(&accounts);

    // transferBal(&accounts);

    // display(accounts);

    removeExpired(&accounts, &expired);

    printf("\n-----------------------------");
    printf("\n==Accounts==");
    display(accounts);
    printf("\n\n==Expired==");
    display(expired);

    for(Node* curr = accounts; curr != NULL; curr = curr->next){
        free(curr);
    }

    return 0;
}

void transferBal(Node** head){
    int idNum1, idNum2, amount;

    printf("\n\nEnter your ID number: ");
    scanf("%d", &idNum1);
    printf("Enter ID number you want to transfer: ");
    scanf("%d", &idNum2);
    printf("Enter amount to transfer: ");
    scanf("%d", &amount);

    for(Node* curr = *head; curr != NULL; curr = curr->next){
        if(curr->data.idNum == idNum1){
            curr->data.balance -= amount;
        } else if(curr->data.idNum == idNum2){
            curr->data.balance += amount;
        }
    }
}

void findSpecific(Node** head){
    int idNum;
    printf("\n\nEnter ID number: ");
    scanf("%d", &idNum);

    for(Node* curr = *head; curr != NULL; curr = curr->next){
        if(curr->data.idNum == idNum){
            printf("\n\nName: %s, %s", curr->data.personName.lname, curr->data.personName.fname);
            printf("\nExpiry Date: %d/%d", curr->data.expiryDate.month, curr->data.expiryDate.month);
            printf("\nBalance: %d", curr->data.balance);
            printf("\nID Number: %d", curr->data.idNum);
            break;
        }
    }

}

void removeExpired(Node** accounts, Node** expired){
    time_t currentTime;
    time(&currentTime);
    tm *myTime = localtime(&currentTime);

    Node* lastExpired;
    Node* expiredNode;
    for(Node* currAcc = *accounts; currAcc->next != NULL; currAcc = currAcc->next){
        if((currAcc->next->data.expiryDate.year < myTime->tm_year + 1900) || (currAcc->next->data.expiryDate.year == myTime->tm_year + 1900 && currAcc->next->data.expiryDate.month < myTime->tm_mon + 1)){
            expiredNode = currAcc->next;
            currAcc->next = currAcc->next->next;
            printf("\n\nName: %s, %s", expiredNode->data.personName.lname, expiredNode->data.personName.fname);
            expiredNode->next = NULL;
            if (*expired == NULL) {
                *expired = expiredNode;
            } else {
                lastExpired->next = expiredNode;
            }
            lastExpired = expiredNode;
        }
    }
}

// for(Node* currAcc = *accounts; currAcc->next != NULL; currAcc = currAcc->next){
//         if((currAcc->next->data.expiryDate.year < myTime->tm_year + 1900) || (currAcc->next->data.expiryDate.year == myTime->tm_year + 1900 && currAcc->next->data.expiryDate.month < myTime->tm_mon + 1)){
//             if(*expired == NULL){
//                 (*expired) = currAcc->next;
//                 currAcc->next = currAcc->next->next;
//                 printf("\n\nName: %s, %s", (*expired)->data.personName.lname, (*expired)->data.personName.fname);
//                 currExp = *expired;
//             } else {
//                 currExp = currAcc->next;
//                 printf("\n\nName: %s, %s", currExp->data.personName.lname, currExp->data.personName.fname);
//                 currAcc->next = currAcc->next->next;
//             }
//             currExp->next = NULL;
//             currExp = currExp->next;
//         }
//     }

void populate(Node** head, int len){

    Node nodeArr[5] = {
        {{{"Walter", "Caballero"}, {11, 2030}, 9000, 21700254}, NULL},
        {{{"Emu", "Otori"}, {6, 2023}, 10000, 19802652}, NULL}, // expired
        {{{"Kasumi", "Nakasu"}, {9, 2031}, 700, 15119652}, NULL},
        {{{"Kazusa", "Azusa"}, {4, 2024}, 0, 18349652}, NULL}, // expired
        {{{"Nene", "Nakasu"}, {12, 2040}, 99000, 77599652}, NULL}
    };

    Node* curr = *head;
    for(int i = 0; i < len; i++){
        if(i == len - 1){
            memcpy(curr, &nodeArr[i], sizeof(Node));
            curr->next = NULL;
        } else {
            memcpy(curr, &nodeArr[i], sizeof(Node));
            curr->next = malloc(sizeof(Node));
            curr = curr->next;
        }
    }

}

void display(Node* head){
    for(Node* curr = head; curr != NULL; curr = curr->next){
        printf("\n\nName: %s, %s", curr->data.personName.lname, curr->data.personName.fname);
        printf("\nExpiry Date: %d/%d", curr->data.expiryDate.month, curr->data.expiryDate.year);
        printf("\nBalance: %d", curr->data.balance);
        printf("\nID Number: %d", curr->data.idNum);
    }
}
