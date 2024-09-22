#include <stdio.h>
#include <string.h>

struct Student {
    char name [12];
    float gpa;
};

int main() {

    struct Student student1 = {"Emu", 3.0};
    struct Student student2 = {"Yui", 2.5};
    struct Student student3 = {"Kasumin", 4.0};
    struct Student student4 = {"Keke", 2.0};

    struct Student students [] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(students [0]); i++) {
        printf("%-12s\t", students[i].name);
        printf("%.1f\n", students[i].gpa);
    }

    return 0;
}
