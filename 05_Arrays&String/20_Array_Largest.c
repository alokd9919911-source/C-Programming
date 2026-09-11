#include <stdio.h>

int main() {
    int a[5], largest;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    largest = a[0];

    for (int i = 1; i < 5; i++) {
        if (a[i] > largest)
            largest = a[i];
    }

    printf("Largest = %d\n", largest);

    return 0;
}
