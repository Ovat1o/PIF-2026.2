#include <stdio.h>
#include <stdlib.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("=== Calculadora ===\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (opcao) {
        case 1:
            resultado = soma(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = subtrai(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = multiplica(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (num2 == 0.0f) {
                printf("Erro: divisao por zero nao permitida!\n");
            } else {
                resultado = divide(num1, num2);
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    system("PAUSE");
    return 0;
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
