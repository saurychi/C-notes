// this is dynamic

#include <stdio.h>
#include <stdlib.h>

int* getNextFive(int x) {
    int* result = malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        result[i] = x + i + 1;
    }

    return result;
}

int main() {
    int x = 5; // 6, 7, 8, 9, 10
    int* arr = getNextFive(x);
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    free(arr);


    return 0;
}
