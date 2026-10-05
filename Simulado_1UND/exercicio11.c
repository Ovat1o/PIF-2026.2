#include <stdio.h>
#include <stdlib.h>

int main() {
    int diasTrabalhados;
    double salarioBruto, gratificacao, imposto, salarioLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    salarioBruto = diasTrabalhados * 45.0;
    gratificacao = salarioBruto * 0.05;
    imposto = salarioBruto * 0.08;
    salarioLiquido = salarioBruto + gratificacao - imposto;

    printf("\nHolerite\n");
    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Gratificacao de 5%%: R$ %.2f\n", gratificacao);
    printf("Imposto de renda de 8%%: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    system("PAUSE");
    return 0;
}