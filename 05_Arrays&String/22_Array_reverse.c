#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};

    printf("Reverse Array:\n");

    for (int i = 4; i >= 0; i--) {
        printf("%d\n", a[i]);
    }

    return 0;
}
