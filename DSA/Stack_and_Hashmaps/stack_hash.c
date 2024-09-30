#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "stack_hash.h"

void speak(char* string){
    printf("%s\n", string);
}

Product createProduct(int id, char* name, int qty, float price){
    Product p;

    p.prodID = id;
    strcpy(p.prodName, name);
    p.prodQty = qty;
    p.prodPrice = price;


    return p;
}

void initHash(ProDict* s, int max){
    s->max = max;
    s->data = malloc(sizeof(NodePtr) * s->max);
    // s->data = malloc(sizeof(Stack) * s->max);

    for(int i = 0; i < s->max;  i++){
        s->data[i] = NULL;
    }
    s->count = 0;

    // printf("Initialized!\n");
}

int getHash(Product p){

    int sum = 0;

    sum += p.prodID;
    // speak("Added!");
    for(int i = 0; i < 5; i++){
        sum += (int) p.prodName[i];
    }

    sum = sum % MAX;

    // printf("Sum: %d\n", sum);

    return sum;
}

void addHash(ProDict* pd, Product p){
    int i = getHash(p);

    NodePtr node = malloc(sizeof(NodeType));
    node->prod = p;

    // push(pd->data[i], p);

    if(pd->data[i] == NULL){
        node->link = pd->data[i];
        pd->data[i] = node;
        pd->count++;
    } else {
        Stack temp;
        initStack(&temp);
        NodePtr nTemp = NULL;

        while(pd->data[i] != NULL && pd->data[i]->prod.prodID > p.prodID){
            push(&temp, pd->data[i]->prod);
            nTemp = pd->data[i];
            pd->data[i] = pd->data[i]->link;
            free(nTemp);
        }

        node->link = pd->data[i];
        pd->data[i] = node;
        pd->count++;

        while(!isEmpty(temp)){
            NodePtr sTemp = malloc(sizeof(NodeType));
            nTemp->prod = peek(temp);
            nTemp->link = pd->data[i];
            pd->data[i] = nTemp;

            pop(&temp);
        }
    }



}

void removeHash(ProDict* pd, Product p) {
    int i = getHash(p);
    NodePtr temp = NULL;

    if(pd->data[i]->link == NULL && pd->data[i]->prod.prodID == p.prodID){
        temp = pd->data[i];
        pd->data[i] = NULL;
        free(temp);
    } else {
        NodePtr curr = NULL;
        for(curr = pd->data[i]; curr->link->prod.prodID != p.prodID && curr != NULL; curr = curr->link);

        if(curr == NULL){
            printf("No product found");
        } else {
            temp = curr->link;
            curr->link = curr->link->link;
            free(temp);
        }
    }
}

void visualizeHash(ProDict pd){
    for(int i = 0; i < pd.max; i++){
        if(pd.data[i] == NULL){
            printf("\nIndex %d:", i);
        } else {
            printf("\nIndex %d: %s", i, pd.data[i]->prod.prodName);
            if(pd.data[i]->link != NULL){
                for(NodePtr curr = pd.data[i]->link; curr != NULL; curr = curr->link){
                    printf(" | %s", curr->prod.prodName);
                }
            }
        }

    }
}

void visualizeStack(Stack s){
    if(isEmpty(s)){
        printf("\nStack is Empty!");
        return;
    }
    printf("\nStack: {");
    for(Stack curr = s; curr != NULL; curr = curr->link){
        printf(" %d", curr->prod.prodID);
    }
    printf("}\n");
}


void initStack(Stack* s) {
    *s = NULL;
}

bool isEmpty(Stack s){
    return s == NULL;
}

void pop(Stack* s) {
    NodePtr temp;
    temp = *s;
    *s = (*s)->link;
    free(temp);
}

void push(Stack* s, Product p){
    NodePtr temp = malloc(sizeof(NodeType));
    temp->prod = p;
    temp->link = *s;
    *s = temp;
}

Product peek(Stack s){
    return s->prod;
}
