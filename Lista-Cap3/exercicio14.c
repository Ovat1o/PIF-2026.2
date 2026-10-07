#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, quadrado;
    long long int somaQuadrados = 0;

    for (numero = 1; numero <= 100; numero++) {
        quadrado = numero * numero;
        printf("%d -> %d\n", numero, quadrado);
        somaQuadrados += quadrado;
    }

    printf("Soma total dos quadrados: %lld\n", somaQuadrados);

    system("PAUSE");
    return 0;
}
