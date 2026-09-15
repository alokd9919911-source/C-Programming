#include <stdio.h>

union Data {
    int age;
    float marks;
};

int main() {
    union Data d;

    d.age = 20;
    printf("Age = %d\n", d.age);

    d.marks = 85.5;
    printf("Marks = %.2f\n", d.marks);

    return 0;
}
