#include <stdio.h>

int main(){

    int len;

    printf("Enter length: ");
    scanf("%d", &len);

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(j == len/2 || i == len/2){
                printf(" O ");
            } else {
                printf(" * ");
            }
        }
        printf("\n");
    }

    return 0;
}
