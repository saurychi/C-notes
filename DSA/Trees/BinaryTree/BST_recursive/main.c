#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.c"

int main(){

    TreenodePtr tree;
    initTree(&tree);

    addTree(&tree, 8);
    addTree(&tree, 6);
    addTree(&tree, 20);
    addTree(&tree, 38);
    addTree(&tree, 4);
    addTree(&tree, 10);
    addTree(&tree, 15);


    // printf("Root: %d", tree->num);
    printf("\nPre Order: ");
    print_PreOrder(tree);
    printf("\nIn Order: ");
    print_InOrder(tree);
    printf("\nPost Order: ");
    print_PostOrder(tree);

    return 0;
}
