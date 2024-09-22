#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Stack.c"

int main(){

    Stack s;
    initStack(&s);

    push(&s, createPerson("Walter", 19, 'M'));
    push(&s, createPerson("Emu", 18, 'F'));
    push(&s, createPerson("Hano", 20, 'F'));
    push(&s, createPerson("Nigger", 27, 'M'));

    pop(&s);

    insertSorted1(&s, createPerson("Nigger", 27, 'M'));
    insertSorted2(&s, createPerson("Sack", 30, 'M'));

    // sortStack(&s, 1);
    sortStack(&s, 0);

    displayStack(s);

    /*
        Hano
        Emu
        Nigger
        Sack
        Walter
    */

    return 0;
}
