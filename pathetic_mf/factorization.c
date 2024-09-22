#include <stdio.h>

int main(){

    int num, counter = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                counter++;
            }
        }
        if(counter <= 2){
            printf("%d ", i);
        }

        counter = 0;
    }

    return 0;
}
