#include <stdio.h>

int main(){

    int num, prod = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = num; i > 0; i--){
        if(i == 1){
            break;
        } else {
            prod *= i;
        }
        printf("%d ", prod);
    }

    printf("\n%d", prod);

    return 0;
}
