#include <stdio.h>
#include <string.h>

int main(){

    int num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator: ");
    while(getchar() != '\n');
    scanf("%c", &op);


    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(op){
        case '+':
            result = num1 + num2;
            printf("%d", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d", result);
            break;
        case '/':
            result = num1 / num2;
            printf("%d", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d", result);
            break;
    }


    return 0;

}
