#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, arrSize = 0, counter = 0;
    int* arr;

    printf("Enter a number: ");
    scanf("%d", &num);

    arr = calloc(arrSize, sizeof(int));

    for(int i = 0; i < num; i++){
        if(i % 3 == 0 || i % 5 == 0){
            arrSize++;
            arr = realloc(arr, arrSize * sizeof(int));
            arr[arrSize - 1] = i;

            printf("\nAdded %d", i);

        }
    }

    printf("\n");

    for(int i = 0; i < arrSize; i++){
        printf("%d, ", arr[i]);
    }

    free(arr);

    return 0;
}
