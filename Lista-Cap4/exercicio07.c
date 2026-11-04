#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double numero;

    printf("Digite um numero real: ");
    scanf("%lf", &numero);

    if (numero >= 0.0) {
        printf("A raiz quadrada de %.2lf e: %.2lf\n", numero, sqrt(numero));
    } else {
        printf("O quadrado de %.2lf e: %.2lf\n", numero, numero * numero);
    }

    system("PAUSE");
    return 0;
}

