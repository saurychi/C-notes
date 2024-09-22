#include <stdio.h>
#include <string.h> // needs this libarry for strlen()

int main(){

    char str1[255];
    char str2[255];
    int len;

    printf("Enter string: ");
    fgets(str1, 255, stdin);

    len = strlen(str1);
    printf("\n\nWith newline: %d\n", len);

    str1[strcspn(str1, "\n")] = '\0'; // removes newline

    len = strlen(str1);
    printf("Without newline: %d\n", len);

    printf("Enter string: ");
    scanf("%s", &str2);
    len = strlen(str2);
    printf("\n\nWith newline: %d", len);

    while( getchar() != '\n'); // also removes newline

    len = strlen(str2);
    printf("\nWithout newline: %d", len);


    return 0;
}
