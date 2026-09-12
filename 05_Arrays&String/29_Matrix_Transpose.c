#include <stdio.h>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};

    printf("Transpose:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", a[j][i]);

        printf("\n");
    }

    return 0;
}
