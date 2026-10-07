#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char letraSecreta, tentativa;
    int quantidadeTentativas = 0;

    srand((unsigned int) time(NULL));
    letraSecreta = (char) (rand() % 26 + 'a');

    do {
        printf("Adivinhe a letra secreta entre a e z: ");
        scanf(" %c", &tentativa);

        if (tentativa < 'a' || tentativa > 'z') {
            printf("Digite apenas uma letra minuscula.\n");
            continue;
        }

        quantidadeTentativas++;

        if (tentativa < letraSecreta) {
            printf("A letra secreta vem depois de '%c'.\n", tentativa);
        } else if (tentativa > letraSecreta) {
            printf("A letra secreta vem antes de '%c'.\n", tentativa);
        }
    } while (tentativa != letraSecreta);

    printf("Parabens! Voce acertou em %d tentativa(s).\n", quantidadeTentativas);

    system("PAUSE");
    return 0;
}
