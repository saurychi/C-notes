#include <stdio.h>
int main()
{
    // pointer = a "variable-like" reference that holds a memory address to another variable
    //           some tasks are performed more easily with pointers
    //           * = indirection operator (value at address)


    int age = 21;
    // pointers basically store the memory address of a variable
    int *pAge = &age;// pointers follow: "*p" then Uppercase the first letter of the variable name


    printf("address of age: %p\n", &age); // memory address of the variable
    printf ("value of age: %d\n", age); // value of the variable

    // displays the stored memory address of age variable
    printf("address of age from the pointer: %p\n", pAge);
    // displays the value from the memory address
    printf("value at the stored address from pointer: %d\n", *pAge);

    return 0;
}
