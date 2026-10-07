#include <stdio.h>
#include <stdlib.h>

int main() {
    int saque, restante;
    int cedulas100 = 0, cedulas50 = 0, cedulas20 = 0;
    int cedulas10 = 0, cedulas5 = 0, cedulas2 = 0;

    do {
        printf("Digite o valor inteiro positivo do saque: R$ ");
        scanf("%d", &saque);

        if (saque <= 0 || saque == 1 || saque == 3) {
            printf("Valor impossivel de compor com as cedulas disponiveis.\n");
        }
    } while (saque <= 0 || saque == 1 || saque == 3);

    restante = saque;

    if (restante % 10 == 1) {
        cedulas5 = 1;
        cedulas2 = 3;
        restante -= 11;
    } else if (restante % 10 == 3) {
        cedulas5 = 1;
        cedulas2 = 4;
        restante -= 13;
    } else if (restante % 2 != 0) {
        cedulas5 = 1;
        restante -= 5;
    }

    while (restante >= 100) {
        cedulas100++;
        restante -= 100;
    }
    while (restante >= 50) {
        cedulas50++;
        restante -= 50;
    }
    while (restante >= 20) {
        cedulas20++;
        restante -= 20;
    }
    while (restante >= 10) {
        cedulas10++;
        restante -= 10;
    }
    while (restante >= 2) {
        cedulas2++;
        restante -= 2;
    }

    printf("Cedulas para o saque de R$ %d:\n", saque);
    printf("R$ 100: %d\n", cedulas100);
    printf("R$  50: %d\n", cedulas50);
    printf("R$  20: %d\n", cedulas20);
    printf("R$  10: %d\n", cedulas10);
    printf("R$   5: %d\n", cedulas5);
    printf("R$   2: %d\n", cedulas2);

    system("PAUSE");
    return 0;
}
