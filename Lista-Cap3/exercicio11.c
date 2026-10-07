#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, numero;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    if (a <= b) {
        for (numero = a; numero <= b; numero++) {
            printf("%d ", numero);
        }
    } else {
        for (numero = a; numero >= b; numero--) {
            printf("%d ", numero);
        }
    }
    printf("\n");

    system("PAUSE");
    return 0;
}
