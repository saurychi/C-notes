#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "MyStack.h"

Stack createStack(){

    Stack s;
    s.count = 0;

    return s;
}


void initStack(Stack *s){

    s->count = 0;

}
bool isEmpty(Stack s){

    return s.count == 0;

}
bool isFull(Stack s){

    return s.count >= MAX;

}
void visualize(Stack s){

    printf("List {\n");

    for(int i = 0; i < s.count;i++){
        printf("\t%d ",s.elems[i].studID);
        printf("%s ",s.elems[i].studName);
        printf("%s ",s.elems[i].program);
        printf("%d ",s.elems[i].year);

        if(i < s.count -1){
            printf("\n");
        }
    }

    printf("\n}\n");

}

bool push(Stack *s, Student elems){
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

Student peek(Stack s){

    return s.elems[s.count-1];

}

Student createStudent(int studId, String studName, String program, int year){
    Student newStud;

    newStud.studID = studId;
    strcpy(newStud.studName, studName);
    strcpy(newStud.program, program);
    newStud.year = year;

    return newStud;
}

Stack getStudent(Stack *s, String program){
    Stack newStack;
    initStack(&newStack);

    Student top;
    Student temp;
    while(!isEmpty(*s)){
        top = peek(*s);
        if(strcmp(top.program, program) == 0 && !isEmpty(newStack)){
            temp = top;
            pop(s);
            while(strcmp(peek(newStack).program, program) != 0 && !isEmpty(newStack)){
                push(s, peek(newStack));
                pop(&newStack);
            }
            push(&newStack, temp);
        } else {
            push(&newStack, top);
            pop(s);
        }
    }

    top = peek(newStack);
    while(strcmp(top.program, program) != 0){
        push(s, top);
        pop(&newStack);
        top = peek(newStack);
    }


    return newStack;
}

Stack sort(Stack s){
    Stack newStack;
    Student top, temp;
    while(!isEmpty(s)){
        top = peek(s);
        pop(&s);
        if(top.year < peek(s).year){
            temp = peek(s);
            pop(&s);
            push(&s, top);
            while(peek(newStack).year < temp.year && !isEmpty(newStack)){
                push(&s, peek(newStack));
                pop(&newStack);
            }
            push(&newStack, temp);
        } else {
            push(&newStack, top);
        }

    }

    return newStack;
}
// s        // new
// 2003     //          // 2003
// 2004     //          // 2005
// 2005     //          // 2004
// 2006     //
// 2009     // 2004







// Stack getEven(Stack s){
//     Stack even = createStack();
//     int item;

//     while(!isEmpty(s)){
//         item = peeks(s);


//     }
// };
