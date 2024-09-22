#include <stdio.h>
#include <string.h>

int main()
{
    // if swapping with int and floats
    char x = 'x';
    char y = 'y';
    char temp; // temporary variable where we insert the variable being sapped to

    temp = x;
    x = y;
    y = temp;

    printf("x = %c\n", x);
    printf("y = %c\n", y);

    // if swapping with strings
    // ALWAYS put a number between "[]" when using "strcpy()" or swapping values
    char water[15] = "water";
    char wine[15] = "wine";
    char glass[15];

    // "strcpy()" has a an issue if the one being copied is shorter compared to the one being copied into
    strcpy(glass, water);
    strcpy(water, wine);
    strcpy(wine, glass);

    printf("water = %s\n", water);
    printf("wine = %s\n", wine);

    return 0;
}
