#include <stdio.h>
#include <stdlib.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main() {
    float n1, n2, n3, media;

    printf("Digite a nota 1 (peso 2): ");
    scanf("%f", &n1);

    printf("Digite a nota 2 (peso 3): ");
    scanf("%f", &n2);

    printf("Digite a nota 3 (peso 5): ");
    scanf("%f", &n3);

    media = mediaPonderada(n1, n2, n3);

    printf("Media ponderada: %.2f\n", media);
    exibeSituacao(media);

    system("PAUSE");
    return 0;
}

float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 2.0f + n2 * 3.0f + n3 * 5.0f) / 10.0f;
}

void exibeSituacao(float media) {
    if (media >= 5.0f) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 3.0f) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }
}
