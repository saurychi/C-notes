#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a = 'C';     // single character   %c
    char b[] = "Bro"; // array of characters %s

    // %f
    float c = 3.141592; // 4 bytes(32 bits of precision) 6 - 7 digits

    // %lf
    // most use doubles instead of floats as it holds more information making it more precise
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits

    // %d
    // put "#include <stdbool.h>" at the top is using booleans
    bool e = true; //  1 byte (true or false)

    // %d or %c
    char f = 100;          // 1 byte (-128 to + 127)    // goes back to -128 when exceeding 127
    unsigned char g = 255; // 1 byte (0 to +255)        // goes back to zero when exceeding 255

    // "%d"
    short int h = 32767; // 2 bytes (-32,768 to +32,767) // goes back to -32,768 when it overflows
    // "%u"
    unsigned short int i = 65535; // 2 bytes (0 to +65,535) // goes back to 0 when it overflows

    // "int" is also "long int"
    // "%d"
    int j = 2147483647; // 4 bytes(-2,147,483,648 to +2,147,483,647)
    // "%u"
    unsigned int k = 4294967295L; // 4 bytes (0 to +4, 294, 967,295)

    // "%lld"
    long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion)
    // "%llu"
    // put "U" after numbers when using unsigned long long int
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion)

    // printf("%c\n", a);   // char
    // printf("%sin", b); // character array
    printf("%0.15f\n", c); // float

    // put 0.15 or any number after 0.1 to tell the computer what numbers should be displayed
    printf("%0.15lf\n", d); // double

    // printf ("%d\n", e);  // bool

    printf("%d\n", f);   // char as numeric value = returns 100
    printf("%d\n\n", f); // char as numeric value = returns d based on ASCII table

    printf("%d\n", g);   // unsigned char as numeric value
    printf("%d\n\n", h); // short

    // printf("%d\n", 1);   // unsigned short
    // printf(*%d\n", j);   // int
    // printf("%u\n", k);   // unsigned int

    printf("%lld\n", l); // long long int
    printf("%llu\n", m); // unsigned long long int

    return 0;
}
