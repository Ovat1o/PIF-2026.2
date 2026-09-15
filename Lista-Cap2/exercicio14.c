#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, c, semiperimetro, area;

    printf("Digite os tres lados do triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    semiperimetro = (a + b + c) / 2.0;
    area = sqrt(semiperimetro * (semiperimetro - a)
                * (semiperimetro - b) * (semiperimetro - c));

    printf("Area do triangulo: %.2f\n", area);

    system("PAUSE");
    return 0;
}
