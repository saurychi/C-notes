#include <stdio.h>


int main(){
    double temperature, answer;
    int choice;

    printf("Choose either Freheit(1) or celsius(2): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter a number in celsius: ");
        scanf("%lf", &temperature);

        answer = (temperature * 9/5) + 32;

        printf("\n%.2lf\n", answer);
    } else if(choice == 2){
        printf("Enter a number in farenheit: ");
        scanf("%lf", &temperature);

        answer = (temperature - 32) * 5/9;

        printf("\n%.2lf\n", answer);
    }else{
        printf("Please input correct number(1/2)! ");
    }

    return 0;
}
