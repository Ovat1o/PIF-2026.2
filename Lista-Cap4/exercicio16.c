#include <stdio.h>
#include <stdlib.h>

int main() {
    float distancia, litros, consumo;

    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    if (litros <= 0.0f) {
        printf("Quantidade de litros invalida!\n");
        system("PAUSE");
        return 1;
    }

    consumo = distancia / litros;

    printf("Consumo estimado: %.2f km/l\n", consumo);

    if (consumo < 8.0f) {
        printf("Classificacao: Venda o carro!\n");
    } else if (consumo <= 14.0f) {
        printf("Classificacao: Economico!\n");
    } else {
        printf("Classificacao: Super economico!\n");
    }

    system("PAUSE");
    return 0;
}

