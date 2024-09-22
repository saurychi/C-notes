#include <stdio.h>

//enums are NOT STRINGS, but they can be treated as int
enum Day {Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main() {
    // num = a user defined type of named integer identifiers
    //       helps to make a program more readable

    enum Day today = Sun;
    // printf("%d", today); //prints 1

    if(today == Sun || today == Sat){ // write that instead of "(today == 1 || today == 7)"
        printf("\nIt's the weekend! Party time!\n");
    } else {
        printf("\nI have to work today :(\n");
    }

    return 0;
}
