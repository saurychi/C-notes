#include <stdio.h>
#include <stdlib.h>
//10:24
int main(){

    int num, len = 0;
    int *binaryArr = calloc(len, sizeof(int));
    int *compBinaryArr = calloc(len, sizeof(int));

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0){
        len++;
        binaryArr = realloc(binaryArr, len * sizeof(int));
        binaryArr[len - 1] = num % 2;
        num /= 2;
    }

    compBinaryArr = realloc(compBinaryArr, len * sizeof(int));

    int counter = 0;
    for(int i = len -1; i >= 0; i--){
        compBinaryArr[i] = binaryArr[counter];
        counter++;
    }

    for(int i = 0; i < len; i++){
        printf("%d ", compBinaryArr[i]);
    }
    printf("\n");
    for(int i = 0; i < len; i++){
        printf("%d ", binaryArr[i]);
    }

    free(binaryArr);
    free(compBinaryArr);
    
    return 0;
}
