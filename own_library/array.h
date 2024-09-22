
// sort array in ascending order
void ascen_sort(int len, int* arr){

    int temp;

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// sort array in descending order
void descen_sort(int len, int* arr){

    int temp;

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len - 1; j++){
            if(arr[j] < arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// void arr_rev(int len, int* arr){
//     int* temp_arr = calloc(len, sizeof(int));
//     for(int i = 0; i < len; i++){
//         temp_arr[i] = arr[i];
//     }
//     int j = 0;
//     for(int i = len - 1; i >= 0; i++){

//     }
// }
