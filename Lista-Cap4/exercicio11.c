#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, temp;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("\nValores em ordem crescente: %d, %d, %d\n", a, b, c);

    system("PAUSE");
    return 0;
}

