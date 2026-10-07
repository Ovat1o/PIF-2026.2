#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade = 0;
    double valor, soma = 0.0, media;

    while (1) {
        printf("Digite um valor real positivo ou um valor negativo para encerrar: ");
        scanf("%lf", &valor);

        if (valor < 0.0) {
            break;
        }

        if (valor == 0.0) {
            printf("O valor deve ser positivo.\n");
            continue;
        }

        soma += valor;
        quantidade++;
    }

    printf("Quantidade de valores validos: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("Media aritmetica: %.2f\n", media);
    } else {
        printf("Nao foi possivel calcular a media.\n");
    }

    system("PAUSE");
    return 0;
}
