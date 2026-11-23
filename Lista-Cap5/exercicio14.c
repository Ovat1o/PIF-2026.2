#include <stdio.h>
#include <stdlib.h>

int somaDigitos(int n);

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Numero invalido. Informe um inteiro positivo.\n");
    } else {
        printf("Soma dos digitos de %d = %d\n", numero, somaDigitos(numero));
    }

    system("PAUSE");
    return 0;
}

int somaDigitos(int n) {
    // Caso base: numero de um unico digito (ou zero)
    if (n < 10) {
        return n;
    }

    // Passo recursivo: separa o ultimo digito (n % 10) e soma com o restante (n / 10)
    return (n % 10) + somaDigitos(n / 10);
}
