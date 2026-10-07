#include <stdio.h>
#include <stdlib.h>

void contarComFor() {
    int numero;

    printf("Contagem com for:\n");
    for (numero = 0; numero <= 100; numero++) {
        printf("%d ", numero);
    }
    printf("\n\n");
}

void contarComWhile() {
    int numero = 0;

    printf("Contagem com while:\n");
    while (numero <= 100) {
        printf("%d ", numero);
        numero++;
    }
    printf("\n\n");
}

void contarComDoWhile() {
    int numero = 0;

    printf("Contagem com do-while:\n");
    do {
        printf("%d ", numero);
        numero++;
    } while (numero <= 100);
    printf("\n");
}

int main() {
    contarComFor();
    contarComWhile();
    contarComDoWhile();

    // O for e o mais adequado porque a quantidade de repeticoes e conhecida.
    system("PAUSE");
    return 0;
}
