#include <stdio.h>

int get_riceType();

int main(){

    int people, rice_type;
    float amountOf_rice, amountOf_water, timeNeeded;

    printf("Enter amount of people: ");
    scanf("%d", &people);

    printf("\nPick a selection of rice: \n");
    printf("[1] Basmati Rice\n");
    printf("[2] Brown Rice\n");
    printf("[3] Jasmine Rice\n");
    printf("[4] Ganador\n");

    rice_type = get_riceType();

    if(rice_type == 1){
        amountOf_rice = people * 0.5;
        amountOf_water = amountOf_rice * 1.2/amountOf_rice;
        timeNeeded = 15.00;
    } else if(rice_type == 2){
        amountOf_rice = people * 0.5;
        amountOf_water = amountOf_rice * 1.7/amountOf_rice;
        timeNeeded = 45.00;
    } else if(rice_type == 3){
        amountOf_rice = people * 0.5;
        amountOf_water = amountOf_rice * 1.2/amountOf_rice;
        timeNeeded = 15.00;
    } else if(rice_type == 4){
        amountOf_rice = people * 0.5;
        amountOf_water = amountOf_rice * 1.3/amountOf_rice;
        timeNeeded = 20.00;
    }

    printf("\n\n\t* * * RECIPE * * *\n\n");

    printf("Needed cups of rice: %.1f cups of rice\n", amountOf_rice);
    printf("Needed amount of water: %.1f cups of rice\n", amountOf_water);
    printf("Cooking Time: %.0f minutes\n", timeNeeded);
    return 0;
}

int get_riceType(){
    int type;

    printf("Enter type of rice: ");
    scanf("%d", &type);

    if(type > 4 || type < 1){
        return get_riceType();
    } else {
        return type;
    }


}
