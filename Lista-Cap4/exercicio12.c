#include <stdio.h>
#include <stdlib.h>

int main() {
    int dia;

    printf("Digite um numero de 1 a 7 para o dia da semana: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("1 - Domingo\n");
            break;
        case 2:
            printf("2 - Segunda-feira\n");
            break;
        case 3:
            printf("3 - Terca-feira\n");
            break;
        case 4:
            printf("4 - Quarta-feira\n");
            break;
        case 5:
            printf("5 - Quinta-feira\n");
            break;
        case 6:
            printf("6 - Sexta-feira\n");
            break;
        case 7:
            printf("7 - Sabado\n");
            break;
        default:
            printf("Erro: Opcao Invalida!\n");
            break;
    }

    system("PAUSE");
    return 0;
}

