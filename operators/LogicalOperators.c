#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = && (AND) checks if two conditions are true
    float ANDtemp = 25;
    bool stormy = false;
    if(ANDtemp >= 0 && ANDtemp <= 30 && stormy == false){
        printf("\nThe weather is good!\n");
    }
    else{
        printf("\nThe weather is bad!\n");
    }

    // logical operators =|| (OR) checks if at least one codition is true
    float ORtemp = 1000;
    if(ORtemp <= 0 || ORtemp >= 30){
    printf("\nThe weather| is bad!");
    }
    else{
    printf("InThe weather is good!");
    }

    // logical operators = ! (NOT) reverses the state of a condition
    bool sunny = true;
    if (!sunny) {
        printf("\nIt's sunny outside!");
    }
    else{
        printf("\nIt's cloudy outside!");
    }


    return 0;
}
