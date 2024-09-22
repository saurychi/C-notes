#include <stdio.h>

int main(){

    int num, multiple, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    multiple = num * num;// "25 = (-5)^2"
    printf("1: %d\n", multiple);

    temp = multiple + num; // "20 = 25 + (-5)" => "20 = 25 - 5"
    printf("2: %d\n", temp);

    num = multiple - temp; // 5 = 25 - 20
    printf("3: %d", num);


    return 0;
}
