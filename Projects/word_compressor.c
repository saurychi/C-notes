#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* compress_wrds(char str[]);

int main(){

    char str[] = "aabbc";

    char* compressed_wrd = compress_wrds(str);

    printf("%s", compress_wrds);

    free(compressed_wrd);
    compressed_wrd = NULL;

    return 0;
}

char* compress_wrds(char str[]){

    char temp[100];
    char key;
    int j = 0, flag = 1, count = 0;
    temp[j++] = str[0];
    for(int i = 0; str[i] != '\0'; i++){
        key = str[i];
        if(str[i] == key){
            if(flag == 0){
                temp[j++] = str[i];
            }
            count++;
        } else {
            temp[j++] = count + '0';
            flag = 0;
            temp[j++] = str[i];
            count = 0;
            count++;
        }
    }

    // aabbc
    // a


    int len = strlen(temp) + 1;

    char* result_str = malloc(len * sizeof(char));
    
    memcpy(result_str, str, len * sizeof(char));
    result_str[len] = '\0';

    return result_str;
}
