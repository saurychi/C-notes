#include <stdio.h>

int main(){

    // can only be used in single characters, cannot used in like: "15"
    char x = '5';
    int y =  5;

    x -= '0'; // change into integer from character

    printf("%d", x);

    y += '0';

    printf("\n%c", y); // change into character from integer

    return 0;
}
