#include <stdio.h>

typedef struct Node{
    int num;
    struct Node *next;
} Node;

int main(){

    Node root, node1, node2;

    root.num = 0;
    root.next = &node1;
    node1.num = 1;
    node1.next = &node2;
    node2.num = 2;
    node2.next = NULL;

    // or you could also do this

    Node root;

    root.num = 0;
    root.next = malloc(sizeof(Node));
    root.next->num = 1;
    root.next->next = malloc(sizeof(Node));
    root.next->next->num = 2;
    root.next->next->next = NULL;

    printf("Root: %d\n", root.num);

    printf("Root: %d\n", node1.num);
    printf("Root: %d\n", root.next->num);
    printf("Root: %d\n", (*root.next).num);

    free(root.next);
    free(root.next->next);

    return 0;
}
