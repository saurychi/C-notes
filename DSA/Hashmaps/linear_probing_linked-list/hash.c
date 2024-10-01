#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "hash.h"

Student createStudent(int id, char* name, char* program, int year){
    Student s;
    s.studID = id;
    strcpy(s.studName, name);
    strcpy(s.program, program);
    s.year = year;

    return s;
}

// int* toBinary(studID){

// }


int getHash(Student s){
    int id = s.studID;
    int binary;
    int i = 0;
    int hash = 0;

    while(id != 0){
        binary = id % 2;
        id /= 2;
        i++;
        if(binary == 1){
            hash += i;
        }
    }

    hash = hash % MAX;
    // printf("Hash: %d", hash);
    return hash;
}

void initDictionary(HashTable *ht){
    ht->count = 0;
    for(int i = 0; i < MAX; i++){
        ht->elems[i] = NULL;
    }
}

bool insert(HashTable *ht, Student s) {
    int i = getHash(s);

    NodePtr p = malloc(sizeof(NodeType));
    p->stud = s;
    p->status = "occupied";
    p->link = NULL;
    p->stud.ogIndex = i;

    while(ht->elems[i] != NULL){
        i++;
    }
    ht->elems[i] = p;
    (ht->count)++;

}

bool deleteStud(HashTable *ht, Student s){
    int i = getHash(s);

    while((ht->elems[i] == NULL || strcmp(ht->elems[i]->status, "deleted") == 0) &&
           ht->elems[i]->stud.studID == s.studID) {
            i++;
    }

    ht->elems[i]->status = "deleted";
    (ht->count)--;

}

void visualizeTable(HashTable ht){
    printf("\nHashtable\n");
    for(int i = 0; i < MAX; i++){
        if(ht.elems[i] != NULL && strcmp(ht.elems[i]->status, "deleted") != 0){
            printf("Index %d: %s = %d\n", i, ht.elems[i]->stud.studName, ht.elems[i]->stud.ogIndex);
        }

    }
}
