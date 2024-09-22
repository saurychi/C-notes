// main.c

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Queue.c"


int main(){

    QueueADT q;

    intQueue(&q, 8);

    Student student1 = createStudent(21700254, createName("Walter", "Caballero"), true, "BSIT", 2004);
    Student student2 = createStudent(21700255, createName("Emu", "Otori"), false, "BSIT", 2005);
    Student student3 = createStudent(21700256, createName("Dia", "Kurosawa"), false, "BSCS", 2003);
    Student student4 = createStudent(21700257, createName("Tanga", "Ibuki"), false, "BSIT", 2016);
    Student student5 = createStudent(21700258, createName("Trent", "Guevara"), true, "BSIT", 2004);
    Student student6 = createStudent(21700259, createName("Gester", "Samson"), true, "BSIT", 2003);
    Student student7 = createStudent(21700260, createName("Saya", "Uta"), false, "BSIS", 2010);
    Student student8 = createStudent(21700260, createName("Madoka", "Kaname"), false, "BSIS", 2002);

    enqueue(&q, student1);
    enqueue(&q, student2);
    enqueue(&q, student3);
    enqueue(&q, student4);
    enqueue(&q, student5);
    enqueue(&q, student6);
    enqueue(&q, student7);
    enqueue(&q, student8);


    dequeue(&q);

    visualize(q);

    return 0;
}
