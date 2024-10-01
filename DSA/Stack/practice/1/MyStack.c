#include <stdio.h>
#include <stdbool.h>
#include "MyStack.h"

Stack createStack(){

    Stack s;
    s.count = 0;

    return s;
}


void intiStack(Stack *s){

    s->count = 0;

}
bool isEmpty(Stack s){

    return s.count == 0;

}
bool isFull(Stack s){

    return s.count >= MAX;

}
void visualize(Stack s){

    printf("List {");

    for(int i = 0; i < s.count;i++){
        printf("%d ",s.elems[i]);

        if(i < s.count -1){
            printf(", ");
        }
    }

    printf("}");

}

bool push(Stack *s, int elems){

    if(!isFull(*s)){
        s->elems[(s->count)++] = elems;
        return true;
    }

    else{
        return false;
    }
}
bool pop(Stack *s){

    if(!isEmpty(*s)){
        (s->count)--;
        return true;
    }
    else{
        return false;
    }

}
int peek(Stack s){

    return s.elems[s.count-1];

}

Stack sort(Stack s){
    Stack newStack1 = s;
    Stack newStack2;
    int top;

    do {
        top = pop(&newStack1);
        push(&newStack2, top);
    } while(peek(newStack1) < top);

}

Stack getEven(Stack s){
    Stack even = createStack();
    int item;

    while(!isEmpty(s)){
        item = peeks(s);
        

    }
};
