#include <stdio.h>
#include <stdlib.h>

int ehPar(int n);

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPar(numero)) {
        printf("O numero %d e PAR.\n", numero);
    } else {
        printf("O numero %d e IMPAR.\n", numero);
    }

    system("PAUSE");
    return 0;
}

int ehPar(int n) {
    return (n % 2 == 0) ? 1 : 0;
}
