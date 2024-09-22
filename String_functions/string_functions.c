#include <stdio.h>

int main()
{

    char str1[] = "Hello";
    printf("%d", strlen(str1)); // 26 *does not include null terminator "\0"
    printf("%d", sizeof(str1)); // 27 *includes null terminator "\0"

    char str2[50] = "World";
    strcat(str1, str2); // Concatenate str2 to str1 (result is stored in str1)
    // strcat(destination, source);

    // Copy str1 to str2
    strcpy(str2, str1);
    // strcpy(destination, source)

    char str3[50];
    memcpy(str3, str2, sizeof(char) * 50);
    // memcpy(destination, source, size of data)

    memmove(str2, str3, sizeof(int) * 50);
    // memcpy(destination, source, size of data)

    return 0;
}
