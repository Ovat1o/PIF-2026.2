#include <stdio.h>
#include <stdlib.h>

/*
 * Compilacao condicional:
 * - Com #define DEBUG (ou compilando com -DDEBUG): o pre-processador inclui
 *   o printf dentro do laco, exibindo a soma parcial a cada iteracao.
 * - Sem #define DEBUG: o trecho dentro de #ifdef DEBUG e removido antes da
 *   compilacao, e o programa exibe apenas o resultado final da soma.
 */
#define DEBUG

int somaAteN(int n);

int main() {
    int n, total;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Valor invalido.\n");
    } else {
        total = somaAteN(n);
        printf("Soma de 1 ate %d = %d\n", n, total);
    }

    system("PAUSE");
    return 0;
}

int somaAteN(int n) {
    int i, soma = 0;

    for (i = 1; i <= n; i++) {
        soma += i;
        #ifdef DEBUG
        printf("[DEBUG] i = %d | soma parcial = %d\n", i, soma);
        #endif
    }

    return soma;
}
