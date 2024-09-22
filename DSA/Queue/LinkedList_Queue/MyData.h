#ifndef MY_DATA_H
#define MY_DATA_H
#include <stdbool.h>

typedef char String[20];

typedef struct {
    char fname[50];
    char lname[50];
} Name;

typedef struct{
    int studID;
    Name structName;
    char sex; // f = female // t = male
    char program[6];
} Student;

#endif
