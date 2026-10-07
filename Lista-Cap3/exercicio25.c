#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, divisor, quantidadeDivisores = 0;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Valor invalido. Tente novamente.\n");
        }
    } while (numero <= 0);

    for (divisor = 1; divisor <= numero; divisor++) {
        if (numero % divisor == 0) {
            quantidadeDivisores++;
        }
    }

    printf("Quantidade de divisores: %d\n", quantidadeDivisores);

    if (numero > 1 && quantidadeDivisores == 2) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }

    system("PAUSE");
    return 0;
}
