#include <stdio.h>

int main() {
    int a[5], sum = 0;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
