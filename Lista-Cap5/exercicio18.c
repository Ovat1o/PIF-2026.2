#include <stdio.h>
#include <stdlib.h>

long potencia(int base, int expoente);

int main() {
    int base, expoente;

    printf("Digite a base (inteiro): ");
    scanf("%d", &base);

    printf("Digite o expoente (inteiro nao negativo): ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Erro: o expoente deve ser nao negativo.\n");
    } else {
        printf("%d ^ %d = %ld\n", base, expoente, potencia(base, expoente));
    }

    system("PAUSE");
    return 0;
}

long potencia(int base, int expoente) {
    // Caso base: qualquer numero elevado a 0 e igual a 1
    if (expoente == 0) {
        return 1;
    }

    // Passo recursivo: multiplica a base pela potencia com expoente reduzido em 1
    return (long)base * potencia(base, expoente - 1);
}
