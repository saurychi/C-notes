#include <stdio.h>
int main() {

    // arithmetic operators

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ increment
    // - decrement

    int x = 5;
    int y = 2;

    int sum = x + y;
    int difference = x - y;
    int product = x * y;

    int quotient = x / y;
    int decimal = x % y;
    float quotientWithRemainder = x / (float) y;// divide numbers that results with both the number and remainder

    int increment = 5 ;
    increment++;

    int decrement = 5;
    decrement--;

    printf ("5 + 2: '%d'\n", sum);
    printf ("5 - 2: '%d'\n", difference);
    printf ("5 * 2: '%d'\n", product);

    printf ("5 / 2: '%d'\n", quotient);
    printf ("5 / 2: remainder: '%d'\n", decimal);
    printf ("5 / 2: '%.1f'\n", quotientWithRemainder);// the "%.1f" here means that only the first digit after "." is shown

    printf ("10++: '%d'\n", increment);
    printf ("10--: '%d'\n", decrement);


    return 0;
}
