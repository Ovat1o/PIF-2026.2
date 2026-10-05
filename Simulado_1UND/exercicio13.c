#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, i;
    long long int fatorial = 1;

    printf("Digite um numero inteiro entre 0 e 20: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else if (numero > 20) {
        printf("O valor excede o limite do tipo long long int.\n");
    } else {
        for (i = 2; i <= numero; i++) {
            fatorial *= i;
        }

        printf("%d! = %lld\n", numero, fatorial);
    }

    system("PAUSE");
    return 0;
}