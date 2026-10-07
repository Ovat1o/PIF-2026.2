#include <stdio.h>
#include <stdlib.h>

int main() {
    int codigo;

    printf("Decimal | Hexadecimal | Caractere\n");
    printf("--------|-------------|---------\n");

    for (codigo = 32; codigo <= 126; codigo++) {
        printf("%7d | %11X | %c\n", codigo, codigo, codigo);
    }

    system("PAUSE");
    return 0;
}
