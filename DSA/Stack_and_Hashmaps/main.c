#include <stdio.h>
#include <string.h>
#include "stack_hash.c"

int main(){

    ProDict pd;

    initHash(&pd, 10);
    addHash(&pd, createProduct(21900, "chicken bake", 10, 50.00));
    addHash(&pd, createProduct(21800, "chicken pie", 5, 75.00));
    addHash(&pd, createProduct(42069, "nigger bake", 100, 0.00));
    addHash(&pd, createProduct(69420, "zonrox", 20, 299.99));
    addHash(&pd, createProduct(64608, "pulbos", 30, 50.99));

    removeHash(&pd, createProduct(21900, "chicken bake", 10, 50.00));

    visualizeHash(pd);


    // Stack st;
    // initStack(&st);

    // push(&st, createProduct(21700, "chicken bake", 10, 50.00));
    // push(&st, createProduct(21600, "chicken pie", 5, 75.00));
    // push(&st, createProduct(42069, "nigger bake", 100, 0.00));
    // push(&st, createProduct(69420, "zonrox", 20, 299.99));
    // push(&st, createProduct(64608, "pulbos", 30, 50.99));

    // visualizeStack(st);

    return 0;
}
