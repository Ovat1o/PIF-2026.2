#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade, tempoServico;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);

    printf("Digite o tempo de servico (em anos): ");
    scanf("%d", &tempoServico);

    if (idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25)) {
        printf("O trabalhador PODE se aposentar.\n");
    } else {
        printf("O trabalhador NAO pode se aposentar.\n");
    }

    system("PAUSE");
    return 0;
}

