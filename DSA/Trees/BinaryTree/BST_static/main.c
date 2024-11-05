#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "tree.c"

int main(){

    TreeNodePtr tree;
    initTree(&tree);

    insertTree(&tree, 8);
    insertTree(&tree, 6);
    insertTree(&tree, 20);
    insertTree(&tree, 38);
    insertTree(&tree, 4);
    insertTree(&tree, 10);
    insertTree(&tree, 15);
    insertTree(&tree, 27);
    insertTree(&tree, 29);
    insertTree(&tree, 21);
    insertTree(&tree, 22);

    deleteTree(&tree, 20);

    // printf("Root: %d", tree->data);

    // pre_order_traverse(tree);
    in_order_traverse(tree);
    // post_order_traverse(tree);

    return 0;
}
