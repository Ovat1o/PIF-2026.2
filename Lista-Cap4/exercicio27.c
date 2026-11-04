#include <stdio.h>
#include <stdlib.h>

int main() {
    int horas;
    double valorTotal = 0.0;

    printf("Digite o numero de horas inteiras de permanencia: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Tempo de permanencia invalido!\n");
        system("PAUSE");
        return 1;
    }

    if (horas <= 2) {
        valorTotal = horas * 2.00;
    } else if (horas <= 4) {
        valorTotal = (2 * 2.00) + (horas - 2) * 2.50;
    } else {
        valorTotal = (2 * 2.00) + (2 * 2.50) + (horas - 4) * 3.00;
    }

    printf("\n--- Recibo do Estacionamento ---\n");
    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor final cobrado: R$ %.2lf\n", valorTotal);

    system("PAUSE");
    return 0;
}

