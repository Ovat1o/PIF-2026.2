#include <stdio.h>
#include <stdlib.h>

int main() {
    double lab, semestral, final, media;

    printf("Digite a nota do Trabalho de Laboratorio (peso 2): ");
    scanf("%lf", &lab);

    printf("Digite a nota da Avaliacao Semestral (peso 3): ");
    scanf("%lf", &semestral);

    printf("Digite a nota do Exame Final (peso 5): ");
    scanf("%lf", &final);

    media = (lab * 2.0 + semestral * 3.0 + final * 5.0) / 10.0;

    printf("\nMedia ponderada: %.2lf\n", media);

    if (media >= 5.0) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 3.0) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    system("PAUSE");
    return 0;
}

