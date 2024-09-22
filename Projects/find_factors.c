#include <stdio.h>
#include <stdlib.h>

int* getFactors(int* arr, int target){
    int len = sizeof(arr)/sizeof(arr[0]);
    int *factors = calloc(2, sizeof(int));

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(arr[i] + arr[j] == target){
                factors[0] = arr[i];
                factors[1] = arr[j];
                return factors;
            }
        }
    }
    return NULL;
}

int main(){

    int numArr1[] = {2,7,11,15};

    int* facArr = getFactors(numArr1, 45);

    for(int i = 0; i < 2; i++){
        printf("%d ", facArr[i]);
    }

    return 0;
}
