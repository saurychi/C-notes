#include <stdio.h>

void sort(int len, int* arr){
    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < len; j++){
            if(arr[j] > arr[j + 1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }
    }
}


int main(){

    int arr[] = {6,8,5,5,4,8,7,5,7,8,5,2,};
    int len = sizeof(arr)/sizeof(arr[0]);

    sort(len, arr);

    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }


    return 0;

}
