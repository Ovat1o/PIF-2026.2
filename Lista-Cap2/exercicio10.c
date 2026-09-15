#include <stdio.h>
#include <stdlib.h>

int main() {
    double celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    kelvin = celsius + 273.15;

    printf("Fahrenheit: %.2f graus F\n", fahrenheit);
    printf("Kelvin: %.2f K\n", kelvin);

    system("PAUSE");
    return 0;
}
