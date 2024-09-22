#include <stdio.h>
#include <stdlib.h>

int main(){
    int* pSample = (int*) malloc(sizeof(int)); // this declares 1 memory allocation for *p
    *pSample = 5; // needs to have "*" to make it a pointer of your allocating only one variable
    printf("The value is %d", *pSample);
    free(pSample);

    int* pSample = (int*) malloc(3*sizeof(int)); // this declares 3 memory allocation
    pSample[1] = 3; // is okay not to use "*"
    pSample[2] = 90;
    printf("The values are %d and %d", pSample[1], pSample[2]);
    // but if you get the first iteration..
    printf("The values are %d, %d and %d", pSample[0], pSample[1], pSample[2]);
    // you get a weird number at the first since you didnt initialize everything first to 0
    free(pSample);

    // thats why

    int* pSample = (int*) calloc(3, sizeof(int)); // this declares 3 memory allocation and sets all elements to 0
    // calloc needs ("how many elements" , "size of the elements")
    pSample[1] = 3; // is okay not to use "*"
    pSample[2] = 90;
    printf("The values are %d and %d", pSample[1], pSample[2]);
    free(pSample);

    return 0;
}
