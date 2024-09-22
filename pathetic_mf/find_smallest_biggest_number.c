#include <stdio.h>
#include <stdlib.h>


int main(){

    int len, temp;
    int *nums;

    printf("Enter amount of numbers: ");
    scanf("%d", &len);

    nums = calloc(len, sizeof(int));

    for(int i = 0; i < len; i++){
        printf("Enter a number: ");
        scanf("%d", &nums[i]);
    }

    for(int i = 0; i < len; i++){
        for(int j = 0; j < i; j++){
            if(nums[j] > nums[j + 1]){
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;

            }   
        }
    }

    for(int i = 0; i < len; i++){
        printf("%d ", nums[i]);
    }

    free(nums);

    return 0;

}
