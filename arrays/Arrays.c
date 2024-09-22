#include <stdio.h>

int main() {
    // array = a data structure that can store many values of the same data type

    // double prices [5]; // you could also do this where you assign an array how many elements it has to have

    // prices [0] = 5.0;
    // prices [1] = 10.0;
    // prices [2] = 15.0;
    // prices[3] = 25.0;
    // prices [4] = 20.0;

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 50.00};

    char name[] = "Walter"; // this string has a "[]" since a string is essentially an array of characters

    // printf("$%.2lf", prices[0]); // $5.00

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}
