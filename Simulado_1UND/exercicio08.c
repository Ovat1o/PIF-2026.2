#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265

int main() {
    double raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    area = 4.0 * PI * pow(raio, 2.0);
    volume = (4.0 / 3.0) * PI * pow(raio, 3.0);

    printf("Area da superficie: %.3f\n", area);
    printf("Volume da esfera: %.3f\n", volume);

    system("PAUSE");
    return 0;
}