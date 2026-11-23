#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b);

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    resultado = maior(num1, num2);

    printf("Maior valor: %d\n", resultado);

    system("PAUSE");
    return 0;
}

int maior(int a, int b) {
    return (a > b) ? a : b;
}
