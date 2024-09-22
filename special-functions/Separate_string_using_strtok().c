#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    char delimiter[] = " ";
    char SentenceArr[100][100];

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    char *section = strtok(sentence, delimiter);

    int counter = 0;
    while(section != NULL){
        strcpy(SentenceArr[counter], section);
        section = strtok(NULL, delimiter);
        counter++;
    }

    for(int i = 0; i < counter; i++){
        printf("%d: %s\n", i + 1, SentenceArr[i]);
    }

    return 0;
}
