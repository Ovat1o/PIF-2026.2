#include <stdio.h>
#include <stdlib.h>

int main() {
    int contador;

    for (contador = 1; contador <= 100; contador++) {
        printf("%d\t", contador * 3);

        if (contador % 10 == 0) {
            printf("\n");
        }
    }

    system("PAUSE");
    return 0;
}
