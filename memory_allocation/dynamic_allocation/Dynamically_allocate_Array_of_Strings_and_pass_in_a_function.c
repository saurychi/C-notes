#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to add a string to the dynamic array
void addString(char ***array, int *size, const char *newString) {
    // Increase the size of the array by 1
    *size += 1;

    // Reallocate memory for the new size
    *array = realloc(*array, *size * sizeof(char *));

    // Allocate memory for the new string and copy it into the array
    (*array)[*size - 1] = malloc(strlen(newString) + 1);
    strcpy((*array)[*size - 1], newString);
}

int main() {
    int size = 0;
    char **array = NULL;

    // Add strings to the array
    addString(&array, &size, "Hello");
    addString(&array, &size, "World");
    addString(&array, &size, "Phind");

    // Print the strings
    for (int i = 0; i < size; i++) {
        printf("%s\n", array[i]);
    }

    // Free the memory
    for (int i = 0; i < size; i++) {
        free(array[i]);
    }
    free(array);

    return 0;
}
