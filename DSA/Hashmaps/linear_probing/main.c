#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "hash.c"

int main(){

    HashTable ht;

    initDictionary(&ht);

    insert(&ht, createStudent(21700254, "Walter", "BSIT", 2004));
    insert(&ht, createStudent(21700242, "Hano", "BSCS", 2001));
    insert(&ht, createStudent(21700392, "Kanade", "BSCS", 2000));
    insert(&ht, createStudent(21700092, "Emu", "BSIT", 2004));
    insert(&ht, createStudent(21700255, "Madoka", "BSIS", 2005));

    // deleteStud(&ht, createStudent(21700254, "Walter", "BSIT", 2004));

    visualizeTable(ht);

    return 0;
}
