#ifndef MY_QUEUE_H
#define MY_QUEUE_H
#define MAX 8
#include <stdbool.h>

typedef char String[20];
typedef struct{
    String fname, lname;
} Name;
typedef struct{
    int studID;
    Name studName;
    bool sex;
    String program;
    int year;
} Student;
typedef struct{
    Student* studList;
    int max;
    int rear;
    int front;
} QueueADT;

void intQueue(QueueADT* q, int max);
QueueADT createQueue(int max);
bool isEmpty(QueueADT q);
bool isFull(QueueADT q);
void makeEmpty(QueueADT *q);
bool enqueue(QueueADT *q, Student s);
bool dequeue(QueueADT *q);
Student front(QueueADT q);
void visualize(QueueADT q); // allow traversal
Name createName(String fname, String lname);
Student createStudent(int ID, Name name, bool sex, String program, int year);

#endif
