#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, termo;
    unsigned long long int anterior = 1, atual = 1, proximo;

    do {
        printf("Digite a posicao desejada entre 1 e 93: ");
        scanf("%d", &n);

        if (n < 1 || n > 93) {
            printf("Valor invalido. Tente novamente.\n");
        }
    } while (n < 1 || n > 93);

    printf("Sequencia: ");

    for (termo = 1; termo <= n; termo++) {
        if (termo == 1 || termo == 2) {
            atual = 1;
        } else {
            proximo = anterior + atual;
            anterior = atual;
            atual = proximo;
        }

        printf("%llu", atual);
        if (termo < n) {
            printf(", ");
        }
    }

    printf("\nValor do %do termo: %llu\n", n, atual);

    system("PAUSE");
    return 0;
}
