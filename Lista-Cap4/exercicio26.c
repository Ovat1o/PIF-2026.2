#include <stdio.h>
#include <stdlib.h>

int main() {
    int mes, ano, bissexto;

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("Mes invalido! Informe um valor entre 1 e 12.\n");
        system("PAUSE");
        return 1;
    }

    bissexto = (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);

    switch (mes) {
        case 1:
            printf("Mes: Janeiro | Quantidade de dias: 31 dias\n");
            break;
        case 2:
            if (bissexto) {
                printf("Mes: Fevereiro | Quantidade de dias: 29 dias (Ano Bissexto)\n");
            } else {
                printf("Mes: Fevereiro | Quantidade de dias: 28 dias\n");
            }
            break;
        case 3:
            printf("Mes: Marco | Quantidade de dias: 31 dias\n");
            break;
        case 4:
            printf("Mes: Abril | Quantidade de dias: 30 dias\n");
            break;
        case 5:
            printf("Mes: Maio | Quantidade de dias: 31 dias\n");
            break;
        case 6:
            printf("Mes: Junho | Quantidade de dias: 30 dias\n");
            break;
        case 7:
            printf("Mes: Julho | Quantidade de dias: 31 dias\n");
            break;
        case 8:
            printf("Mes: Agosto | Quantidade de dias: 31 dias\n");
            break;
        case 9:
            printf("Mes: Setembro | Quantidade de dias: 30 dias\n");
            break;
        case 10:
            printf("Mes: Outubro | Quantidade de dias: 31 dias\n");
            break;
        case 11:
            printf("Mes: Novembro | Quantidade de dias: 30 dias\n");
            break;
        case 12:
            printf("Mes: Dezembro | Quantidade de dias: 31 dias\n");
            break;
    }

    system("PAUSE");
    return 0;
}

