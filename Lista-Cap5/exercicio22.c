#include <stdio.h>
#include <stdlib.h>
#include "areas.h"

int main() {
    float raio, baseRet, altRet, baseTri, altTri;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &baseRet, &altRet);

    printf("Digite a base e a altura do triangulo: ");
    scanf("%f %f", &baseTri, &altTri);

    printf("\nAreas calculadas:\n");
    printf("Circulo: %.2f\n", A_CIRC(raio));
    printf("Retangulo: %.2f\n", A_RET(baseRet, altRet));
    printf("Triangulo: %.2f\n", A_TRI(baseTri, altTri));

    system("PAUSE");
    return 0;
}
