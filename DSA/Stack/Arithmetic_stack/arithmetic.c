#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "arithmetic.h"

void initStack(Stack* s){
    *s = NULL;
}

void push(Stack* s, char c){
    NodePtr temp = malloc(sizeof(Node));
    temp->acter = c;
    temp->link = *s;
    *s = temp;
}

void pop(Stack* s){
    NodePtr temp = *s;
    *s = (*s)->link;
    free(temp);
}

char peek(Stack s){
    return s->acter;
}

void visualize(Stack s){

    printf("Stack: {\n");
    for(NodePtr curr = s; curr != NULL; curr = curr->link){
        printf(" %c", curr->acter);
    }
    printf("\n}\n");
}

void display(Stack s1, Stack s2){
    printf("\nPostFix: \n");
    visualize(s1);
    printf("\nTemp: \n");
    visualize(s2);
}

Stack postFix_generator(char* infix){
    Stack temp;
    Stack postFix;
    // char operators[4] = {'+', '-', '*', '/'};

    initStack(&temp);
    initStack(&postFix);

    for(int i = 0; i < strlen(infix); i++){
        // printf("\nNum: %d", i); // stops at 8 index
        if(infix[i] == ' '){
            continue;
        }
        if(infix[i] == '+' || infix[i] == '-'){
            while(peek(temp) == '+' || peek(temp) == '-' ||
                  peek(temp) == '*' || peek(temp) == '/'){
                push(&postFix, peek(temp));
                pop(&temp);
            }
            push(&temp, infix[i]);
            // display(postFix, temp);
            continue;
        }
        if(infix[i] == '*' || infix[i] == '/'){
            while(peek(temp) == '*' || peek(temp) == '/'){
                push(&postFix, peek(temp));
                pop(&temp);
            }
            push(&temp, infix[i]);
            // display(postFix, temp);
            continue;
        }
        if(infix[i] == '('){
            push(&temp, infix[i]);
            // display(postFix, temp);
            continue;
        } else if(infix[i] == ')'){
            while(peek(temp) != '('){
                push(&postFix, peek(temp));
                pop(&temp);
            }
            pop(&temp);
            // display(postFix, temp);
            continue;
        }
        push(&postFix, infix[i]);
        // display(postFix, temp);

    }

    return postFix;
}

int solve_postFix(Stack* s){
    Stack reverse;
    initStack(&reverse);

    while(*s != NULL){
        push(&reverse, peek(*s));
        pop(s);
    }

    // visualize(reverse);

    Stack result;
    char curr;
    int num1, num2, result1;
    initStack(&result);

    while(reverse != NULL){
        curr = peek(reverse);
        pop(&reverse);
        if(!isdigit(curr)){
            // printf("\n!\n");
            num1 = peek(result) - '0';
            pop(&result);
            num2 = peek(result) - '0';
            pop(&result);


            switch(curr){
                case '+':
                    result1 = num1 + num2;
                    // printf("\n %d + %d\n", num1, num2);
                    push(&result, result1 + '0');
                    break;
                case '-':
                    result1 = num1 - num2;
                    // printf("\n %d - %d\n", num1, num2);
                    push(&result, result1 + '0');
                    break;
                case '*':
                    result1 = num1 * num2;
                    // printf("\n %d * %d\n", num1, num2);
                    push(&result, result1 + '0');
                    break;
                case '/':
                    result1 = num1 / num2;
                    // printf("\n %d / %d\n", num1, num2);
                    push(&result, result1 + '0');
                    break;
            }
        } else {
            push(&result, curr);
        }
        // visualize(result);
        result1 = peek(result) - '0';
        // printf("Result: %d", result1);
    }

    return result1;
}
