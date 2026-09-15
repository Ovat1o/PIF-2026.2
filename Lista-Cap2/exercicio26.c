#include <stdio.h>
#include <stdlib.h>

int main() {
    double comprimento, largura, precoMetro;
    double perimetro, metrosArame, custoTotal;

    printf("Digite o comprimento e a largura do terreno em metros: ");
    scanf("%lf %lf", &comprimento, &largura);

    printf("Digite o preco do metro de arame: R$ ");
    scanf("%lf", &precoMetro);

    perimetro = 2.0 * (comprimento + largura);
    metrosArame = 3.0 * perimetro;
    custoTotal = metrosArame * precoMetro;

    printf("Quantidade de arame: %.2f metros\n", metrosArame);
    printf("Custo total: R$ %.2f\n", custoTotal);

    system("PAUSE");
    return 0;
}
