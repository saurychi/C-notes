#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "tree.h"

void initTree(TreeNodePtr* root){
    *root = NULL;
}

void insertTree(TreeNodePtr* root, int data){
    TreeNodePtr* trav = NULL;
    for(trav = root; *trav != NULL && (*trav)->data != data; trav = (*trav)->data > data ? &(*trav)->left : &(*trav)->right);

    if(*trav == NULL){
        *trav = calloc(sizeof(TreeNode), 1);
        if(*trav != NULL){
            (*trav)->data = data;
        }
    }
}

void initStack(StackPtr* stack){
    *stack = NULL;
}

void push(StackPtr* stack, TreeNodePtr node){
    StackPtr temp = malloc(sizeof(Stack));
    if(temp == NULL){
        return;
    }
    temp->node = node;
    temp->next = *stack;
    *stack = temp;
}

void pop(StackPtr* stack){
    if(*stack == NULL){
        return;
    }
    StackPtr temp = *stack;
    *stack = (*stack)->next;
    free(temp);
}

TreeNodePtr peek(StackPtr stack){
    return stack->node;
}

void displayStack(StackPtr stack){
    printf("\nStack: ");
    for(StackPtr curr = stack; curr != NULL; curr = curr->next){
        printf("%d ", curr->node->data);
    }
    printf("\n");
}

// void pre_order_traverse(TreeNodePtr root){
//     // attempt 1 (works*)
//     StackPtr stack;
//     initStack(&stack);

//     TreeNodePtr trav = root;
//     push(&stack, root);

//     while(1){
//         printf("%d ", trav->data);
//         if(trav->right != NULL && trav != root){
//             push(&stack, trav);
//         }
//         if(trav->left != NULL){
//             trav = trav->left;
//         } else {
//             if(stack == NULL){
//                 return;
//             }
//             trav = peek(stack);
//             pop(&stack);
//             trav = trav->right;
//         }
//         // displayStack(stack);
//     }
// }

void pre_order_traverse(TreeNodePtr root){

    // RECAP (N -> L -> R):
    // 1. keep on displaying then traversing to the left
    // 2. if current node has a right node, push that right node
    // 3. if left is null or curr is null from traversing left then
    //    use peek(stack) as your new current node
    // 4. Repeat

    // attempt 2 (much better*)
    StackPtr stack;
    initStack(&stack);

    TreeNodePtr trav = root;

    while(stack != NULL || trav != NULL){
        if(trav->right != NULL){
            push(&stack, trav->right);
        }

        printf("%d ", trav->data);

        if(trav->left != NULL){
            trav = trav->left;
        } else {
            trav = peek(stack);
            pop(&stack);
        }
    }
}


void in_order_traverse(TreeNodePtr root){

    // RECAP (L -> N -> R):
    // 1: keep on traversing left while pushing the current node
    // 2: if current node is null from left traversal loop, then
    //    print loop the stack using peek(stack)
    // 3: if peek(stack) has a right node, make that rightnode as
    //    current node then exit stack loop
    // 3.5: if peek(stack) has no right node, then keep on printing
    //      and popping the stack


    StackPtr stack;
    initStack(&stack);

    TreeNodePtr trav = root;

    while(stack != NULL || trav != NULL){
        while(trav != NULL){
            push(&stack, trav);
            trav = trav->left;
        }

        // displayStack(stack);

        while(stack != NULL){
            printf("%d ", peek(stack)->data);
            if(peek(stack)->right != NULL){
                trav = peek(stack)->right;
                pop(&stack);
                break;
            }
            pop(&stack);
        }
    }
}

void post_order_traverse(TreeNodePtr root){

    // RECAP (L -> R -> N):
    // 1: while pushing current node to stack, traverse left
    //    always set pushed node as NOT visited
    // 2: if current node is NULL from left traversal loop, the access
    //    and iterate stack
    // 3: if peek(stack) has a right node and is NOT visited, then
    //    set it to "visited", and make the right node from peek(stack)
    //    as a new node, then stop stack loop and do left traversal loop again
    // 4: if peek(stack) has no right node or its already "visited" then
    //    print peek(stack) and pop it


    // works*
    StackPtr stack;
    initStack(&stack);

    TreeNodePtr trav = root;

    while(stack != NULL || trav != NULL){
        while(trav != NULL){
            push(&stack, trav);
            stack->isVisited = false; // same as peek(stack)
            trav = trav->left;
        }

        // displayStack(stack);

        while(stack != NULL){
            if(peek(stack)->right != NULL && stack->isVisited != true){
                stack->isVisited = true; // top stack; same as peek(stack)
                trav = peek(stack)->right;
                break;
            }
            printf("%d ", peek(stack)->data);
            pop(&stack);
        }
    }
}

void deleteTree(TreeNodePtr* root, int data){
    TreeNodePtr trav = *root;

    while(trav->right != NULL || trav->left != NULL){
        // printf("\nRoot: %d", trav->data);
        while(trav->data != data && trav != NULL){
            trav = trav->data < data ? trav->right : trav->left;
        }

        if(trav == NULL){
            return;
        }

        TreeNodePtr curr = trav->right;
        int min = curr->data;

        while(curr->left != NULL){
            curr = curr->left;
            min = (min > curr->data) ? curr->data : min;
        }
        printf("Min: %d\n", min);

        trav->data = min;
        data = min;

        trav = curr;
        // printf("\nOkawari!!");
    }

    // printf("Trav: %d\n", trav->data);

}
