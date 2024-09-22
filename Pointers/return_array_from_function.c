#include <stdio.h>

int* getArray() {
   static int arr[] = {1, 2, 3, 4, 5};
   return arr;
}

int main() {
    int* arr = getArray();
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
   return 0;
}
