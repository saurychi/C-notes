#include <stdio.h>

double square (double x) { // instead of void, change it to the datatype being returned
    return x * x;
}

int main() {
    double x = square(3.14);
    printf ("%lf", x);
    return 0;
}
