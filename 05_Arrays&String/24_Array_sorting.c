#include <stdio.h>

int main() {
    int a[5] = {40, 10, 50, 20, 30};
    int temp;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Sorted Array:\n");

    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}
