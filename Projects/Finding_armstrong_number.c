#include <stdio.h>
#include <stdlib.h>

int powOf(int base, int exponent){
    int result = 1;

    for(int i = 1; i <= exponent; i++){
        result *= base;
    }

    return result;
}

// armstrong number

int main(){
    int num, currentNum, powNum, result, remainderNum;
    int len = 0;
    char *snum = malloc(sizeof(char));

    printf("Enter a number: ");
    scanf("%d", &num);

    remainderNum = num;

    while(remainderNum != 0){
        remainderNum /= 10;
        len++;
    }

    snum = realloc(snum, len * sizeof(char));

    sprintf(snum, "%d", num);

    for(int i = 0; i < len; i++){
        currentNum = snum[i] - '0';
        powNum = powOf(currentNum, len);
        result += powNum;
    }

    if(result == num){
        printf("The number %d is an armstrong number", num);
    } else {
        printf("The number %d is NOT an armstrong number", num);
    }

    free(snum);



    return 0;
}
