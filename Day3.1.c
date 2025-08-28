#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output
    printf("Fahrenheit=%.0f\n", fahrenheit);

    return 0;
}
