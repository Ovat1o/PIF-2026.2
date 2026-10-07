#include <stdio.h>
#include <stdlib.h>

int main() {
    int limite, numero, encontrou = 0;

    do {
        printf("Digite um numero limite inteiro positivo: ");
        scanf("%d", &limite);

        if (limite <= 0) {
            printf("Valor invalido. Tente novamente.\n");
        }
    } while (limite <= 0);

    for (numero = 1; numero <= limite; numero++) {
        if (numero % 3 == 0 && numero % 5 == 0) {
            printf("%d ", numero);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero satisfaz a condicao.");
    }
    printf("\n");

    system("PAUSE");
    return 0;
}
