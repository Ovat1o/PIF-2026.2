#include <stdio.h>
#include <stdlib.h>

int main() {
    double velocidadeKmH, velocidadeMS;

    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &velocidadeKmH);

    velocidadeMS = velocidadeKmH / 3.6;

    printf("Velocidade em m/s: %.2f\n", velocidadeMS);

    system("PAUSE");
    return 0;
}
