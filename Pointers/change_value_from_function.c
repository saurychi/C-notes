#include <stdio.h>

void changeInt(int*);

int main(){

    int i = 1;

    changeInt(&i);

    printf("%d", i);

    return 0;
}

void changeInt(int* i){
    *i = 2;
}
