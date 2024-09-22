#include <stdio.h>

int main() {

    int s = 5, a = 3, b = 2, c = 8, d = 1;
    int h = 0, l = 0;

    // scanf("%d %d %d %d %d", &s, &a, &b, &c, &d);

    int height = s + a + b;
    int width = s + c + d;
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(i <= a - 1 && j > c - 1 && j < width - d){
                h++;
                printf((h % 2)? "H" : "A");
            }
            else if(i >= a && i < height - b) {
                if(j < c){
                    h++;
                    printf((h % 2)? "H" : "A");
                } else if(j >= c && j < width - d) {
                    l++;
                    printf((l % 2)? "L" : "O");

                } else if(j >= width - d){
                    h++;
                    printf((h % 2)? "H" : "A");
                } else {
                    printf(" ");
                }
            } else if(i >= height - b && j > c - 1 && j < width - d){
                h++;
                printf((h % 2)? "H" : "A");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

    }
    return 0;
}
