#include <stdio.h>

void add(int x, int y, int* result){
    *result = x + y;

}

int main(){

    int x, y, result;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter a number: ");
    scanf("%d", &y);

    add(x, y, &result);

    printf("Result: %d", result);

    return 0;

}
