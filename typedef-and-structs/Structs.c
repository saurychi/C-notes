#include <stdio.h>
#include <string.h>

struct Player {
    char name [12];
    int score;
};

int main() {
    // struct = collection of related members ("variables")
    //          they can be of different data types
    //          listed under one name in a block of memory
    //          VERY SIMILAR to classes in other languages (but no methods)

    // struct value assignment
    struct Player player1 = {"Emu", 50};
    // or
    struct Player player2;

    strcpy(player2.name, "Yui");
    player2.score = 43;



    printf("%s\t", player1.name);
    printf("%d\n", player1.score);

    printf("%s\t", player2.name);
    printf("%d\n", player2.score);

    return 0;
}
