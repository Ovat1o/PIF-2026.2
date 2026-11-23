#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159f

float area(float r);

int main() {
    float raio, resultado;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    if (raio < 0.0f) {
        printf("Raio invalido.\n");
    } else {
        resultado = area(raio);
        printf("Area da esfera: %.2f\n", resultado);
    }

    system("PAUSE");
    return 0;
}

float area(float r) {
    return 4.0f * PI * r * r;
}
