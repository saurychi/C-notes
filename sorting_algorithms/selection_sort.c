#include <stdio.h>

void selection_sort(int arr[], int len);
void display(int arr[], int len);

int main(){

    int arr[] = {8,4,6,7,1,2,5,6,9};

    int len = sizeof(arr)/sizeof(arr[0]);

    selection_sort(arr,len);

    display(arr,len);

    return 0;
}

void selection_sort(int arr[], int len){
    for(int i = 0; i < len; i++){
        int lowest = i, temp;
        for(int j = i; j < len; j++){
            if(arr[lowest] > arr[j]){
                lowest = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[lowest];
        arr[lowest] = temp;
    }
}

void display(int arr[], int len){
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
}
