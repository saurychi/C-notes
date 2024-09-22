#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct {
    char name[6];
    int num;
} Number;

int main(){

    Number numbers[9] = {
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9},
    };

    int size = 0;
    int* res_arr = calloc(size, sizeof(int));
    int sum;

    FILE *pF = fopen("Part_1.txt", "r");

    char line_str[255];

    // line_str = used in getting the line in the txt file
    // curr_str = used in current iterated string

    // len = length of actual line from txt
    // str_len = length of current string being continuosly evaluated
    // size = length of result array

    while(fgets(line_str, 255, pF) != NULL){ // for one line of string in txt
        int len = strlen(line_str);
        int str_len = 0;
        char* current_str = malloc(str_len * sizeof(char));

        int j = 0;
        for(int i = 0; i < len; i++){
            str_len++;
            current_str = realloc(current_str, str_len * sizeof(char));
            current_str[j] = line_str[i];
            j++;

            for(int k = 0; k < 9; k++){
                if(strcmp(current_str, numbers[k].name) == 0){
                    printf("\n%s", current_str);
                    size++;
                    res_arr = realloc(res_arr, size * sizeof(int));
                    res_arr[size - 1] = numbers[k].num;
                    str_len = 0;
                    current_str = realloc(current_str, str_len * sizeof(char));
                    j = 0;
                }
            }
        }



        current_str[j] = '\0'; // add this to make a proper string
    }

    for(int i = 0; i < size; i++){
        printf("%d", res_arr[i]);
    }

    free(res_arr);
    res_arr = NULL;
    fclose(pF);

    return 0;
}
