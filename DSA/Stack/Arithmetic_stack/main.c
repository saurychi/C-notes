#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "arithmetic.c"

int main(){

    char* infix = "((1 + 2) * (3 - 4) / 5 + 6)";

    // Stack s;
    // initStack(&s);

    // push(&s, 'a');
    // push(&s, 'b');
    // push(&s, 'c');
    // push(&s, 'd');

    // visualize(s);

    Stack postfix = postFix_generator(infix);
    // visualize(postfix);
    // printf("Front: %c", peek(postfix));

    int result = solve_postFix(&postfix);
    printf("Result: %d", result);

    return 0;
}
