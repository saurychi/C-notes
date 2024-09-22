#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct tm tm;

int main(){

    time_t currentTime;// should be "time_t"
    time(&currentTime);

    printf("%s", ctime(&currentTime));// prints string version of time, date, and year

    // struct tm *myTime = localtime(&currentTime); // if your not usinf typedef

    tm *myTime = localtime(&currentTime);
    printf("%d ", myTime->tm_mon + 1);// months are 0 based so january is 0 and so on

    printf("%d ", myTime->tm_mday);

    printf("%d", myTime->tm_year + 1900);// should put 1900

    // double basic_income, basic_pay;

    // printf("Enter your basic income: ");
    // scanf("%d", &basic_income);

    // printf("Enter your basic pay: ");
    // scanf("%d", &basic_pay);



    return 0;
}
