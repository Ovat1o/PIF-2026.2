#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    double ladoA, ladoB, hipotenusa;

    printf("Digite os valores dos dois catetos: ");
    scanf("%lf %lf", &ladoA, &ladoB);

    hipotenusa = sqrt(ladoA * ladoA + ladoB * ladoB);

    printf("Hipotenusa: %.2f\n", hipotenusa);

    system("PAUSE");
    return 0;
}
