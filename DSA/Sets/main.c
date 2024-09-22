#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "MySets.c"

int main(){

    Set setA;
    Set setB;
    Set setC;

    initSet(&setA, 15);
    initSet(&setB, 10);
    initSet(&setC, 10);

    addElement(&setB, 1);
    addElement(&setB, 3);
    addElement(&setB, 5);
    addElement(&setB, 6);

    addElement(&setA, 2);
    addElement(&setA, 4);
    addElement(&setA, 6);
    addElement(&setA, 8);
    addElement(&setA, 11);
    addElement(&setA, 14);

    addElement(&setC, 1);
    addElement(&setC, 3);

    // removeElement(&setA, 1);
    // removeElement(&setB, 6);

    printf(isElement(setA, 5) ? "\nIt's an element of the set\n" : "\nIt is NOT an element of the set\n");
    printf(isElement(setA, 1) ? "\nIt's an element of the set\n" : "\nIt is NOT an element of the set\n");

    // printf(isSubset(setA, setC) ? "\nIt's a subset\n" : "\nIt is NOT a subset\n");

    // printf("\nSet A: "); DisplaySetIntegers(setA);
    // printf("\nSet B: "); DisplaySetIntegers(setB);
    // printf("\nSet C: "); DisplaySetIntegers(setC);

    printf("\nSet A: "); DisplaySetIndex(setA);
    printf("\nSet B: "); DisplaySetIndex(setB);
    printf("\nSet C: "); DisplaySetIndex(setC);

    Set UnionSet = unionSet(setA, setB);
    // printf("\nUnion Set(A & B): ");  DisplaySetIntegers(UnionSet);
    printf("\nUnion Set(A & B): ");  DisplaySetIndex(UnionSet);

    Set IntersectionSet = intersectionSet(setA, setB);
    // printf("\nIntersection Set(A & B): ");  DisplaySetIntegers(IntersectionSet);
    printf("\nIntersection Set(A & B): ");  DisplaySetIndex(IntersectionSet);

    Set DifferenceSet = differenceSet(setA, setB);
    // printf("\nDifferenceSet Set(A & B): ");  DisplaySetIntegers(DifferenceSet);
    printf("\nDifferenceSet Set(A & B): ");  DisplaySetIndex(DifferenceSet);

    Set SymmetricDifferenceSet = symmetricDifferenceSet(setA, setB);
    // printf("\nSymmetricDifferenceSet Set(A & B): ");  DisplaySetIntegers(SymmetricDifferenceSet);
    printf("\nSymmetricDifferenceSet Set(A & B): ");  DisplaySetIndex(SymmetricDifferenceSet);


    return 0;
}
