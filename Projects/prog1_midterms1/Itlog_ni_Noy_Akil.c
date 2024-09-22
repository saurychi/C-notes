#include <stdio.h>
#include <math.h>

int getType(int *eggType){
    
    printf("Enter your egg type: ");
    scanf("%d", eggType);

    return *eggType;
}

double checkDiscount(int egg_orders, double amount){
    if(egg_orders >= 150 && egg_orders < 300){
        return amount * 0.05;
    } else if(egg_orders >= 300){
        return amount * 0.10;
    } else {
        return 0.00;
    }
}

int main (){

    int eggType = 0, eggOrdrs;
    double amount, percentage, total_cost, discount, discounted_price;

    printf("Itlog ni Noy AKIL!\n");
    printf("[1] #16 @ Php 15.00\n");
    printf("[2] #18 @ Php 22.50\n");
    printf("[3] penoy @ Php 13.00\n");

    while(eggType != 1 && eggType != 2 && eggType != 3){
        getType(&eggType);
    }

    printf("Enter total egg orders: ");
    scanf("%d", &eggOrdrs);

    printf("Enter amount: ");
    scanf("%lf", &amount);

    if(eggType == 1){
        total_cost = eggOrdrs * 15.00;
        discount = checkDiscount(eggOrdrs, total_cost);
        discounted_price = total_cost - discount;
        amount -= discounted_price;
    } else if(eggType == 2){
        total_cost = eggOrdrs * 22.50;
        discount = checkDiscount(eggOrdrs, total_cost);
        discounted_price = total_cost - discount;
        amount -= discounted_price;
    } else if(eggType == 3){
        total_cost = eggOrdrs * 13.00;
        discount = checkDiscount(eggOrdrs, total_cost);
        discounted_price = total_cost - discount;
        amount -= discounted_price;
    }

    printf("\nSUMMARY\n");
    printf("Total Cost: Php %.2lf\n", total_cost);
    printf("Discount: Php %.2lf\n", discount);
    if(discount != 0.00){
        printf("Discounted Price: Php %.2lf\n", discounted_price);
    }
    if(amount > 0){
        printf("Change: Php %.2lf\n", amount);
    }else{
        amount = amount * -1;
        printf("Change: (Php %.2lf)\n", amount);
    }


    return 0;
}
