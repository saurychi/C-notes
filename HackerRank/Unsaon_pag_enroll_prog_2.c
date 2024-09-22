#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplifyFraction(int *numerator, int *denominator){
    int commonFactor = gcd(*numerator, *denominator);
    *numerator /= commonFactor;
    *denominator /= commonFactor;
}

int main() {
    int num1, den1, num2, den2;

    scanf("%d %d", &num1, &den1);

    scanf("%d %d", &num2, &den2);

    if (den1 == 0 || den2 == 0) {
        printf("ERROR\n");
        return 0;
    }

    int resultNum = num1 * den2 + num2 * den1;
    int resultDen = den1 * den2;

    simplifyFraction(&resultNum, &resultDen);

    if (resultDen == 1) {
        printf("%d\n", resultNum);
    } else {
        printf("%d/%d\n", resultNum, resultDen);
    }

    return 0;
}
