#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    int len = 0;
    char str[100];
    char *revStr = calloc(len, sizeof(char));

    printf("Enter string: ");
    scanf("%s", &str);

    len = strlen(str);
    revStr = realloc(revStr, len * sizeof(char));

    // for making str to upper(use <ctype.h> when using toupper() function)
    /*
        for(int i = 0; i < len; i++){
            str[i] = toupper(str[i]);
        }
    */

    int j = 0;
    for(int i = len - 1; i >= 0; i--){
        revStr[j] = str[i];
        j++;
    }

    printf("%s", revStr);

    free(revStr);

    return 0;
}
