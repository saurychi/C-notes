#include <stdio.h>
#define MAX_CAPACITY 100

int main(){
    int array[MAX_CAPACITY];

    int total = 0;
    int insert_index = 0;
    int insert_value = 0;

    printf("Enter Total Number Of Values To Store: ");
    scanf ("%d", &total);
    for (int i = 0; i < total; i++) {
        printf("array[%d] = ", i);
        scanf("%d",&array[i]);
    }

    printf("\n");
    printf("array = ");
    for (int i = 0; i < total; i++) {
        printf("%d", array[i]);
    }

    printf("\n\n");

    printf("Enter Value To Insert: ");
    scanf ("%d", &insert_value);

    printf("Enter Index To Insert Value At: ");
    scanf("%d", &insert_index);

    return 0;
}
