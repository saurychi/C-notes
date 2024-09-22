#include <stdio.h>

int main(){

    int array[] = {1,2,3};
    int number = 0;

    for (int i = 0; i < 3; i++) {
    number *= 10;
    number += array[i];
    }

    printf("%d\n", number);


    return 0;
}
