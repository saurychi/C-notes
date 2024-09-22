#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main() {
    int len;
    char **Arr = malloc(sizeof(char*));

    printf("Enter number of names: ");
    scanf("%d", &len);
    while( getchar() != '\n');


    Arr = realloc(Arr, len * sizeof(char*));

    for(int i = 0; i < len; i++){
        Arr[i] = malloc(MAX * sizeof(char));
        printf("Enter name: ");
        fgets(Arr[i], MAX, stdin);
        Arr[i][strcspn(Arr[i],"\n")] = '\0';
    }

    printf("\n");

    for(int i = 0; i < len; i++){
        printf("%s ", Arr[i]);
    }

    free(Arr);

    return 0;

}
