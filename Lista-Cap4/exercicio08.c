#include <stdio.h>
#include <stdlib.h>

int main() {
    int ano;

    printf("Digite um ano (inteiro positivo): ");
    scanf("%d", &ano);

    if (ano <= 0) {
        printf("Ano invalido. Forneca um numero inteiro positivo.\n");
    } else if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d e BISSEXTO.\n", ano);
    } else {
        printf("O ano %d NAO e bissexto.\n", ano);
    }

    system("PAUSE");
    return 0;
}

