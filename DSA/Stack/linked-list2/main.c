#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.c"

int main() {

    Stack s;
    initStack(&s);

    push(&s, 9);
    push(&s, 5);
    push(&s, 2);
    push(&s, 8);
    push(&s, 7);

    // pop(&s);
    // pop(&s);

    sort(&s);

    visualize(s);

    return 0;
}
