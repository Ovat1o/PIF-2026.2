#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, numeroOriginal, numeroInvertido = 0, digito;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Valor invalido. Tente novamente.\n");
        }
    } while (numero <= 0);

    numeroOriginal = numero;

    while (numero > 0) {
        digito = numero % 10;
        numeroInvertido = numeroInvertido * 10 + digito;
        numero /= 10;
    }

    printf("Numero original: %d\n", numeroOriginal);
    printf("Numero invertido: %d\n", numeroInvertido);

    system("PAUSE");
    return 0;
}
