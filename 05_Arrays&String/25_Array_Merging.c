#include <stdio.h>

int main() {
    int a[3] = {10, 20, 30};
    int b[3] = {40, 50, 60};
    int c[6];

    for (int i = 0; i < 3; i++)
        c[i] = a[i];

    for (int i = 0; i < 3; i++)
        c[i + 3] = b[i];

    printf("Merged Array:\n");

    for (int i = 0; i < 6; i++)
        printf("%d ", c[i]);

    return 0;
}
