#include <stdio.h>
#include <ctype.h>

int main()
{
    int value;

    char a = 'a';
    char b = 'B';
    char c = '2';
    int num = 1;
    char cntrl = '\0';

    // value = isalnum(2);     // checks if variable passsed on is either an alphabet or a number
    // value = isalpha(a);     // checks if the variable passed on is an alphabet
    // value = iscntrl(cntrl); // checks if the variable being passed on is a control character like(\n, \0, ...)
    value = isdigit(c); // checks if the variable being passed on is a "character" digit
    value = isgraph(c); // checks if the variable being passed on is a graphical character, meaning it displays something
    value = islower(a); // checks if the variable being passed on is a lowercase alphabet
    value = isupper(b); // checks if the variable being passed on is a uppercase alphabet

    printf("%d", value);

    return 0;
}
