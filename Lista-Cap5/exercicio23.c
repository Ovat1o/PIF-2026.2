#include <stdio.h>
#include <stdlib.h>

#define DOBRO(x) x*2

int dobro(int x);

int main() {
    printf("Macro sem parenteses DOBRO(2+3): %d\n", DOBRO(2 + 3));
    printf("Funcao dobro(2+3): %d\n", dobro(2 + 3));

    /*
     * Os resultados diferem porque a macro faz substituicao textual direta:
     * DOBRO(2 + 3) vira 2 + 3 * 2 = 2 + 6 = 8 (multiplicacao tem precedencia).
     * Ja na funcao dobro(2 + 3), a expressao 2 + 3 e avaliada antes da chamada
     * (vira 5) e depois multiplicada por 2, resultando em 10.
     */

    #undef DOBRO
    #define DOBRO(x) ((x) * 2)

    printf("Macro corrigida com parenteses DOBRO(2+3): %d\n", DOBRO(2 + 3));

    system("PAUSE");
    return 0;
}

int dobro(int x) {
    return x * 2;
}
