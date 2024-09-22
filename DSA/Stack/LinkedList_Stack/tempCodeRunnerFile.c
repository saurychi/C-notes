            while(strcmp(top.name, peek(temp).name) > 0 && !isEmpty(temp)){
                push(s, peek(temp));
                pop(&temp);
            }
            greet("Wonderhoy");
            push(&temp, top);
            pop(s);