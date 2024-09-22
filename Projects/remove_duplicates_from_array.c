#include <stdio.h>
#include <stdlib.h>

int main(){

    int len;
    int *numArr;

    printf("Enter length of the array: ");
    scanf("%d", &len);
    numArr = calloc(len, sizeof(int));

    for(int i = 0; i < len; i++){
        printf("Enter a number: ");
        scanf("%d", &numArr[i]);
    }

    printf("Array: ");
    for(int i = 0; i < len; i++){
        printf("%d ", numArr[i]);
    }

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(i == j){
                continue;
            }
            if(numArr[i] == numArr[j]){
                numArr[j] = numArr[j + 1];
                len--;
                numArr = realloc(numArr, len * sizeof(int));
            }
        }
    }

    printf("\nCleaned Array: ");
    for(int i = 0; i < len; i++){
        printf("%d ", numArr[i]);
    }

    free(numArr);
    numArr = NULL;
    return 0;
}
