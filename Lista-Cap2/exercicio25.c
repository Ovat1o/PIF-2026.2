#include <stdio.h>
#include <stdlib.h>

int main() {
    double salarioBase, gratificacao, imposto, salarioLiquido;

    printf("Digite o salario-base: R$ ");
    scanf("%lf", &salarioBase);

    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;
    // Salario liquido = salario-base + gratificacao - imposto.
    salarioLiquido = salarioBase + gratificacao - imposto;

    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    system("PAUSE");
    return 0;
}
