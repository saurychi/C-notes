#include <stdio.h>
#include <stdlib.h>

/*
    // this changes the values of the current array specified

    void copy_array(int *array, int *result) {
        for (int i = 0; i < 5; i++)
            result[i] = array[i];
    }
*/

int* copy_array(int len, int *array) {

        int* result = malloc(len * sizeof(int));

        for (int i = 0; i < 5; i++)
            result[i] = array[i];

        return result;
    }


int main() {
    int array[] = {1,2,3,4,5};

    /*
        // can be used the pointer as the array
        int *result = array;
        printf("result[3]: %d\n", result[3]);

        //since they have the same memory address
        printf("\narray: %p\n", array); // this address
        printf("result: %p\n", result); // is also the same as this address

    */

/*
    // if you want the function to return a new array from the sent array you can just
    // make a second array from the function to get the result from the first array

    int second_array[5];
    copy_array(array, second_array);

    for (int i = 0; i < 5; i++)
        printf("array[%d] = %d\n", i, second_array[i]);

*/


    // best practice
    int* second_array;

    int len = sizeof(array)/sizeof(array[0]);

    second_array = copy_array(4, array);

    for (int i = 0; i < 5; i++)
        printf("array[%d] = %d\n", i, second_array[i]);

    free(second_array);



    return 0;
}
