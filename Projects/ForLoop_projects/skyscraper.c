#include <stdio.h>

int main() {

    int height;
    int width;

    printf("Input height of skyscraper: ");
    scanf("%d", &height);

    printf("Enter width of skyscraper: ");
    scanf("%d", &width);

    for(int i = 0; i < height; i++){
        if(i == 0){
            for(int j = 0; j < width / 2; j++){
                printf(" ");
            }
            printf("*");
        } else if (i == height - 1){
            for(int j = 0; j < width; j++){
                printf("*");
            }
        } else {
            printf(" ");
            for(int j = 0; j < width - 2; j++){
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
