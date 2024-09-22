#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct Node{
    int num;
    struct Node* next;
} Node;

int main(){

    Node* root = malloc(sizeof(Node));
    Node* curr_node = root;

    // putting elements inside each linked-list
    for(int i = 0; i < MAX; i++){
        curr_node->num = i+1;
        curr_node->next = malloc(sizeof(Node));
        curr_node = curr_node->next;
    }
    curr_node->next = NULL;

    // print element inside each linked-list
    for(Node* curr = root; curr->next != NULL; curr = curr->next){
        printf("node %d\n", curr->num);
    }

    // free each allocated linked-list
    Node* temp;
    for(Node* curr = root; curr != NULL;curr = temp){
        temp = curr->next;
        free(curr);
    }
    free(root);

    return 0;
}
