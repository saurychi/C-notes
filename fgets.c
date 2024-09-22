#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int len;

    printf("Enter your names: ");
    fgets(name, 100, stdin);
    name[strcspn(name, "\n")] = '\0';// this removes the new line at the end
    while(getchar() != '\n');

    // len = strlen(name);
    // printf("%d\n", len);

    printf("%s", name);


    return 0;
}
