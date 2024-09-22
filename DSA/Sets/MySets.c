#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "MySets.h"

Set createSet(int max){
    Set s;
    s.elems = calloc(max, sizeof(int));
    s.count = 0;
    s.max = max;

    return s;
}

void initSet(Set *s, int max){
    s->max = max;
    s->elems = calloc(max, sizeof(int));
    s->count = 0;
}

bool addElement(Set *s, int item){
    if(s->count == (s->max)-1 || s->elems[item] == 1 || item >= s->max){
        return false;
    }
    s->elems[item] = 1;
    (s->count)++;
    return true;
}

bool removeElement(Set *s, int item){
    if(s->count == 0 || s->elems[item] == 0 || item >= s->max){
        return false;
    }
    s->elems[item] = 0;
    (s->count)--;
    return true;
}

void DisplaySetIndex(Set s){
    printf("{");
    for(int i = 0; i < s.max; i++){
        printf(s.elems[i] == 0 ? "0" : "1");
        if(i != ((s.max) - 1)){
            printf(", ");
        }
    }
    printf("}\n");
}

void DisplaySetIntegers(Set s){
    printf("{");
    for(int i = 0; i < s.max; i++){
        if(s.elems[i] == 1){
            printf("%d", i);
            if(i != (s.max)-1){
                printf(" ");
            }
        }
    }
    printf("}\n");
}

bool isElement(Set s, int item){
    if(s.elems[item] == 1){
        return true;
    } else {
        return false;
    }
}

bool isSubset(Set a, Set b){
    int counter = 0;
    for(int i = 0; i <= a.max; i++){
        if(b.elems[i] == 1 && a.elems[i] == 1){
            counter++;
            if(counter == b.count){
                return true;
            }
        }
    }
    return false;
}

int Cardinality(Set s){
    return s.count;
}

Set unionSet(Set a, Set b){
    Set c;
    int max = (a.max >= b.max) ? a.max : b.max;
    int least = (a.max <= b.max) ? a.max : b.max;
    initSet(&c, max);

    // same size
    // for(int i = 0; i < max; i++){
    //     c.elems[i] = a.elems[i];
    //     if(c.elems[i] != 1){
    //         c.elems[i] = b.elems[i];
    //     }
    // }

    // different size
    for(int i = 0; i < max; i++){
        if(i > least){
            c.elems[i] = (a.max >= b.max) ? a.elems[i] : b.elems[i];
        } else {
            c.elems[i] = a.elems[i];
            if(c.elems[i] != 1){
                c.elems[i] = b.elems[i];
            }
        }
    }

    return c;
}

Set intersectionSet(Set a, Set b){
    Set c;
    int least = (a.max <= b.max) ? a.max : b.max;
    initSet(&c, least);

    for(int i = 0; i < least; i++){
        if(a.elems[i] == 1 && b.elems[i] == 1){
            c.elems[i] = 1;
        }
    }

    return c;

}

Set differenceSet(Set a, Set b){ // in set a, not in set b
    Set c;
    int least = (a.max <= b.max) ? a.max : b.max;
    initSet(&c, a.max);

    // for(int i = 0; i < a.max; i++){
    //     c.elems[i] = a.elems[i];
    //     if(b.elems[i] == 1){
    //         c.elems[i] = 0;
    //     }
    // }

    for(int i = 0; i < a.max; i++){
        if(a.max > b.max){
            if(i > b.max){
                c.elems[i] = a.elems[i];
            } else {
                c.elems[i] = a.elems[i];
                if(b.elems[i] == 1){
                    c.elems[i] = 0;
                }
            }
        } else {
            c.elems[i] = a.elems[i];
            if(b.elems[i] == 1){
                c.elems[i] = 0;
            }
        }
    }

    return c;
}

Set symmetricDifferenceSet(Set a, Set b){
    Set c;
    int max = (a.max > b.max) ? a.max : b.max;
    initSet(&c, max);

    // for(int i = 0; i < max; i++){
    //     if((a.elems[i] == 1 && b.elems[i] == 1 || a.elems[i] == 0 && b.elems[i] == 0)){
    //         c.elems[i] = 0;
    //     } else {
    //         c.elems[i] = 1;
    //     }
    // }
    for(int i = 0; i < max; i++){
        if(a.max > b.max){
            if(i > b.max){
                c.elems[i] = a.elems[i];
            } else {
                if((a.elems[i] == 1 && b.elems[i] == 1 || a.elems[i] == 0 && b.elems[i] == 0)){
                    c.elems[i] = 0;
                } else {
                    c.elems[i] = 1;
                }
            }
        } else {
            if(i > a.max){
                c.elems[i] = b.elems[i];
            } else {
                if((a.elems[i] == 1 && b.elems[i] == 1 || a.elems[i] == 0 && b.elems[i] == 0)){
                    c.elems[i] = 0;
                } else {
                    c.elems[i] = 1;
                }
            }
        }


    }

    return c;
}
