#include <stdio.h>

int main () {

    //nested loop = a loop inside of another 100p

    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf ("%d", &rows);

    printf("Enter # of columns: ");
    scanf ("%d" , &columns) ;

    scanf("%c"); //this will remove the buffer("\n") since it can be picked up from the next scanf which finds a "%c"

    printf("Enter a symbol to use: ");
    scanf ("%c", &symbol);

    for(int i = 1; i <= rows; i++) {

        for(int j = 1; j <= columns; j++){
            printf("%c", symbol);
        }

        printf("\n");

    }
    return 0;
}
