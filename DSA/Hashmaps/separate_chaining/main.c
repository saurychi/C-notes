#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Hash.c"

int main(){

    HashTable tbl;
    initDictionary(&tbl);

    insert(&tbl, createStudent(21700254, "Walter", "BSIT", 2004));
    insert(&tbl, createStudent(21700256, "Emu", "BSIT", 2005));
    insert(&tbl, createStudent(21700257, "Madoka", "BSIS", 2006));
    insert(&tbl, createStudent(21700258, "Hano", "BSCS", 2003));
    insert(&tbl, createStudent(21700258, "Kanata", "BSCS", 2003));



    deleteStud(&tbl, createStudent(21700254, "Walter", "BSIT", 2004));
    deleteStud(&tbl, createStudent(21700258, "Hano", "BSCS", 2003));


     visualizeTable(tbl);

    return 0;
}
