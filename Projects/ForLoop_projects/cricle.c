#include <stdio.h>

int main(){

    int len;

    printf("Enter length: ");
    scanf("%d", &len);

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(i == 0
                || i == len - 1
                || j < ((len/2) - i)
                || j > ((len/2) + i)
                || j < ((len/2) - (len/i))
                || j > ((len/2) + (len/i))
                // 14 > 7.5 + 6.5
                // 14 > 14
            ){
                printf(" - ");
            } else {
                printf(" O ");
            }
        }
        printf("\n");
    }

    return 0;
}
