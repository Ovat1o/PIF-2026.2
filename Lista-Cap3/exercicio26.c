#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, numero, divisor, quantidadeDivisores;
    int encontrouPrimo = 0;
    long long int somaPrimos = 0;

    do {
        printf("Digite dois inteiros positivos A e B, com A menor que B: ");
        scanf("%d %d", &a, &b);

        if (a <= 0 || b <= 0 || a >= b) {
            printf("Intervalo invalido. Tente novamente.\n");
        }
    } while (a <= 0 || b <= 0 || a >= b);

    printf("Numeros primos no intervalo: ");

    for (numero = a; numero <= b; numero++) {
        quantidadeDivisores = 0;

        for (divisor = 1; divisor <= numero; divisor++) {
            if (numero % divisor == 0) {
                quantidadeDivisores++;
            }
        }

        if (quantidadeDivisores == 2) {
            printf("%d ", numero);
            somaPrimos += numero;
            encontrouPrimo = 1;
        }
    }

    if (!encontrouPrimo) {
        printf("nenhum");
    }

    printf("\nSoma dos primos: %lld\n", somaPrimos);

    system("PAUSE");
    return 0;
}
