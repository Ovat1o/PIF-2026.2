#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

int main() {
    double graus, radianos;

    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);

    radianos = graus * (PI / 180.0);

    printf("Angulo em radianos: %.6f\n", radianos);

    system("PAUSE");
    return 0;
}
