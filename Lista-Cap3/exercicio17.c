#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade = 0;
    double nota, maiorNota = 0.0, menorNota = 0.0, soma = 0.0;

    while (1) {
        printf("Digite uma nota entre 0.0 e 10.0 ou -1.0 para encerrar: ");
        scanf("%lf", &nota);

        if (nota == -1.0) {
            break;
        }

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida. Tente novamente.\n");
            continue;
        }

        if (quantidade == 0) {
            maiorNota = nota;
            menorNota = nota;
        } else {
            if (nota > maiorNota) {
                maiorNota = nota;
            }
            if (nota < menorNota) {
                menorNota = nota;
            }
        }

        soma += nota;
        quantidade++;
    }

    printf("Total de alunos avaliados: %d\n", quantidade);

    if (quantidade > 0) {
        printf("Maior nota: %.2f\n", maiorNota);
        printf("Menor nota: %.2f\n", menorNota);
        printf("Media geral: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhuma nota valida foi informada.\n");
    }

    system("PAUSE");
    return 0;
}
