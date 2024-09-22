#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, len, product, counter = 0;

    scanf("%d", &num);

    int* divisors = malloc(num * sizeof(int));
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            product = i * j;
            if(product == num){
                len+=2;
            }
        }
    }
    divisors = realloc(divisors, (len * sizeof(int)));
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            product = i * j;
            if(product == num){
                divisors[counter++] = i;
                divisors[counter++] = j;
            }
        }
    }

    int decreased_num = 0;
    for(int i = 0; i < len; i++){
        int current = divisors[i];
        for(int j = i+1; j < len; j++){
            if(current == divisors[j] && current != 0){
                for(int k = j; k < len-1; k++){
                    divisors[k] = divisors[k + 1];
                }
                divisors[(len - 1) - decreased_num] = 0;
                decreased_num++;
            }
        }
    }

    // printf("%d", len);

    len -= decreased_num;
    divisors = realloc(divisors, (len * sizeof(int)));

    int sum = 0;
    for(int i = 0; i < len; i++){
        if(divisors[i] != num){
            sum += divisors[i];
        }
    }

    printf("\nSum: %d", sum);
    printf("\nNumber: %d\n\n", num);

    if(sum == num){
        printf("Number is a perfect number!");
    } else {
        printf("Number is a NOT perfect number!");
    }



    // for(int i = 0; i < len; i++){
    //     printf("%d", divisors[i]);
    // }



    free(divisors);

    return 0;
}
