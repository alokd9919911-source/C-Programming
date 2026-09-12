#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Alok";
    char copy[20];

    strcpy(copy, name);

    printf("Original = %s\n", name);
    printf("Copy = %s\n", copy);

    return 0;
}
