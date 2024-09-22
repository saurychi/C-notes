#include <stdio.h>

int main()
{
    // variable =   Allocated space in memory to store a value.We refer to a variable's name to access
    //              the stored value. That variable now behaves as if it was the value it contains.
    //              BUT we need to declare what type of data we are storing.return 0;

    int x;               // declaration
    x = 123;             // initialization
    int y = 321;         // declaration + initialization
    int age = 21;        // integer
    float gpa = 2.05;    // floating point number
    char grade = 'C';    // single character
    char name[] = "Bro"; // array of characters

    printf("Hello %s!\n", name);                  // use %s = for array of characters
    printf("You are %d years old\n", age);        // use %d = for decimals
    printf("Your average grade is %c!\n", grade); // use %c for characters
    printf("Your gpa is %f\n", gpa);              // use %f for floats

    return 0;
}
