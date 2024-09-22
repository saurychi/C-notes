#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){

    int size = 0;
    int* res_arr = calloc(size, sizeof(int));
    int sum;

    FILE *pF = fopen("Part_1.txt", "r");

    char curr_str[255];

    while(fgets(curr_str, 255, pF) != NULL){
        int len = strlen(curr_str);

        for(int i = 0; i < len; i++){
            if(isdigit(curr_str[i])){
                size++;
                res_arr = realloc(res_arr, size * sizeof(int));
                int currentNum = curr_str[i] - '0';
                res_arr[size - 1] = currentNum;
            }
        }


        sum += res_arr[0] * 10;
        sum += res_arr[size - 1];
        printf("%d\n", sum);

        size = 0;
        res_arr = realloc(res_arr, size * sizeof(int));
    }

    printf("\n%d", sum);

    free(res_arr);
    res_arr = NULL;
    fclose(pF);

    return 0;
}
