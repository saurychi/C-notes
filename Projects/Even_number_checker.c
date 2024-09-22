#include <stdio.h>

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    /*
    The "num & 1" checks the least significant number
    - if its 1 then its odd
    - if its 0 then its even
    */
    (num & 1)? printf("It is an odd number!") : printf("It is an even number!");
}
