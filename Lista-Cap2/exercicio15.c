#include <stdio.h>
#include <stdlib.h>

int main() {
    double nota1, nota2, nota3, nota4;
    double mediaSimples, mediaPonderada;

    printf("Digite as quatro notas: ");
    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);

    mediaSimples = (nota1 + nota2 + nota3 + nota4) / 4.0;
    mediaPonderada = (nota1 + nota2 + 2.0 * nota3 + 2.0 * nota4) / 6.0;

    printf("Media aritmetica simples: %.2f\n", mediaSimples);
    printf("Media ponderada: %.2f\n", mediaPonderada);

    system("PAUSE");
    return 0;
}
