#include <stdio.h>
#include <string.h>

typedef struct{
    char rom[3];
    int rom_num;
} Romans;

int main(){

    Romans roman[13] = {
        {"I", 1}, // 1 2 3 | 6 | 7 | 8
        {"IV", 4}, // 4
        {"V", 5}, // 5 6 7 8
        {"IX", 9}, // 9
        {"X", 10}, // 10
        {"XL", 40},
        {"L", 50},
        {"XC", 90},
        {"C", 100},
        {"CD", 400},
        {"D", 500},
        {"CM", 900},
        {"M", 1000}
    };

    int num;
    char roman_numeral[50] = "";
    int i = 12;

    printf("Enter number: ");
    scanf("%d", &num);

    while(num){
        if(num < roman[i].rom_num){
            i--;
        } else {
            strcat(roman_numeral, roman[i].rom);
            num -= roman[i].rom_num;
            i = 12;
        }

    }

    printf("\n%s", roman_numeral);


    return 0;
}
