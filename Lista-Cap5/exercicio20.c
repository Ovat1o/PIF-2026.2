#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int n);

int main() {
    int numero, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("O numero %d e PRIMO.\n", numero);
    } else {
        printf("O numero %d NAO e primo.\n", numero);
    }

    printf("\nNumeros primos de 1 ate 50:\n");
    for (i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    system("PAUSE");
    return 0;
}

int ehPrimo(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
