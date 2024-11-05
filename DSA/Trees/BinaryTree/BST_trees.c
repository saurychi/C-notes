#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *left;
    struct node *right;
} NodeType, *NodePtr, *BST;

bool insertBST(BST *bst, int data);
void inorder(BST bst);

int main() {
    BST t = NULL;

    printf("{");
    inorder(t);
    printf("}\n");

    insertBST(&t, 10);
    insertBST(&t, 15);
    insertBST(&t, 1);
    insertBST(&t, 7);
    insertBST(&t, 9);
    insertBST(&t, 5);

    printf("{");
    inorder(t);
    printf("}\n");
    return 0;
}


bool insertBST(BST *bst, int data) {
    BST *trav = bst;
    while(*trav != NULL && (*trav)->data != data) {
        trav = ((*trav)->data < data)? &(*trav)->right : &(*trav)->left;
    }

    if(*trav == NULL) {
        *trav = calloc(sizeof(NodeType), 1);
        if((*trav) != NULL) {
            (*trav)->data = data;
            return true;
        }
    }
    return false;
}

void inorder(BST bst) {
    if (bst != NULL) {
        inorder(bst->left);
        printf("%d ", bst->data);
        inorder(bst->right);
    }
}
