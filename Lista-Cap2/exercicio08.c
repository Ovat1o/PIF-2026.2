#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, quadrado;
    double decimaParte;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    quadrado = numero * numero;
    decimaParte = numero / 10.0;

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decimaParte);

    system("PAUSE");
    return 0;
}
