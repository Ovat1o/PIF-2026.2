#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    double salario, percentual, valor;

    do {
        printf("\nMenu da Folha de Pagamento\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salario atual: R$ ");
                scanf("%lf", &salario);

                percentual = salario <= 2000.0 ? 0.15 : 0.10;
                valor = salario * percentual;

                printf("Percentual de reajuste: %.0f%%\n", percentual * 100.0);
                printf("Valor do reajuste: R$ %.2f\n", valor);
                printf("Novo salario: R$ %.2f\n", salario + valor);
                break;

            case 2:
                printf("Digite o salario bruto: R$ ");
                scanf("%lf", &salario);

                percentual = salario <= 3000.0 ? 0.08 : 0.15;
                valor = salario * percentual;

                printf("Percentual de imposto: %.0f%%\n", percentual * 100.0);
                printf("Imposto retido: R$ %.2f\n", valor);
                printf("Salario apos o desconto: R$ %.2f\n", salario - valor);
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3);

    system("PAUSE");
    return 0;
}
