#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, len = 0;
    int *numArr = calloc(len, sizeof(int));

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0){
        len++;
        numArr = realloc(numArr, len * sizeof(int));
        numArr[len - 1] = num % 10;
        num /= 10;
    }

    printf("Foundation Codes: ");
    for(int i = 0; i < len; i++){
        printf("%d ", numArr[i]);
    }

    int temp;
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len - 1; j++){
            if(numArr[j] > numArr[j + 1]){
                temp = numArr[j + 1];
                numArr[j + 1] = numArr[j];
                numArr[j] = temp;
            }
        }
    }

    printf("\nSorted Codes: ");
    for(int i = 0; i < len; i++){
        printf("%d ", numArr[i]);
    }

    printf("\nGaps: ");
    for(int i = 0; i < 10; i++){
        int counter = 0;
        for(int j = 0; j < len; j++){
            if(i != numArr[j]){
                counter++;
            }
        }
        if(counter == len){
            printf("%d ", i);
        }
    }


    free(numArr);
    numArr = NULL;
    return 0;

}
