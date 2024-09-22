#include <stdio.h>

int main() {

    int num, rem, x;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0){
        rem = num % 10;
        num /= 10;
        printf("%d", rem);
    }


    return 0;
}
