#ifndef MY_SET_H
#include <stdbool.h>

typedef struct{
    int *elems; // present - 1, absent - 0
    int count;
    int max;
} Set;

Set createSet(int max);
void initSet(Set *s, int max);

bool addElement(Set *s, int item);
bool removeElement(Set *s, int item);
void DisplaySetIndex(Set s);
void DisplaySetIntegers(Set s);
bool isElement(Set s, int item);
bool isSubset(Set a, Set b);
int Cardinality(Set s);

Set unionSet(Set a, Set b);
Set intersectionSet(Set a, Set b);
Set differenceSet(Set a, Set b);
Set symmetricDifferenceSet(Set a, Set b);

#endif
