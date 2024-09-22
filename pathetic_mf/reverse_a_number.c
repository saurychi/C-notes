#include <stdio.h>
#include <stdlib.h>

int main(){

    int len;
    int *nums;
    int *compNums;

    printf("Enter amount of numbers: ");
    scanf("%d", &len);

    printf("%d", len);

    nums = calloc(len, sizeof(int));
    compNums = calloc(len, sizeof(int));

    for(int i = 0; i < len; i++){
        printf("Enter a number: ");
        scanf("%d", &nums[i]);
    }

    int counter = 0;
    for(int i = len - 1; i >= 0; i--){
        compNums[i] = nums[counter];
        counter++;
    }

    for(int i = 0; i < len; i++){
        printf("%d ", compNums[i]);
    }

    free(nums);
    free(compNums);

    return 0;

}
