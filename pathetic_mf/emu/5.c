
#include <stdio.h>

void add_elements(int len, int* arr, int* sum){
    for(int i = 0; i < len; i++){
        *sum += arr[i];
    }
}

int main(){

    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    add_elements(len, arr, &sum);

    printf("%d", sum);

    return 0;

}
