#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dado1, dado2, dado3;

    srand((unsigned int) time(NULL));

    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    dado3 = rand() % 6 + 1;

    printf("Resultados dos dados: %d, %d e %d\n", dado1, dado2, dado3);

    system("PAUSE");
    return 0;
}
