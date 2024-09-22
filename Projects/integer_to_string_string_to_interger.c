#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int num;
    char snum[100];

    printf("Enter a number: ");
    scanf("%d", &num);


    // integer to string
    int len = sprintf(snum, "%d", num);
    for(int i = 0; i < len; i++){
        printf("%c ", snum[i]);
    }


    // string to integer
    sscanf(snum, "%d", &num);
    printf("\n%d", num);



    return 0;
}
