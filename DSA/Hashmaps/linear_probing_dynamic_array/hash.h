#ifndef HASH_H
#define HAS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    char* name;
} Elem;

typedef struct{
    Elem** elems;
    int max;
    int count;
} Hash;

void initHash(Hash* h, int max);
int getHash(char* string, int max);
bool addHash(Hash* h, char* string);
bool removeHash(Hash* h, char* string);
void visualize(Hash h);

#endif
