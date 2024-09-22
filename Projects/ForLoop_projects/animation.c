#include <stdio.h>

int main(){

    for(int i = 0; i < 30; i++){
        for(int j = 0; j < 30; j++){
            for(int k = 0; k < 30; k++){
                if(j  >= k - i){
                    printf(" O ");
                } else {
                    printf(" - ");
                }
            }
            printf("\n");
        }
        system("cls");
    }

    return 0;
}
