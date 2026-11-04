#include <stdio.h>
#include <stdlib.h>

int main() {
    double salario, taxaAumento, valorAumento, novoSalario;
    int codigoCargo;

    printf("Digite o salario atual: R$ ");
    scanf("%lf", &salario);

    printf("Codigos de cargo:\n");
    printf("1 - Tecnico\n");
    printf("2 - Gerente\n");
    printf("3 - Demais Cargos\n");
    printf("Digite o codigo do cargo: ");
    scanf("%d", &codigoCargo);

    switch (codigoCargo) {
        case 1:
            taxaAumento = (salario <= 3000.0) ? 0.15 : 0.10;
            break;
        case 2:
            taxaAumento = (salario <= 5000.0) ? 0.10 : 0.05;
            break;
        case 3:
            taxaAumento = 0.08;
            break;
        default:
            printf("Codigo de cargo invalido!\n");
            system("PAUSE");
            return 1;
    }

    valorAumento = salario * taxaAumento;
    novoSalario = salario + valorAumento;

    printf("\nPercentual aplicado: %.0f%%\n", taxaAumento * 100.0);
    printf("Valor do aumento: R$ %.2lf\n", valorAumento);
    printf("Novo salario reajustado: R$ %.2lf\n", novoSalario);

    system("PAUSE");
    return 0;
}

