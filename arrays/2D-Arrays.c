#include <stdio.h>


int main ()
{
    // 2D array = an array, where each element is an entire array
    // useful if you need a matrix, grid, or table of data

    // 1 dimensional array
    // int numbers [] = {1, 2, 3};

    // 2 dimensional array
    // you MUST specify how many elements are inside the inner array
    // place the specification in the second "[]"
    int numbers [][3] = {
                            {1, 2, 3},
                            {4, 5, 6}
                        };


    // you can also do this:

    // int numbers [2][3];
    // numbers [0][0] = 1;
    // numbers [0][1] = 2;
    // numbers [0][2] = 3;
    // numbers [1][0] = 4;
    // numbers [1][1] = 5;
    // numbers [1][2] = 6;



    return 0;
}
