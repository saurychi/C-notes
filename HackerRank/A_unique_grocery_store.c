#include <stdio.h>

int main() {

    int len, current, high = 0, highest, low = 0, lowest, sum;
    scanf("%d", &len);
    for(int i = 0; i < len; i++){
        scanf("%d", &current);
        if(i == 0){
            lowest = current;
            highest = current;
            low = current;
            high = current;
        }
        if(current >= highest){
            highest = current;
        }
        if(current <= lowest){
            lowest = current;
        }
        if(current >= lowest && current <= low){
            low = current;
        }
        if(current <= highest && current >= high){
            high = current;
        }
    }

    sum = high + low;

    printf("%d", sum);

    return 0;
}
