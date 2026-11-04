#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, c;

    printf("Digite o lado A: ");
    scanf("%lf", &a);

    printf("Digite o lado B: ");
    scanf("%lf", &b);

    printf("Digite o lado C: ");
    scanf("%lf", &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triangulo Equilatero (todos os lados iguais).\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles (dois lados iguais).\n");
        } else {
            printf("Triangulo Escaleno (todos os lados diferentes).\n");
        }
    } else {
        printf("Erro: Os lados fornecidos nao formam um triangulo!\n");
    }

    system("PAUSE");
    return 0;
}

