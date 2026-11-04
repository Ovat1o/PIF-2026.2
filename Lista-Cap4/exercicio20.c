#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    printf("Digite o coeficiente a (a != 0): ");
    scanf("%lf", &a);

    if (a == 0.0) {
        printf("Nao e uma equacao do segundo grau (a deve ser diferente de zero).\n");
        system("PAUSE");
        return 1;
    }

    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);

    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);

    delta = b * b - 4.0 * a * c;

    if (delta < 0.0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0.0) {
        x1 = -b / (2.0 * a);
        printf("A equacao possui uma raiz unica: x = %.2lf\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("A equacao possui duas raizes reais distintas:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }

    system("PAUSE");
    return 0;
}

