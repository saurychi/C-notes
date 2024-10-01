#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// doesnt work

int main(){
    int num, diff;
    int arr[] = {2,7,11,15};
    int* hash = malloc(sizeof(int) * 15);

    printf("Enter a number: ");
    scanf(" %d", &num); // 9

    for(int i = 0; i < num; i++){
        diff = num - arr[i];
        if(hash[diff] == NULL){
            hash[arr[i]] = i;
        } else {
            printf("Indexes: [%d, %d] sums up to %d", hash[diff], i, num);
            return 0;
        }
    }

    return 0;
}
