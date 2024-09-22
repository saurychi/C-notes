// Given an unsorted array of integers,
// find the length of the longest increasing subsequence.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int len = 0, resLen = 0, currentNum;
    int *arr = calloc(len, sizeof(int));


    printf("How many numbers do you want your numbers to have? ");
    scanf("%d", &len);

    for(int i = 0; i < len; i++){
        printf("Enter number: ");
        scanf("%d", &currentNum);
        if(i == 0){
            resLen++;
            arr = realloc(arr, resLen * sizeof(int));
            arr[resLen - 1] = currentNum;
        }
        if(currentNum > arr[resLen - 1]){
            resLen++;
            arr = realloc(arr, resLen * sizeof(int));
            arr[resLen - 1] = currentNum;
        }
    }

    printf("");

    for(int i = 0; i < resLen; i++){
        printf("%d ", arr[i]);
    }

    printf("\n\nSo, the length of the longest increasing subsequence is %d.\n", resLen);


    free(arr);
    return 0;
}
