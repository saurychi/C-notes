#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pf = fopen("test.txt", "w");
    // FILE *pf = fopen("test.txt", "a"); // append contents to a file

    if(pf == NULL){
        perror("File not created");
        return 1;
    }

    fprintf(pf, "Wonderhoy");

    fclose(pf);

    return 0;
}
