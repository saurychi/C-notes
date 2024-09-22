#include <stdio.h>
#include <stdbool.h>

int main()
{

    double num1;
    double num2;
    char operator;
    double answer;
    bool rightOperator = false;

    printf("\nEnter first Number: ");
    scanf("%lf", &num1);

    do
    {
        scanf("%c");
        printf("\nEnter operator: ");
        scanf("%c", &operator);
    } while (operator!= '+' && operator!= '-' && operator!= '*' && operator!= '/');

    printf("\nEnter second Number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        answer = num1 + num2;
        printf("%.2lf %c %.2lf: %.0lf", num1, operator, num2, answer);
        break;
    case '-':
        answer = num1 - num2;
        printf("%.2lf %c %.2lf: %.0lf", num1, operator, num2, answer);
        break;
    case '*':
        answer = num1 * num2;
        printf("%.2lf %c %.2lf: %.0lf", num1, operator, num2, answer);
        break;
    case '/':
        answer = num1 / num2;
        printf("%.2lf %c %.2lf: %.0lf", num1, operator, num2, answer);
        break;
    }

    return 0;
}
