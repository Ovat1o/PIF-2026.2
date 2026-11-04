#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    double tempEntrada, tempConvertida;

    printf("=== Conversor de Temperaturas ===\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &tempEntrada);
            tempConvertida = tempEntrada * 1.8 + 32.0;
            printf("Temperatura em Fahrenheit: %.2lf degF\n", tempConvertida);
            break;
        case 2:
            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &tempEntrada);
            tempConvertida = tempEntrada + 273.15;
            printf("Temperatura em Kelvin: %.2lf K\n", tempConvertida);
            break;
        case 3:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%lf", &tempEntrada);
            tempConvertida = (tempEntrada - 32.0) / 1.8;
            printf("Temperatura em Celsius: %.2lf degC\n", tempConvertida);
            break;
        case 4:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%lf", &tempEntrada);
            tempConvertida = tempEntrada - 273.15;
            printf("Temperatura em Celsius: %.2lf degC\n", tempConvertida);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    system("PAUSE");
    return 0;
}

