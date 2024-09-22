#include <stdio.h>
#include <stdlib.h>

#define ascii_size 256

int *check_unique(char str[], int len);
char* sort_unique(int arr[], int len);

int main()
{

    char str[100];
    printf("Enter String: ");
    fgets(str, 100, stdin);

    int *ascii_arr = check_unique(str, ascii_size);

    // for (int i = 0; i < ascii_size; i++)
    // {
    //     printf("%d ", ascii_arr[i]);
    // }

    char* sorted_unique = sort_unique(ascii_arr, ascii_size);

    for (int i = 0; i < ascii_size; i++)
    {
        printf("%d ", sorted_unique[i]);
    }

    free(ascii_arr);
    ascii_arr = NULL;

    return 0;
}

int *check_unique(char str[], int len)
{
    int *arr = calloc(len, sizeof(int));
    int temp;

    for (int i = 0; str[i] != '\0'; i++)
    {
        temp = str[i];
        arr[temp]++;
    }

    return arr;
}

char* sort_unique(int arr[], int len)
{

    for (int i = 0; i < len; i++)
    {
        if (!((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z') || (i >= '0' && i <= '9'))){
            for(int j = 0; j < arr[i]; j++){
                printf("%c ", i);
            }
        }
    }
}
