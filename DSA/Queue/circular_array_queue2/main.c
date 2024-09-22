#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "Queue.c"

int main(){

    NQueue q;

    initNQueue(&q);

    // enqueue(&q, createName("Emu", "Otori"));
    // enqueue(&q, createName("Walter", "Caballero"));
    // enqueue(&q, createName("Saury", "Caballero"));
    // enqueue(&q, createName("Hano", "Amakawa"));
    // enqueue(&q, createName("Neuro", "Vedal"));
    // enqueue(&q, createName("Madoka", "Kaname"));

    insertSorted(&q, createName("Emu", "Otori"));
    insertSorted(&q, createName("Walter", "Caballero"));
    insertSorted(&q, createName("Saury", "Caballero"));
    insertSorted(&q, createName("Hano", "Amakawa"));
    insertSorted(&q, createName("Neuro", "Vedal"));
    insertSorted(&q, createName("Madoka", "Kaname"));

    Name* fn = NULL;
    fn = filterNames(&q, "Caballero");

    printf("\nFiltered Names: ");
    for(int i = 0; strcmp(fn[i].lname, "") != 0; i++){
        printf("\nName: %s, %s", fn[i].lname, fn[i].fname);
    }

    printf("\nFinal Queue");
    displayQueue(q);





    return 0;
}
