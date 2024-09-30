#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "Hash.h"

int getHash(Student s){
    int hash = s.studName[0] + s.studName[1] + s.studName[2];

    for(int i = 0; i < strlen(s.program); i++){
        hash += s.program[i];
    }

    return hash % 20;
}

Student createStudent(int id, char* name, char* program, int year){
    Student s;
    s.studID = id;
    strcpy(s.studName, name);
    strcpy(s.program, program);
    s.year = year;

    return s;
}

void initDictionary(HashTable *ht){
    ht->count = 0;
    for(int i = 0; i < MAX; i++){
        ht->elems[i] = NULL;
    }
}

// bool insert(HashTable *ht, Student s){
//     int i = getHash(s);
//     NodePtr node = malloc(sizeof(NodeType));
//     node->link = NULL;
//     node->stud = s;

//     NodePtr curr = NULL;
//     if(ht->elems[i] == NULL){
//         ht->elems[i] = node;
//     } else {
//         for(curr = ht->elems[i]; curr->link != NULL; curr = curr->link){
//             printf("\nTest");
//             if(node->stud.studID == curr->link->stud.studID){
//                 free(node);
//                 return false;
//                 }
//         }
//         curr->link = node;
//     }

//     return true;
// }
bool insert(HashTable *ht, Student s){
    int i = getHash(s);
    NodePtr node = malloc(sizeof(NodeType));
    node->link = NULL;
    node->stud = s;

    NodePtr curr = NULL;
    if(ht->elems[i] == NULL){
        ht->elems[i] = node;
    } else {
        for(curr = ht->elems[i]; curr->link != NULL; curr = curr->link){
            // printf("\nTest");
            if(node->stud.studID == curr->link->stud.studID){
                free(node); 
                return false;
            }
        }
        curr->link = node;
    }

    return true;
}
/*
    Use insertSorted if multiple data are already in the list.
*/
bool deleteStud(HashTable *ht, Student s){
    int i = getHash(s);
    NodePtr temp = NULL;

    if(ht->elems[i] == NULL){
        return false;
    }

    while(ht->elems[i] != NULL){
        temp = ht->elems[i];
        if(ht->elems[i]->stud.studID == s.studID){
            ht->elems[i] = ht->elems[i]->link;
            free(temp);

            return true;
        } else {
            ht->elems[i] = ht->elems[i]->link;
        }
    }
//2 = deletedfreed
//  1->3
    return false;

}

void visualizeTable(HashTable ht){
    for(int i = 0; i < MAX; i++){
        if(ht.elems[i] != NULL){
             printf("\nIndex: %d", i);
            //  int k = 0;
            for(NodePtr curr = ht.elems[i]; curr != NULL; curr = curr->link){
                printf("| %s ", curr->stud.studName);
                // k++;
            }
            // printf("Num: %d", k);
            printf("\n");
        }
    }
}
