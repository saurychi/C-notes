#include <stdio.h>

int main(){

    int num = 1;

    char strnum = num + '0';
    strnum = strnum - '0';

    printf("%d", strnum);
    // printf("%c", strnum);

    return 0;
}
