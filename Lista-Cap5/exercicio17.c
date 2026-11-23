#include <stdio.h>
#include <stdlib.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int numero;
    long fatIter, fatRec;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        fatIter = fatorialIterativo(numero);
        fatRec = fatorialRecursivo(numero);

        printf("Fatorial iterativo (%d!): %ld\n", numero, fatIter);
        printf("Fatorial recursivo (%d!): %ld\n", numero, fatRec);

        if (fatIter == fatRec) {
            printf("Os resultados coincidem.\n");
        } else {
            printf("Os resultados nao coincidem.\n");
        }
    }

    system("PAUSE");
    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    int i;

    for (i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return (long)n * fatorialRecursivo(n - 1);
}
