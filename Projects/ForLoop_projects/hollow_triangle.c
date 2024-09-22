#include <stdio.h>

int main(){

    for(int i=0; i<=7; i++){
        for(int j=0; j<=7-i; j++){
            printf(" ");
        }
        if(i == 0 || i == 7){
            for(int j=0; j < (i*2)+1; j++){
                printf("*");
            }
        } else {
            for(int j=0; j < (i*2)+1; j++){
                if(j == 0 || j == (i*2)){
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
