#include <stdio.h>
#include <stdlib.h>

int main() {
    float valorProduto, aliquota, precoFinal;
    int estado;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valorProduto);

    printf("Estados de destino:\n");
    printf("1 - MG (7%%)\n");
    printf("2 - SP (12%%)\n");
    printf("3 - RJ (15%%)\n");
    printf("4 - MS (8%%)\n");
    printf("Digite o codigo do estado: ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            aliquota = 0.07f;
            break;
        case 2:
            aliquota = 0.12f;
            break;
        case 3:
            aliquota = 0.15f;
            break;
        case 4:
            aliquota = 0.08f;
            break;
        default:
            printf("Erro: Codigo de estado invalido!\n");
            system("PAUSE");
            return 1;
    }

    precoFinal = valorProduto * (1.0f + aliquota);

    printf("Aliquota aplicada: %.0f%%\n", aliquota * 100.0f);
    printf("Valor do imposto: R$ %.2f\n", valorProduto * aliquota);
    printf("Preco final com imposto: R$ %.2f\n", precoFinal);

    system("PAUSE");
    return 0;
}

