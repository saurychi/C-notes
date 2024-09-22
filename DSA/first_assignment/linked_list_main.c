#include <stdio.h>
#include <stdlib.h>
#include "LinkedListDynamic.c"

int main(){

    List myList;

    // greet();
    initList(&myList);

    insertFront(&myList, 9);
    insertFront(&myList, 2);
    insertFront(&myList, 6);

    insertLast(&myList, 1);
    insertLast(&myList, 3);
    insertLast(&myList, 7);

    insertAt(&myList, 5, 3);

    deleteFirst(&myList);
    deleteFirst(&myList);

    deleteLast(&myList);

    deleteAt(&myList, 3);

    display(myList);

    for(Node* curr = myList.elems; curr->next != NULL; curr = curr->next){
        free(curr);
    }
    free(myList.elems);

    return 0;
}
