#include <stdio.h>
#include <stdlib.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Valor invalido. Digite um numero positivo.\n");
    } else {
        printf("\nContagem regressiva:\n");
        contagem(n);

        printf("\nContagem crescente:\n");
        contagemCrescente(n);
    }

    system("PAUSE");
    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }

    // Imprime antes da chamada recursiva: exibe de n ate 1 (durante o empilhamento)
    printf("%d\n", n);
    contagem(n - 1);
}

void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }

    // Chama a recursao antes do printf: os valores so sao impressos no retorno
    // (durante o desempilhamento), invertendo a ordem para 1 ate n.
    contagemCrescente(n - 1);
    printf("%d\n", n);
}
