#include <stdio.h>
#include <stdlib.h>

int main() {
    int ang1, ang2, ang3;

    printf("Digite o primeiro angulo interno: ");
    scanf("%d", &ang1);

    printf("Digite o segundo angulo interno: ");
    scanf("%d", &ang2);

    printf("Digite o terceiro angulo interno: ");
    scanf("%d", &ang3);

    if (ang1 <= 0 || ang2 <= 0 || ang3 <= 0 || (ang1 + ang2 + ang3 != 180)) {
        printf("Erro: Os valores informados nao formam um triangulo valido (a soma deve ser 180 graus).\n");
    } else {
        if (ang1 == 90 || ang2 == 90 || ang3 == 90) {
            printf("Triangulo Retangulo (possui um angulo reto de 90 graus).\n");
        } else if (ang1 > 90 || ang2 > 90 || ang3 > 90) {
            printf("Triangulo Obtusangulo (possui um angulo maior que 90 graus).\n");
        } else {
            printf("Triangulo Acutangulo (todos os tres angulos sao menores que 90 graus).\n");
        }
    }

    system("PAUSE");
    return 0;
}

