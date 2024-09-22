#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, len = 2;
    int *fiboArr = calloc(len, sizeof(int));

    printf("Enter a number: ");
    scanf("%d", &num);

    int i = 1;
    fiboArr[0] = i;
    fiboArr[1] = i;

    while(fiboArr[len - 1] <= num){
        len++;
        fiboArr = realloc(fiboArr, len * sizeof(int));
        fiboArr[len - 1] = fiboArr[len - 2] + fiboArr[len - 3];
    }

    for(int i = 0; i < len - 1; i++){
        printf("%d ", fiboArr[i]);
    }

    // uncomment to filter numbers that are divisible by 4
    // for(int i = 0; i < len - 1; i++){
    //     if(fiboArr[i] % 4 == 0){
    //         continue;
    //     }
    //     printf("%d ", fiboArr[i]);
    // }

    free(fiboArr);

    return 0;
}
