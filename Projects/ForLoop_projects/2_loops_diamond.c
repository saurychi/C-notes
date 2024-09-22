#include <stdio.h>

int main(){

    float len;

    printf("Enter length: ");
    scanf("%f", &len);

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(
            j < ((len - 1)/2) - i && i < (len - 1)/2
            || j > ((len - 1)/2) + i && i < (len - 1)/2
            || j < ((len - 1)/2) + (i - (len - 1)) && i > (len - 1)/2
            || j > ((len - 1)/2) - (i - (len - 1)) && i > (len - 1)/2
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
