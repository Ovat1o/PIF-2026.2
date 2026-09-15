#include <stdio.h>
#include <stdlib.h>

int main() {
    int primeiro, segundo;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &primeiro);

    printf("Digite o segundo numero inteiro, diferente de zero: ");
    scanf("%d", &segundo);

    printf("Soma: %d\n", primeiro + segundo);
    printf("Subtracao: %d\n", primeiro - segundo);
    printf("Multiplicacao: %d\n", primeiro * segundo);

    // Para evitar a divisao por zero, o segundo numero deve ser diferente de zero.
    printf("Divisao: %.2f\n", (double) primeiro / segundo);

    system("PAUSE");
    return 0;
}
