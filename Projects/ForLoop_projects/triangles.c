#include <stdio.h>

int main(){

    int choice;

    printf("Enter a choice: ");
    scanf("%d", &choice);

    // printf("Enter length: ");
    // scanf("%d", &len);

    if(choice == 1){

        /*
            RIGHT TRIANGLE
            *
            **
            ***
            ****
            *****
        */

        int len = 5;
        for(int i = 0; i < len; i++){
            for(int j = 0; j < len; j++){
                if(j <= i){
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }

    } else if (choice == 2){

        /*
            RIGHT DOWNWARD TRIANGLE
            *****
            ****
            ***
            **
            *
        */

        int len = 5;
        for(int i = 0; i < len; i++){
            for(int j = 0; j < len; j++){
                if(j <= len - i - 1){
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }

    } else if (choice == 3){

        /*
            LEFT TRIANGLE
                *
               **
              ***
             ****
            *****
        */

        int len = 5;
        for(int i = 0; i < len; i++){
            for(int j = 0; j < len; j++){
                if(j >= len - i - 1){
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }

    } else if (choice == 4){

        /*
            LEFT DOWNWARD TRIANGLE
            *****
             ****
              ***
               **
                *
        */

        int len = 5;
        for(int i = 0; i < len; i++){
            for(int j = 0; j < len; j++){
                if(j >= i){
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }

    }


    return 0;
}
