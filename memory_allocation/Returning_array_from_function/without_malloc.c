// this is also dynamic

#include <stdio.h>
#include <stdlib.h>


void getNextFive(int x, int* result) {
    for (int i = 0; i < 5; i++) {
        result[i] = x + i + 1;
    }
}

int main() {
    int x = 5; // 6, 7, 8, 9, 10
    int arr[5];
    getNextFive(x, arr);
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
