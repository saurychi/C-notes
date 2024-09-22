#ifndef STUDENT_H
#define STUDENT_H

typedef char String[20];

typedef struct {
    int studID;
    String studName;
    String program;
    int year;
} Student;

Student createStudent(int StudId, String studName, String program, int year);
void display(Student s);


#endif
