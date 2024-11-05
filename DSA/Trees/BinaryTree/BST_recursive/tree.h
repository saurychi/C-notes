#ifndef TREE_H
#define TREE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Treenode{
    int num;
    struct Treenode* right;
    struct Treenode* left;
} Treenode, *TreenodePtr;

void initTree(TreenodePtr* root);
void addTree(TreenodePtr* root, int value);
void print_PreOrder(TreenodePtr node);
void print_InOrder(TreenodePtr node);
void print_PostOrder(TreenodePtr node);

#endif
