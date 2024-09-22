#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swapStrings(char str1[], char str2[]) {
    char* temp = malloc(100 * sizeof(char));

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    free(temp);
}

int main() {
    char str1[50] = "geeks";
    char str2[50] = "forgeeks awdadawdaw";
    swapStrings(str1, str2);
    printf("str1 is %s, str2 is %s\n", str1, str2);
    return  0;
}
