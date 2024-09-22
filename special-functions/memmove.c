#include <stdio.h>
#include <string.h>

// memcpy assumes that the source and destination memory regions do not overlap, producing undefined behavior if they do,
// whereas memmove is designed to handle overlapping memory regions
// and will copy the memory correctly regardless of whether the regions overlap or not

int main(){
    int source[10] = {1, 2,3, 4, 5, 6,7,8,9,10};
    int destination[10];

    memmove(destination, source, sizeof(int) * 10);

    for(int i = 0; i < 10; i++)
        printf("destination[%d]=%d \n", i, destination[i]);

    for(int i = 0; i < 10; i++)
        printf ("source[%d]=%d\n", i, source[i]);

    return 0;
}
