#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "hash.c"

int main(){

    Hash h;

    initHash(&h, 10);
    addHash(&h, "Emu");
    addHash(&h, "Walter");
    addHash(&h, "Neuro");
    addHash(&h, "Kasumi");
    addHash(&h, "Waller");

    removeHash(&h, "Walter");
    removeHash(&h, "Neuro");

    visualize(h);

    return 0;
}
