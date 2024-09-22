#include <stdio.h>

void return_pointer(int *num){
    *num = 10;

}
int main(){

    int num = 1;
    printf("%d", num);

    return_pointer(&num);

    printf("\n%d", num);

    return 0;

}
