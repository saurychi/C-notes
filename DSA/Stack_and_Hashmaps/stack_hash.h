#ifndef STACK_HASH_C
#define STACK_HASH_C
#include <stdio.h>
#include <stdlib.h>
#define MAX 10;


typedef struct {
    int prodID;
    char prodName[16];
    int prodQty;
    float prodPrice;
} Product;

typedef struct node {
    Product prod;
    struct node* link;
} NodeType, *NodePtr, *Stack;

typedef struct {
    NodePtr* data; // dynamic array
    int count;
    int max;
} ProDict;

Product createProduct(int id, char* name, int qty, float price);
void initHash(ProDict* s, int max);
int getHash(Product p);
void addHash(ProDict* pd, Product p);
void removeHash(ProDict* pd, Product p);
void visualizeHash(ProDict p);
void visualizeStack(Stack s);
void initStack(Stack* s);
bool isEmpty(Stack s);
void pop(Stack* s);
void push(Stack* s, Product p);
Product peek(Stack s);

/*
  1. Create a function that converts a product stack into 2 dictionary.
      If similar product exists automatically adds it into the prodQty.

  2. Hash function will be based on the ID plus the first 5
      characters of the product name


  3. Use 70% as the load factorfor the dictionary

  4. Both use visualization

  5. Open Hashing
*/



#endif
