#include <stdio.h>
#include <stdlib.h>

int main() {
    int diasTrabalhados;
    double valorBruto, imposto, valorLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    valorBruto = diasTrabalhados * 30.0;
    imposto = valorBruto * 0.08;
    valorLiquido = valorBruto - imposto;

    printf("Valor bruto: R$ %.2f\n", valorBruto);
    printf("Valor liquido: R$ %.2f\n", valorLiquido);

    system("PAUSE");
    return 0;
}
