#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"


void initTree(TreenodePtr* root){
    *root = NULL;
}

void addTree(TreenodePtr* root, int value){
    TreenodePtr temp = calloc(sizeof(Treenode), 1);
    if(temp == NULL){
        return;
    }
    temp->num = value;

    TreenodePtr* trav = NULL;
    for(trav = root; *trav != NULL && (*trav)->num != value; trav = ((*trav)->num > value ) ? &(*trav)->left : &(*trav)->right);

    if(*trav == NULL){
        *trav = temp;
    }
}

void print_PreOrder(TreenodePtr node){
    if(node != NULL){
        printf("%d ", node->num);
        print_PreOrder(node->left);
        print_PreOrder(node->right);
    }
}

void print_InOrder(TreenodePtr node){
    if(node != NULL){
        print_InOrder(node->left);
        printf("%d ", node->num);
        print_InOrder(node->right);
    }
}

void print_PostOrder(TreenodePtr node){
    if(node != NULL){
        print_PostOrder(node->left);
        print_PostOrder(node->right);
        printf("%d ", node->num);
    }
}
