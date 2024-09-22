#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter your names: ");
    fgets(name, 100, stdin);
    name[strcspn(name, "\n")] = '\0';

    for(int i = 0; i < strlen(name); i++){
        if(name[i] == ' '){
            printf("there is a space!\n");
        }
    }

    printf("\n%s", name);


    return 0;
}
