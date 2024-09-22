#include <stdio.h>
#include <stdlib.h>

int main() {

    int size_binaryArr = 0, size_compare_binaryArr = 0, temp;
    int* binaryArr;
    int* compare_binaryArr;

    binaryArr = calloc(size_binaryArr, sizeof(int));
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0){
        int rem = num % 2;
        num /= 2;
        size_binaryArr++;
        binaryArr = realloc(binaryArr, size_binaryArr * sizeof(int));
        binaryArr[size_binaryArr - 1] = rem;
    }

    printf("\ncontents of real binary array: ");
    for(int i = 0; i < size_binaryArr; i++){
        printf("%d ", binaryArr[i]);
    }

    // make array for comparing if palindrome
    size_compare_binaryArr = size_binaryArr;
    compare_binaryArr = calloc(size_compare_binaryArr, sizeof(int));
    int j = 0;
    for(int i = size_compare_binaryArr - 1; i >= 0 ; i--){
        compare_binaryArr[i] = binaryArr[j];
        j++;
    }

    printf("\ncontents of compare binary array: ");
    for(int i = 0; i < size_compare_binaryArr; i++){
        printf("%d ", compare_binaryArr[i]);
    }

    int counter = 0;
    for(int i = 0; i < size_binaryArr; i++){
        if(binaryArr[i] == compare_binaryArr[i]){
            counter++;
        }
    }

    (counter == size_binaryArr)? printf("\nThe binary is a palindrome") : printf("\nThe binary is not a palindrome");

    free(binaryArr);
    free(compare_binaryArr);

    return 0;
}
