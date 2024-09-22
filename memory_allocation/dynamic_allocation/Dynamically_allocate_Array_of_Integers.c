#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;
    int arrSize = 0; // declare the size of the array

    int* arr; // declare an array
    // or
    // int *arr = calloc(arrSize, sizeof(int));

    printf("Enter a number: ");
    scanf("%d", &num);

    // create memory allocation for an array of integers
    arr = calloc(arrSize, sizeof(int)); // calloc("size of the array", "size of the elements in the array")

    // a countermeasure to evaluate if the allocated memory is NULL as it sometimes do that
    // do the same with realloc but am lazy ~~~
    if (arr == NULL) {
        fprintf(stderr, "Array not allocated!");
        return 1;
    }


	for(int i = 0; i <= num; i++){
        arrSize++; // increements the size and...
        arr = realloc(arr, arrSize * sizeof(int));// updates it to the memory allocation to have +1 size

        arr[i] = i; // add current value from index to array
        printf("%d, ", arr[i]);
    }
    free(arr);// free up memory allocated variables
    return 0;
}
