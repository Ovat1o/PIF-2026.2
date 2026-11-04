#include <stdio.h>
#include <stdlib.h>

int main() {
    int valorTotal, valorPago, troco, restante;
    int n100, n50, n20, n10, n5, n2;

    printf("Digite o valor total a pagar: R$ ");
    scanf("%d", &valorTotal);

    printf("Digite o valor entregue pelo cliente: R$ ");
    scanf("%d", &valorPago);

    if (valorTotal <= 0 || valorPago <= 0) {
        printf("Valores invalidos fornecidos!\n");
        system("PAUSE");
        return 1;
    }

    if (valorPago < valorTotal) {
        printf("Erro: Valor entregue e insuficiente! Faltam R$ %d.\n", valorTotal - valorPago);
    } else {
        troco = valorPago - valorTotal;
        printf("\nTroco total: R$ %d\n", troco);

        if (troco == 0) {
            printf("Nao ha troco a devolver.\n");
        } else {
            restante = troco;

            n100 = restante / 100;
            restante %= 100;

            n50 = restante / 50;
            restante %= 50;

            n20 = restante / 20;
            restante %= 20;

            n10 = restante / 10;
            restante %= 10;

            n5 = restante / 5;
            restante %= 5;

            n2 = restante / 2;
            restante %= 2;

            printf("Decomposicao das cedulas:\n");
            if (n100 > 0) printf("- %d cedula(s) de R$ 100\n", n100);
            if (n50 > 0)  printf("- %d cedula(s) de R$ 50\n", n50);
            if (n20 > 0)  printf("- %d cedula(s) de R$ 20\n", n20);
            if (n10 > 0)  printf("- %d cedula(s) de R$ 10\n", n10);
            if (n5 > 0)   printf("- %d cedula(s) de R$ 5\n", n5);
            if (n2 > 0)   printf("- %d cedula(s) de R$ 2\n", n2);
            if (restante > 0) printf("- Restante em moeda de R$ 1: %d moeda(s)\n", restante);
        }
    }

    system("PAUSE");
    return 0;
}

