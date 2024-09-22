#include <stdio.h>
int main(){
    // constant = fixed vallie that cannot be altered by the program during its execution

    // when using const, make sure to make the variable name all uppercase, although not needed...
    const float PI = 3.14159;

    // PI = 420.69; //this variable reassignment is not valid since its a constant variable

    printf("%f", PI);

    return 0;
}
