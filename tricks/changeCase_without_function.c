#include <stdio.h>

int main(){

    char x = 'a';
    char y = 'A';

    x -= 32; // Uppercase

    printf("%c\n", x);

    y += 32; // Lowercase

    printf("%c\n", y);

    return 0;
}
