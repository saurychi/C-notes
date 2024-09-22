#include <stdio.h>
#include <string.h>

int main(){

    char name[25];// restricted to 25 bytes
    int age;

    // scanf() get the user input data but stops getting it when it reaches a white space
    // fgets() gets the user input data and doesnt stop when reaching a white space, also adds a "\n"

    printf("\nWhat your name?");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0'; //this removes the new line when using "fgets" // needs: "#include <string.h>"

    printf("How old are you?");
    scanf ("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);

    return 0;
}
