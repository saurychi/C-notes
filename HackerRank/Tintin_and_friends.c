#include <stdio.h>

int main() {

    int len, highest = 0, current, sum = 0;

    scanf("%d", &len);
    for(int i = 0; i < len; i++){
        scanf("%d", &current);
        if(current > highest && current % 2 == 0){
            highest = current;
            sum = 0;
        } else {
            for(int i = 1; i <= current; i++){
                if(current % i == 0){
                    if(i % 2 == 0){
                        sum += i;
                    }
                }
            }
        }
    }


    printf("%d", sum);
    return 0;
}
