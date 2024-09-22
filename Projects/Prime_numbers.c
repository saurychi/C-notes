#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, len = 0, counter = 0;
    int *primeNums = calloc(len, sizeof(int));

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            len++;
            primeNums = realloc(primeNums, len * sizeof(int));
            primeNums[len - 1] = i;

        }
    }

    for(int i = 0; i < len; i++){
        for(int j = 1; j <= primeNums[j]; j++){
            if(primeNums[i] % j == 0){
                counter++;
            }
        }
        if(counter <= 2){
            printf("{%d} ", primeNums[i]);
        } else {
            printf("%d ", primeNums[i]);
        }
        counter = 0;
    }

    free(primeNums);

    return 0;
}
