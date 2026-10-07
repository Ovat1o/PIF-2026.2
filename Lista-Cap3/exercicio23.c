#include <stdio.h>
#include <stdlib.h>

int main() {
    int lado, linha, coluna;

    do {
        printf("Digite o lado do quadrado entre 3 e 20: ");
        scanf("%d", &lado);

        if (lado < 3 || lado > 20) {
            printf("Valor invalido. Tente novamente.\n");
        }
    } while (lado < 3 || lado > 20);

    for (linha = 1; linha <= lado; linha++) {
        for (coluna = 1; coluna <= lado; coluna++) {
            if (linha == 1 || linha == lado || coluna == 1 || coluna == lado) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
