#ifndef AVLTREE_STATIC
#define AVLTREE_STATIC
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int val;
    struct node* left;
    struct node* right;
    int height;
} Node;

void initAVLT(Node* root);
void getHeight(Node* node);




#endif
