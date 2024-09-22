#include <stdio.h>

void bubble_sort(int arr[], int len);
void display(int arr[], int len);

int main(){

    int arr[] = {1,5,7,8,6,4,1,2,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr, len);

    display(arr, len);

    return 0;
}

void bubble_sort(int arr[], int len){

    for(int i = 0; i < len; i++){
        int temp;
        for(int j = 0; j < len; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void display(int arr[], int len){
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
}
