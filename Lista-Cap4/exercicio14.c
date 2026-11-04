#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota do estudante (0.0 a 10.0): ");
    scanf("%f", &nota);

    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if (nota < 0.0f || nota > 10.0f || faltas < 0) {
        printf("Dados invalidos!\n");
        system("PAUSE");
        return 1;
    }

    if (nota >= 9.0f) {
        conceito = (faltas <= 20) ? 'A' : 'B';
    } else if (nota >= 7.5f) {
        conceito = (faltas <= 20) ? 'B' : 'C';
    } else if (nota >= 5.0f) {
        conceito = (faltas <= 20) ? 'C' : 'D';
    } else if (nota >= 4.0f) {
        conceito = (faltas <= 20) ? 'D' : 'E';
    } else {
        conceito = 'E';
    }

    printf("Conceito final: %c\n", conceito);

    system("PAUSE");
    return 0;
}

