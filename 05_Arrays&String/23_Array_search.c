#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int key = 30, found = 0;

    for (int i = 0; i < 5; i++) {
        if (a[i] == key) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element Found\n");
    else
        printf("Element Not Found\n");

    return 0;
}
