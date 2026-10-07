#include <stdio.h>
#include <stdlib.h>

int main() {
    int celsius;
    double fahrenheit, kelvin;

    printf("Celsius | Fahrenheit | Kelvin\n");
    printf("--------|------------|--------\n");

    for (celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (9.0 * celsius) / 5.0 + 32.0;
        kelvin = celsius + 273.15;
        printf("%7d | %10.2f | %6.2f\n", celsius, fahrenheit, kelvin);
    }

    system("PAUSE");
    return 0;
}
