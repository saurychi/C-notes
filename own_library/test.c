#include <stdio.h>
#include "array.h"

int main(){

    int array[] = {5,2,8,4,2,3,9,9,7,1,1,3,6};
    int len = sizeof(array)/sizeof(array[0]);

    ascen_sort(len, array);
    for(int i = 0; i < len; i++){
        printf("%d ", array[i]);
    }

    printf("\n");
    
    descen_sort(len, array);
    for(int i = 0; i < len; i++){
        printf("%d ", array[i]);
    }

    return 0;
}
