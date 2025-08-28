#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    scanf("%d %d", &a, &b);

    // Swapping without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Output
    printf("After swap: %d %d\n", a, b);

    return 0;
}
