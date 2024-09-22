#include <stdio.h>

void insertion_sort(int arr[], int len);
void display(int arr[], int len);

int main()
{

    int arr[] = {4, 3, 2, 10, 12, 1, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, len);

    return 0;
}

void insertion_sort(int arr[], int len)
{
    for (int i = 1; i < len; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        display(arr, len);
    }
}

//4, 3, 2, 10, 12, 1, 5, 6
//4, 4, 2, 10, 12, 1, 5, 6
//3, 4, 2, 10, 12, 1, 5, 6

//

void display(int arr[], int len)
{
    printf("\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}
