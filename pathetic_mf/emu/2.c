#include <stdio.h>

void max_num(int x, int y, int* max){
    *max = (x > y)? x :y;
}

int main(){
    int x, y, max;

    printf("Enter number: ");
    scanf("%d",&x);

    printf("Enter number: ");
    scanf("%d",&y);

    max_num(x, y, &max);

    printf("Max: %d", max);


    return 0;

}
