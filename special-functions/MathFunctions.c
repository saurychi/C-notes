#include <stdio.h>
#include <math.h>

// placing "#include <math.h>" at the top, gives you math functions like: sqrt(), etc.

int main(){

    double squareRoot = sqrt(9); // square root of 9
    double powerOf = pow(2, 4); // 2 to the power of 4
    int roundANumber = round(3.14); // round a number
    int roundUpANumber = ceil(3.14); // always rounds UP the number
    int roundDownANumber = floor(3.99); // always rounds DOWN a number
    double absoluteValueOfNumber = fabs(-100); // how far a number is from zero
    double logAlgorithm = log(3);// Log Algorithm of a number
    double sine = sin(45); // sine of a number
    double cosine = cos(45); // cosine of a number
    double tangent = tan(45); // tangent of a number

    printf ("\n%.0lf", squareRoot);
    printf ("\n%.0lf", powerOf);
    printf ("\n%d", roundANumber);
    printf ("\n%d", roundUpANumber);
    printf ("\n%d", roundDownANumber);
    printf ("\n%lf", absoluteValueOfNumber);
    printf ("\n%lf", logAlgorithm);
    printf ("\n%lf", sine);
    printf ("\n%lf", cosine);
    printf ("\n%lf", tangent);

    return 0;
}
