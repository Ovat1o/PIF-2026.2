#include <stdio.h>
#include <stdlib.h>

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main() {
    int opcao;
    float temp, convertida;

    printf("=== Conversor de Temperaturas ===\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp);
            convertida = celsiusParaFahrenheit(temp);
            printf("Resultado: %.2f F\n", convertida);
            break;
        case 2:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp);
            convertida = celsiusParaKelvin(temp);
            printf("Resultado: %.2f K\n", convertida);
            break;
        case 3:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temp);
            convertida = fahrenheitParaCelsius(temp);
            printf("Resultado: %.2f C\n", convertida);
            break;
        case 4:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temp);
            convertida = kelvinParaCelsius(temp);
            printf("Resultado: %.2f C\n", convertida);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    system("PAUSE");
    return 0;
}

float celsiusParaFahrenheit(float c) {
    return c * 1.8f + 32.0f;
}

float celsiusParaKelvin(float c) {
    return c + 273.15f;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0f) / 1.8f;
}

float kelvinParaCelsius(float k) {
    return k - 273.15f;
}
