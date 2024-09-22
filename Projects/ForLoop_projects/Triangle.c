#include <stdio.h>

int main(){

    for(int i=0; i<=7; i++){
        for(int j=0; j<=7-i; j++){
            printf(" ");
        }
        for(int j=0; j < (i*2)+1; j++){// 0 <=  1(Wrong) instead use: 0 < 1 (Right)
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
