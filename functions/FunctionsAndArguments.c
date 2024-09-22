#include <stdio.h>


void birthday () {
    printf("\nHappy birthday to you!");
    printf ("\nHappy birthday to you!");
    printf("\nHappy birthday dear...YOU!");
    printf ("\nHappy birthday to you! \n");
}

void birthdayWithArguments (char name[], int age) {
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}

int main() {
    char name[] = "Walter";
    int age = 18;

    birthday();
    birthday();

    birthdayWithArguments(name, age);

    return 0;
}
