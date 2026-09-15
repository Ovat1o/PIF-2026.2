#include <stdio.h>
#include <stdlib.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    // O numero exibido e o codigo que representa o caractere na tabela ASCII.
    printf("O codigo ASCII de '%c' e %d.\n", caractere, (unsigned char) caractere);

    system("PAUSE");
    return 0;
}
