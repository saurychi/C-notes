#include <stdio.h>

int main(){

    char a = 'a';

    a -= 32; // to uppercase

    printf("%c", a);

    a += 32; // to lowercase

    printf("\n%c", a);

    return 0;
}
