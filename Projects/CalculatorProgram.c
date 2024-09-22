#include <stdio.h>

int main () {

    char charOperator;
    double num1;
    double num2;
    double answer;

    printf("\nEnter operator for this calculation: ");
    scanf("%c", &charOperator);

    printf("\nEnter first Number: ");
    scanf("%lf", &num1);

    printf("\nEnter second Number: ");
    scanf("%lf", &num2);

    if (charOperator == '+') {
        answer = num1 + num2;
        printf("%.2lf + %.2lf: %.0lf\n", num1, num2, answer);
    } else if (charOperator == '-') {
        answer = num1 - num2;
        printf("%.2lf - %.2lf: %.0lf\n", num1, num2, answer);
    } else if (charOperator == '*') {
        answer = num1 * num2;
        printf("%.2lf * %.2lf: %.0lf\n", num1, num2, answer);
    } else if (charOperator == '/') {
        answer = num1 / num2;
        printf("%.2lf / %.2lf: %.1lf\n", num1, num2, answer);
    } else {
        printf("%c is not a valid operator\n", charOperator);
    }


    return 0;
}
