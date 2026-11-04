#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char operacao;
    double num1, num2, resultado;

    printf("--- Calculadora ---\n");
    printf("Escolha uma operacao:\n");
    printf("+ : Soma\n");
    printf("- : Subtracao\n");
    printf("* : Multiplicacao\n");
    printf("/ : Divisao\n");
    printf("^ : Potenciacao\n");
    printf("Digite a opcao desejada: ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro operando: ");
    scanf("%lf", &num1);

    printf("Digite o segundo operando: ");
    scanf("%lf", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 == 0.0) {
                printf("Erro: Divisao por zero nao permitida!\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
            }
            break;
        case '^':
            resultado = pow(num1, num2);
            printf("Resultado: %.2lf ^ %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        default:
            printf("Erro: Operacao invalida!\n");
            break;
    }

    system("PAUSE");
    return 0;
}

