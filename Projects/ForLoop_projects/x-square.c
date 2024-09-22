#include <stdio.h>

int main(){

    int len;

    printf("Enter length of box: ");
    scanf("%d", &len);

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(j == i || j == len - 1 - i){
                printf("O");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}
