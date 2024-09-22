#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[50];
    int age;
} Person;

void addPerson(Person *persons, int *count, const char *name, int age);

int main() {
    int count = 0;
    Person *persons = malloc(count * sizeof(Person));

    addPerson(persons, &count, "Alice", 30);
    addPerson(persons, &count, "Bob", 25);
    addPerson(persons, &count, "Charlie", 22);

    for (int i = 0; i < count; i++) {
        printf("Name: %s, Age: %d\n", persons[i].name, persons[i].age);
    }

    free(persons);

    return 0;
}

void addPerson(Person *persons, int *count, const char *name, int age) {
    persons = realloc(persons, ((*count) + 1) * sizeof(Person));

    strcpy(persons[*count].name, name);
    persons[*count].age = age;

    (*count)++;
}
