#ifndef HASH_H
#define HASH_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 10

typedef struct{
    int studID;
    char studName[30];
    char program[10];
    int year;
    int ogIndex;
} Student;

typedef struct node{
    Student stud;
    struct node* link;
    char* status;
} NodeType, *NodePtr;

typedef struct {
    NodePtr elems[MAX];
    int count;
} HashTable;

Student createStudent(int id, char* name, char* program, int year);
int getHash(Student s);
/*
    Get the hash based on the summation of the first 3 letters of the name
    plus the letters in the program and must be able to return a value from
    0 - 19.
*/

void initDictionary(HashTable *ht);
bool insert(HashTable *ht, Student s);
/*
    Use insertSorted if multiple data are already in the list.
*/
bool deleteStud(HashTable *ht, Student s);
void visualizeTable(HashTable ht);

#endif
