#include <stdio.h>
#include <stdlib.h>

int main() {
    double lado, baseRetangulo, alturaRetangulo;
    double baseTriangulo, alturaTriangulo;
    double areaQuadrado, areaRetangulo, areaTriangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%lf", &lado);

    printf("Digite a base e a altura do retangulo: ");
    scanf("%lf %lf", &baseRetangulo, &alturaRetangulo);

    printf("Digite a base e a altura do triangulo retangulo: ");
    scanf("%lf %lf", &baseTriangulo, &alturaTriangulo);

    areaQuadrado = lado * lado;
    areaRetangulo = baseRetangulo * alturaRetangulo;
    areaTriangulo = (baseTriangulo * alturaTriangulo) / 2.0;

    printf("Area do quadrado: %.2f\n", areaQuadrado);
    printf("Area do retangulo: %.2f\n", areaRetangulo);
    printf("Area do triangulo retangulo: %.2f\n", areaTriangulo);

    system("PAUSE");
    return 0;
}
