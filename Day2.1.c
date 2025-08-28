#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    // Input length and breadth
    scanf("%d %d", &length, &breadth);

    // Calculations
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Output
    printf("Area=%d, Primeter=%d\n", area, perimeter);
}

