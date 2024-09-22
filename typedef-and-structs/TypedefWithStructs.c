#include <stdio.h>
#include <string.h>

typedef struct{
    char name [25];
    char password[12];
    int id;
} User ;

int main() {

    // typedef = reserved keyword that gives an existing datatype a "nickname"

    User user1 = {"Emu", "password123", 123456789};
    User user2 = {"Yui", "password456", 542841818};

    printf("\n%s\t", user1.name);
    printf("%s\t", user1.password);
    printf("%d\t", user1.id);

    printf("\n%s\t", user2.name);
    printf("%s\t", user2.password);
    printf("%d\t", user2.id);

    return 0;
}
