#include <stdio.h>
#include <string.h>

int main(){

    char x;
    char y = 'U';

    printf("Enter letter: ");
    scanf("%c", &x);

    strupr(&x);

    if(x >= 65 && x <= 90){
        if(x == 65 || x == 69 || x == 73 || x == 79 || x == 85){
            printf("%c This is a vowel", x);
        } else {
            printf("%c is a consonant", x);
        }
    } else {
        printf("stupid nigger, basket players, chicken eaters");
    }



    return 0;

}
