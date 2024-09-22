#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "hello World.";
    char d[] = " ";

    char *portion = strtok(s, d);

    while(portion != NULL){
        printf("\n%s", portion);
        portion = strtok(NULL, d);
    }

    /*
    char *portion1 = strtok(s, d);// stops when it sees a space
    printf("%s\n", portion1);// returns "hello"

    char *portion2 = strtok(NULL, d);// since this is NULL the strtok() goes back to the original string where it was used to
    printf("%s\n", portion2);// returns "World."

    char *again = strtok (NULL, d);// when a string doesnt have any more any iteration, it returns NULL(like in this case)
    if (again == NULL)
        printf("We're done! \n");
    else
        printf("Still more to go! \n");

    printf("\n%s", s);// returns the first strtok iteration: "hello"
    */





    return 0;
}
