#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, len = 0;
    int *octalArr = calloc(len, sizeof(int));

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0){
        len++;
        octalArr = realloc(octalArr, len * sizeof(int));
        octalArr[len - 1] = num % 8;
        num /= 8;
    }

    for(int i = len - 1; i >= 0; i--){
        printf("%d ", octalArr[i]);
    }

    return 0;
}
