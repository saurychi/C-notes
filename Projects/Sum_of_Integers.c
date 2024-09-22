#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, sum;
    int len = 1;
    char* strNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    strNum = calloc(len, sizeof(char));
    len = sprintf(strNum, "%d", num);

    // validate if string jud
    // printf("\n%s", strNum);

    strNum = realloc(strNum, len * sizeof(char));


    /*
    loop needs to have a limitation of "i < len - 1" since..
    you first need to add the 0th and 1st value to get the first sum of the two first numbers
    then after that 1st iteration you just add the index + 1 to the sum
    since you already added the 0th and 1st value on the first iteration


    ex.
    input: 1 2 3 4 5

    first loop:
    sum = 1 + 2 (sum is now 3)

    second loop:
    sum + 3 (sum is now 6)

    third loop:
    sum + 4 (sum is now 10)

    fourth loop:
    sum + 5 (sum is now 15)


    */
    for(int i = 0; i < len - 1; i++){
        if(i == 0){
            strNum[i] -= '0';
            strNum[i + 1] -= '0';
            sum = strNum[i] + strNum[i + 1];
            printf("\n%d", sum);
        } else {
            strNum[i + 1] -= '0';
            sum += strNum[i + 1];
            printf("\n%d", sum);
        }
    }

    printf("\n\n%d", sum);

    free(strNum);
    return 0;
}
