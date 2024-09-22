#include <stdio.h>

int main(){

    int **array = malloc(sizeof(int *) * 3);
    
    int *array0 = malloc(sizeof(int) * 3);
    int *array1 = malloc(sizeof(int) * 3);
    int *array2 = malloc(sizeof(int) * 3);

    array[0] = array0;
    array[1] = array1;
    array[2] = array2;

    return 0;
}
