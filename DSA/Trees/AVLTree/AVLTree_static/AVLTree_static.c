#include "AVLTree_static.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void initAVLT(Node* root){
    root = NULL;
}

void getHeight(Node* node){
    node->height = node->left->height - node->right->height;
}


