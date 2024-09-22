#include <stdio.h>
#include <string.h>

int main() {
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};// since a string itself is an array, double the "[]"

    //cars [0] = "Tesla"; // when reassigning string in an array this does not work

    strcpy (cars[0], "Tesla"); // but this does

    for(int i = 0; i < sizeof (cars)/sizeof(cars [0]); i++) {// iterating strings in an array
        printf("%s\n", cars[i]);
    }



    return 0;
}
