#include <stdio.h>
#include <stdlib.h>

int main() {
    double valorTotal, valorFinal, valorParcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: R$ ");
    scanf("%lf", &valorTotal);

    printf("Opcoes de pagamento:\n");
    printf("1 - A vista com 10%% de desconto\n");
    printf("2 - Parcelado em 3x sem juros\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        valorFinal = valorTotal * 0.90;
        comissao = valorFinal * 0.05;
        printf("\nValor final a pagar (a vista com desconto): R$ %.2lf\n", valorFinal);
        printf("Comissao do vendedor (5%% sobre o valor pago): R$ %.2lf\n", comissao);
    } else if (opcao == 2) {
        valorParcela = valorTotal / 3.0;
        comissao = valorTotal * 0.05;
        printf("\nValor de cada parcela (3x sem juros): R$ %.2lf\n", valorParcela);
        printf("Comissao do vendedor (5%% sobre o valor total): R$ %.2lf\n", comissao);
    } else {
        printf("\nOpcao de pagamento invalida!\n");
    }

    system("PAUSE");
    return 0;
}

