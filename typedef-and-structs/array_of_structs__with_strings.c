#include <stdio.h>

typedef struct{
   int myInt;
   char myString[50];
} MyStruct ;

int main(){

    MyStruct myArray[10] = {
        {1, "string1"},
        {2, "string2"},
        // ...
        {10, "string10"}
    };


    return 0;
}
