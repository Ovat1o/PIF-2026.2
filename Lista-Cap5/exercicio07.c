#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b);

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    resultado = soma(num1, num2);

    printf("Soma: %d + %d = %d\n", num1, num2, resultado);

    system("PAUSE");
    return 0;
}

int soma(int a, int b) {
    return a + b;
}
