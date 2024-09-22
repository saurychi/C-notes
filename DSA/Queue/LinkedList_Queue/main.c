#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Queue.c"

int main()
{

    Queue studq;

    // greet();

    Data data1 = createStudent(21700254, createName("Walter", "Caballero"), 't', "BSIT");
    Data data6 = createStudent(21700259, createName("Railey", "Escandor"), 't', "BSIS");
    Data data2 = createStudent(21700255, createName("Emu", "Otori"), 'f', "BSIT");
    Data data4 = createStudent(21700257, createName("Madoka", "Kaname"), 'f', "BSCS");
    Data data3 = createStudent(21700256, createName("Kasumi", "Nakasu"), 'f', "BSCS");
    Data data5 = createStudent(21700258, createName("Trent", "Guevara"), 't', "BSIT");

    initQueue(&studq);

    // insertSorted(&studq, data1);
    // insertSorted(&studq, data6);
    // insertSorted(&studq, data2);
    // insertSorted(&studq, data4);
    // insertSorted(&studq, data3);
    // insertSorted(&studq, data5);

    enqueue(&studq, data1);
    enqueue(&studq, data6);
    enqueue(&studq, data2);
    enqueue(&studq, data4);
    enqueue(&studq, data3);
    enqueue(&studq, data5);

    // dequeue(&studq);
    // printf("\n%s\n", front(studq).structName.fname);
    // dequeue(&studq);
    // dequeue(&studq);
    // dequeue(&studq);
    // dequeue(&studq);
    // dequeue(&studq);

    // isEmpty(studq) ? printf("\nis empty\n") : printf("\nis NOT empty\n");

    sortQueue(&studq);

    // visualize(studq);
    display(studq);
    // printf("\n\n-------------\n\n");
    // display(studq);


    return 0;
}
