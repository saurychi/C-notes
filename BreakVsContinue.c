#include <stdio.h>

int main () {
    // continue = skips rest of code & forces the next iteration of the 100p
    // break = exits a loop
    // used commonly in switch

    for(int i = 1; i <= 20; i++) {
        if(i == 13) {
            // continue; //removes 13 from iteration
            break; // exits the loop entirely
        }
        printf("%d\n", i);
    }

    return 0;
}
