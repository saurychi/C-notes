#ifndef TREE_H
#define TREE_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct treenode{
    int data;
    struct treenode* left;
    struct treenode* right;
} TreeNode, *TreeNodePtr;

typedef struct stacknode{
    TreeNodePtr node;
    bool isVisited; // only used in post order traversal
    struct stacknode* next;
} Stack, *StackPtr;

void initTree(TreeNodePtr* root);
void insertTree(TreeNodePtr* root, int data);
void deleteTree(TreeNodePtr* root, int data);

// Traverse
void pre_order_traverse(TreeNodePtr root);
void in_order_traverse(TreeNodePtr root);
void post_order_traverse(TreeNodePtr root);

void initStack(StackPtr* stack);
void push(StackPtr* stack, TreeNodePtr node);
void pop(StackPtr* stack);
TreeNodePtr peek(StackPtr stack);
void displayStack(StackPtr stack);

#endif
