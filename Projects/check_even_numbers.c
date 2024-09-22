#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int num, len;
    char snum[50];
    int sizeResult = 0;
    char result[50] = {0};
    int intResult;

    scanf("%d", &num);
    len = sprintf(snum, "%d", num);


    int sizeStr = sizeof(snum) / sizeof(snum[0]);

    for(int i = 0; i < sizeStr; i++){
        if(snum[i] % 2 == 0){
            result[sizeResult] = snum[i];
            sizeResult++;
        }
    }

    intResult = atoi(result);

    printf("%d", intResult);

    return 0;
}
