#include <stdio.h>


int main () {
    int numbers [][3] = {
                            {1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}
                        };


    // go to special-functions/Sizeof.c to understand this
    int rows = sizeof (numbers) /sizeof (numbers[0]);
    int columns = sizeof (numbers[0])/sizeof(numbers [0][0]);

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%d ", numbers[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    // what your doing in the loop above:

    // numbers [0][0] = 1;
    // numbers [0][1] = 1   2;
    // numbers [0][2] = 1   2   3;
    // numbers [1][0] = 1   2   3   \n  4;
    // numbers [1][1] = 1   2   3   \n  4   5;
    // numbers [1][2] = 1   2   3   \n  4   5   6;

    return 0;
}
