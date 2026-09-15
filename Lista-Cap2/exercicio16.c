#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    double alturaDegrauCm, alturaTotalM, alturaTotalCm;
    int quantidadeDegraus;

    printf("Digite a altura de cada degrau em centimetros: ");
    scanf("%lf", &alturaDegrauCm);

    printf("Digite a altura que deseja alcancar em metros: ");
    scanf("%lf", &alturaTotalM);

    alturaTotalCm = alturaTotalM * 100.0;
    quantidadeDegraus = (int) ceil(alturaTotalCm / alturaDegrauCm);

    printf("Numero minimo de degraus: %d\n", quantidadeDegraus);

    system("PAUSE");
    return 0;
}
