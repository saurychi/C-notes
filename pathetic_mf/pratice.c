#include <stdio.h>
#include <string.h>

int main()
{

    char *lname1 = "Caballeroodnai[owmflmqfpo]";
    char lname2[30] = "Caballero";
    char *temp = "OtoriEmucihuuin";

    // printf("Difference: %d", strcmp(lname1, lname2));
    printf("Difference: %d", strcmp(temp, lname1)); // 1
    // printf("Difference: %d", strcmp(lname1, temp)); // -1
    // if(strcmp(lname1, temp) > 0){

    // }

    // printf("%s", lname1[0] > lname2[0] ? lname1 : lname2);

    return 0;
}
