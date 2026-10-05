#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, linha, coluna, numero = 1;

    do {
        printf("Digite um numero inteiro positivo de linhas: ");
        scanf("%d", &linhas);

        if (linhas <= 0) {
            printf("Valor invalido. Tente novamente.\n");
        }
    } while (linhas <= 0);

    for (linha = 1; linha <= linhas; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            if (coluna > 1) {
                printf(" ");
            }
            printf("%d", numero);
            numero++;
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}