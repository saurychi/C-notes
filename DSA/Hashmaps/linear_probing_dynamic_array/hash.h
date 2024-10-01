#ifndef HASH_H
#define HAS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    int* elems;
    int max;
} Hash;

void initHash(Hash* h);
int getHash(int num);
bool add(Hash* h);
bool remove(Hash* h);
void visualize(Hash* h);

#endif
