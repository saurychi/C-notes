#include <stdio.h>

int main(){

    int len, num;

    scanf("%d", &len);
    scanf("%d", &num);

    for(int i = 1; i <= len; i++){
        if(i < 10 && i == 3){
            printf("%d\n", i);
        } else {
            int current = i;
            while(current != 0){
                if(current % 10 == 3 ){
                    printf("%d\n", i);
                }
                current /= 10;
            }
        }
    }

    return 0;
}
