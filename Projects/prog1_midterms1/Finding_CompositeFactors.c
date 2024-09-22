#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            int counter = 0;
            for(int j = 1; j <= i; j++){
                if(i % j == 0){
                    counter++;
                }
            }
            if(counter > 2){
                printf("{%d} ", i);
            } else {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
