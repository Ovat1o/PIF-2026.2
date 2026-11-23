#include <stdio.h>
#include <stdlib.h>

#define SQR(x) ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main() {
    int a, b;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);

    printf("Quadrado de %d: %d\n", a, SQR(a));
    printf("Quadrado de %d: %d\n", b, SQR(b));
    printf("Maior valor: %d\n", MAX(a, b));
    printf("Menor valor: %d\n", MIN(a, b));

    system("PAUSE");
    return 0;
}
