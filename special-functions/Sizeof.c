#include <stdio.h>

int main() {

    // "sizeof()" lets you know how much is in an element

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 50.00};

    // use this when working with looping on arrays

    printf("%d\n", sizeof(prices)); // 48
    printf("%d\n", sizeof(prices[0])); // 8
    // 48/8 = 6, 6 being the total amount of iterations in the array

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}
