#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char fname[50];
    char MI[50];
    char lname[50];
} Name;

typedef struct
{
    Name name;
    long int mobileNum;
    char emailAdd[50];
} Users;

void populate(Users **users, int *len);
void browse(Users **users, int len);

int main()
{

    int len;
    printf("Enter number of users: ");
    scanf("%d", &len);

    Users **userList = malloc(len * sizeof(Users *));

    populate(userList, &len);

    browse(userList, len);

    for (int i = 0; i < len; i++)
    {
        free(userList[i]);
    }
    free(userList);
    userList = NULL;

    return 0;
}

void populate(Users **list, int *len)
{
    for (int i = 0; i < (*len); i++)
    {
        list[i] = malloc(sizeof(Users));
        printf("\nEnter first name: ");
        scanf(" %[^\n]", list[i]->name.fname);
        printf("Enter middle name: ");
        scanf(" %[^\n]", &(list[i]->name.MI));
        printf("Enter last name: ");
        scanf(" %[^\n]", list[i]->name.lname);
        printf("Enter mobile number: ");
        scanf("%d", &(list[i]->mobileNum));
        printf("Enter email Address: ");
        scanf(" %[^\n]", list[i]->emailAdd);
    }
}

void browse(Users** users, int len){
    int flag = 0;
    char choice, count = 0;

    char lName[50];
    long int mobNum;

    while(flag){
        printf("[B] Browse all\n");
        printf("[L] Browse by Last Name\n");
        printf("[N] Browse by Mobile No.\n");
        printf("\nChoice? ");
        scanf(" %c", &choice);
        choice = toupper(choice);

        switch (choice){
            case 'B':
                for (int i = 0; i < len; i++)
                {
                    printf("\n%s %s %s -", users[i]->name.fname, users[i]->name.MI, users[i]->name.fname);
                    printf(" %ld -", users[i]->mobileNum);
                    printf(" %s\n", users[i]->emailAdd);
                }
                break;
            case 'L':
                printf("\nEnter Last name to search: ");
                scanf(" %[^\n]", lName);

                for (int i = 0; i < len; i++){
                    if(strcmp(users[i]->name.lname, lName) == 0){
                        count++;
                    }
                }
                if(count == 0){
                    printf("Error: LastName/Mobile No. not found!");
                } else {
                    printf("=======================================================");
                    for (int i = 0; i < len; i++){
                        if(strcmp(users[i]->name.lname, lName) == 0){
                            printf("\n%s %s %s -", users[i]->name.fname, users[i]->name.MI, users[i]->name.fname);
                            printf(" %ld -", users[i]->mobileNum);
                            printf(" %s\n", users[i]->emailAdd);
                        }
                    }
                }
                break;
            case 'N':
                printf("Enter mobile number: ");
                scanf("%ld", &mobNum);

                for (int i = 0; i < len; i++){
                    if(users[i]->mobileNum = mobNum){
                        count++;
                    }
                }
                if(count == 0){
                    printf("Error: LastName/Mobile No. not found!");
                } else {
                    printf("=======================================================");
                    for (int i = 0; i < len; i++){
                        if(users[i]->mobileNum == mobNum){
                            printf("\n%s %s %s -", users[i]->name.fname, users[i]->name.MI, users[i]->name.fname);
                            printf(" %ld -", users[i]->mobileNum);
                            printf(" %s", users[i]->emailAdd);
                        }
                    }
                }
        }
        printf("Again[Y/N]? ");
        scanf("%d", &choice);
    }


}
