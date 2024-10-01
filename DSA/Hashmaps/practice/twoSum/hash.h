#ifndef HASH_H
#define HASH_H
#define MAX 10

typedef struct {
    int elems[MAX];
    int count;
} HashTable;

int getHash();

void initDictionary(HashTable *ht);
bool insert(HashTable *ht, int num);
bool deleteStud(HashTable *ht, int num);
void visualizeTable(HashTable ht);



#endif HASH_H
