#include <stdio.h>
#include <stdbool.h>
#include "MyStack.c"


int main(){

    Stack s;

    initStack(&s);

    int ID, year;
    String studName, program;

    // printf("Enter student ID: ");
    // scanf(" %d", ID);
    // printf("Enter student Name: ");
    // scanf(" %[^\n]s", studName);
    // printf("Enter program: ");
    // scanf(" %[^\n]s", program);
    // printf("Enter year: ");
    // scanf(" %d", year);
    // s.elems[0] = createStudent(ID, year, studName, program);

    s.count++;
    s.elems[0] = createStudent(21700254, "Walter Caballero", "BSIT", 2004);
    s.count++;
    s.elems[1] = createStudent(21700255, "Emu Otori", "BSIT", 2006);
    s.count++;
    s.elems[2] = createStudent(21700256, "Kasumi Nakasu", "BSIS", 2005);
    s.count++;
    s.elems[3] = createStudent(21700257, "Dia Kurosawa", "BSCS", 2004);
    s.count++;
    s.elems[4] = createStudent(21700258, "Tanga Ibuki", "BSCS", 2003);


    // printf("Enter specified program: ");
    // scanf(" %[^\n]s", program);
    // Stack program_stack = getStudent(&s, "BSIT");
    Stack program_stack = sort(s);
    visualize(program_stack);
    // visualize(s);





    return 0;
}
