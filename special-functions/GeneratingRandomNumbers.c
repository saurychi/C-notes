#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //  pseudo random numbers = A set of values or elements that are statistically random
    //                          (Don't use these for any sort of cryptographic security)

    // use current time to get seed for random number, and to avoid having the same random number everytime
    srand(time(0));

    // divides random number by 6 and gets its remainder, ranges only (0 - 5)
    int number1 = (rand() % 5);

    // you can also broaden its range by changing the number after "%" at the end e.g. "(rand() % 6)", now ranges (0 - 6)
    int number2 = (rand() % 6);

    // adding a "+ n" after "(rand() % 6)" e.g. "(rand() % 6) + 1" now ranges (1 - 6)
    int number3 = (rand() % 6) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}
