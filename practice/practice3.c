#include <stdio.h>
#include <string.h>
#include <ctype.h>

// LEGEND
// _ = space

int main()
{
    char dest[10] = "hello";
    char src[10] = "world";
    char str[100];

    // strcat(dest, src + 3); // hellold
    // strcat(dest + 3, src); // ___helloworld

    // for(int i = 0; i < strlen(dest); i++){
    //     if(isalpha(dest[i])){
    //         printf("%c ", dest[i]);
    //     } else if (dest[i] == '\n'){
    //         printf("n ");
    //     } else if (dest[i] == '\0'){
    //         printf("0 ");
    //     } else {
    //         printf("_ ");
    //     }
    // }

    // memcpy(dest, src, 10 * sizeof(char)); // dest: world
    // memcpy(dest, src + 3, 10 * sizeof(char)); // dest: ld
    // memcpy(dest + 3, src, 10 * sizeof(char)); // dest: helworld (copies at index 3)

    // memmove(dest, src, 10 * sizeof(char)); // dest: world
    // memmove(dest, src + 3, 10 * sizeof(char)); // dest: ld
    // memmove(dest + 3, src, 10 * sizeof(char)); // dest: helworld (copies at index 3)

    // strcpy(dest, src); // world
    // strcpy(dest, src + 3); // ld
    // strcpy(dest + 3, src); // helworld
    // strcpy(dest + 3, src + 3); // helld

    printf("%s", dest);
}
