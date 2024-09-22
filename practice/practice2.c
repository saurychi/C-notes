#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char lName[20];
    char fName[20];
    char MI;
} empName;

typedef struct{
    int empId;
    empName name;
    int yrsServed;
} companyInfo;

typedef struct{
    companyInfo record[20];
    int ctr;
} companyRecord;

void populateList(companyRecord** arr, int* len);

int main(){

    int lenOf_persons;
    companyRecord *persons = NULL;

    printf("How many employees do you want to add: ");
    scanf("%d", &lenOf_persons);

    populateList(&persons, &lenOf_persons);


    free(persons);
    persons = NULL;
    return 0;
}

void populateList(companyRecord** arr, int* len){

    *arr = realloc(*arr, (*len) * sizeof(companyRecord));

    for(int i = 0; i < (*len); i++){
        printf("Enter Last name: ");
        scanf(" %[^\n]", (*arr)[i].record[i].name.lName);
        printf("Enter First name: ");
        scanf(" %[^\n]", (*arr)[i].record[i].name.fName);
        printf("Enter Middle Initial: ");
        scanf(" %c", &((*arr)[i].record[i].name.MI));
        printf("Enter Employee ID: ");
        scanf("%d", &((*arr)[i].record[i].empId));
        printf("Enter Years Served: ");
        scanf("%d", &((*arr)[i].record[i].yrsServed));

    }
    for(int i = 0; i < (*len); i++){
        printf("Hai domo!\n");
        printf("Last Name: %s \n", (*arr)[i].record[i].name.lName);
        printf("First Name: %s \n", (*arr)[i].record[i].name.fName);
        printf("Middle Initial: %c \n", (*arr)[i].record[i].name.MI);
        printf("ID: %d \n", (*arr)[i].record[i].empId);
    }

}
