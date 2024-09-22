#include <stdio.h>

int main(){
    // BITWISE OPERATORS = special operators used in bit level programming
    // (knowing binary is important for this topic)
    // & = AND
    // = OR
    // ^ = XOR(exclusive or)
    // << left shift
    // >> right shift

    int x = 6; // 6 = 00000110
    int y = 12; //12 = 00001100
    int z = 0; // 0 = 00000000

    z = x & y; // results to "00000100" which is "4"
    printf("AND = %d\n", z) ;// returns 4

    z = x | y;// reslts to "00001110" which is "14"
    printf ("OR = %d\n", z) ;// returns 14

    z = x ^ y;// reslts to "00001010" which is "10"
    printf ("XOR = %d\n", z) ;// returns 10

    z = x << 1;// reslts to "00001100" which is "12"
    printf ("SHIFT LEFT = %d\n", z) ;// returns 12

    z = x >> 1;// reslts to "00000011" which is "3"
    printf ("SHIFT RIGHT = %d\n", z) ;// returns 3

    return 0;
}
