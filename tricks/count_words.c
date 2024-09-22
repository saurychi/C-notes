#include <stdio.h>
#include <string.h>

int count_words(char str[], int len);

int main()
{

    char str[] = "Hello world efdsef";
    int len = strlen(str) + 1;

    int count = count_words(str, len);

    printf("%d", count);

    return 0;
}

int count_words(char str[], int len){
    int count = 0;
    for(int i = 0; i < len; i++){
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n'){
            count++;
        }
    }

    return count;
}
