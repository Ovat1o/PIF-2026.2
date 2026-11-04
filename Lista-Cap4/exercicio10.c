#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\nAnalise do numero %d:\n", numero);

    if (numero % 2 == 0) {
        printf("- Paridade: PAR\n");
    } else {
        printf("- Paridade: IMPAR\n");
    }

    if (numero > 0) {
        printf("- Sinal: POSITIVO\n");
    } else if (numero < 0) {
        printf("- Sinal: NEGATIVO\n");
    } else {
        printf("- Sinal: ZERO\n");
    }

    system("PAUSE");
    return 0;
}

