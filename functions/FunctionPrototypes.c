#include <stdio.h>

// ALWAYS use a function prototype in making functions
void hello(char[], int); //function prototype: to tell the called function, what areguments is in it.

int main() {
    //  function prototype
    //  WHAT IS IT?
    //  Function declaration, w/o a body, before main()
    //  Ensures that calls to a function are made with the correct arguments

    // IMPORTANT NOTES
    // Many C compilers do not check for parameter matching
    // Missing arguments will result in unexpected behavior
    // A function prototype causes the compiler to flag an error if arguments are missing

    char name [] = "Bro";
    int age = 21;

    hello(name, age);

    return 0;
}

void hello (char name[], int age) {
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}
