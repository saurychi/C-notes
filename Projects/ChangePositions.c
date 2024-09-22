#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int num, len;
    char snum[50];
    char temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    len = sprintf(snum, "%d", num);
    snum[len] = '\0';

    int sizeSnum = 0;
    while (snum[sizeSnum] != '\0') {
        sizeSnum++;
    }

    temp = snum[sizeSnum - 1];
    snum[sizeSnum - 1] = snum[0];
    snum[0] = temp;

    int result = atoi(snum);

    printf("%d", result);

    return 0;
}
