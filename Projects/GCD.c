#include <stdio.h>

int main(){

    int num1, num2, len, gcd;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if(num1 > num2){
        len = num1;
    } else {
        len = num2;
    }

    for(int i = 1; i <= len; i++){
        if((num1 % i == 0) && (num2 % i == 0)){ 
            gcd = i;
        }
    }

    printf("%d", gcd);

    return 0;

}
