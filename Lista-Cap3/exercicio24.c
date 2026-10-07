#include <stdio.h>
#include <stdlib.h>

int main() {
    int dimensao, linha, coluna;

    do {
        printf("Digite uma dimensao impar entre 3 e 19: ");
        scanf("%d", &dimensao);

        if (dimensao < 3 || dimensao > 19 || dimensao % 2 == 0) {
            printf("Valor invalido. Tente novamente.\n");
        }
    } while (dimensao < 3 || dimensao > 19 || dimensao % 2 == 0);

    for (linha = 1; linha <= dimensao; linha++) {
        for (coluna = 1; coluna <= dimensao; coluna++) {
            if (coluna == linha || coluna == dimensao - linha + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
