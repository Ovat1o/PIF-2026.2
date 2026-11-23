#include <stdio.h>
#include <stdlib.h>

long fibonacci(int n);

int main() {
    int qtd, i;

    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &qtd);

    if (qtd <= 0) {
        printf("Quantidade invalida.\n");
    } else {
        printf("Sequencia de Fibonacci:\n");
        for (i = 0; i < qtd; i++) {
            printf("%ld ", fibonacci(i));
        }
        printf("\n");
    }

    /*
     * A versao recursiva fica lenta para valores grandes de n porque cada
     * chamada gera duas novas chamadas (n-1 e n-2), recalculando os mesmos
     * valores varias vezes. O numero de chamadas cresce de forma exponencial.
     */

    system("PAUSE");
    return 0;
}

long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
