#include <stdio.h>
#include <string.h>

int main(){

    char s[] = "abcdefghijklmnopqrstuvwxyz";
    char d [27];

    memcpy(d, s, sizeof(char) * 27);
    // d represents where to put the data
    // s represents where to get the data
    // last parameter represents the sizeof the values and how many are there

    printf("%s", d); // returns d


    char e[10];
    memcpy(e, s+8, sizeof(char) * 9);
    // e represents where to put the data
    // "s" in "s+8" represents where to get the data
    // "8" in "s+8" represents what index you start of from the array, we are using pointer arithmetic here
    // last parameter represents the sizeof the values and how many are there
    e[9] = '\0';

    printf("\n%s", e); // returns "ijklmnopq"

    return 0;
}
