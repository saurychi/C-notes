#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **Divide_arr(int arr[], int len);

int main()
{

    int arr[] = {8, 4, 5, 7, 6, 9, 2};
    int len = sizeof(arr) / sizeof(arr[0]);

    int **divided_arr = Divide_arr(arr, len);

    for (int i = 0; i < len / 2; i++)
    {
        printf("%d, ", divided_arr[0][i]);
    }
    printf("\nHello\n");
    for (int i = 0; i < len / 2; i++)
    {
        printf("%d, ", divided_arr[1][i]);
    }
    printf("\nHello\n");
    printf("%d, ", divided_arr[2][0]);

    free(divided_arr);
    divided_arr = NULL;

    return 0;
}

int **Divide_arr(int arr[], int len)
{
    int divide_len = 0;
    int **divided_arr = malloc(divide_len * sizeof(int *));

    if (len % 2 == 0)
    {
        divide_len++;
        divided_arr[divide_len - 1] = calloc((len / 2), sizeof(int));
        memmove(divided_arr[divide_len - 1], arr, (len / 2) * sizeof(int));
        divide_len++;
        divided_arr[divide_len - 1] = calloc((len / 2), sizeof(int));
        memmove(divided_arr[divide_len - 1], arr + (len / 2), (len / 2) * sizeof(int));
    } else {
        divide_len++;
        divided_arr[divide_len - 1] = calloc((len / 2), sizeof(int));
        memmove(divided_arr[divide_len - 1], arr, (len / 2) * sizeof(int));
        divide_len++;
        divided_arr[divide_len - 1] = calloc((len / 2), sizeof(int));
        memmove(divided_arr[divide_len - 1], arr + (len / 2), (len / 2) * sizeof(int));

        divide_len++;
        divided_arr[divide_len - 1] = calloc(1, sizeof(int));
        memmove(divided_arr[divide_len - 1], arr + len - 1, 1 * sizeof(int));
    }

    // int flag = 1;
    // while (flag) {
    //     int j = 0;
    //     for (int i = 0; sizeof(divided_arr[j]) / sizeof(divided_arr[j][0]) != 1; i++){

    //     }
    // }

    return divided_arr;
}
