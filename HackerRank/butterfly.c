#include <stdio.h>

int main(){

    int num = 6;

    // scanf("%d", &num);

    int len = num * 2;

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(i < num){
                if(j <= i){
                    printf("* ");
                } else if(j >= len - i - 1){
                    printf("* ");
                } else {
                    printf("  ");
                }
            } else { // 6 7 8 9 10
                if(j <= num - (i - num) - 1){
                    printf("* ");
                } else if(j >= i){
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
