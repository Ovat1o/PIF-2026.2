#include <stdio.h>
#include <stdlib.h>

int main() {
    double horasNormais, horasExtras;
    double salarioBruto, imposto, salarioLiquido;

    printf("Digite as horas normais trabalhadas no ano: ");
    scanf("%lf", &horasNormais);

    printf("Digite as horas extras trabalhadas no ano: ");
    scanf("%lf", &horasExtras);

    salarioBruto = horasNormais * 10.0 + horasExtras * 15.0;
    imposto = salarioBruto > 12000.0
               ? (salarioBruto - 12000.0) * 0.10
               : 0.0;
    salarioLiquido = salarioBruto - imposto;

    printf("Salario anual bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto sobre o excedente: R$ %.2f\n", imposto);
    printf("Salario anual liquido: R$ %.2f\n", salarioLiquido);

    system("PAUSE");
    return 0;
}
