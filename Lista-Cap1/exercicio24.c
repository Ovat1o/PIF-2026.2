#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // Configura o console para aceitar acentos (como no "MÁRIO" e "SÉRGIO")
    setlocale(LC_ALL, "Portuguese");

    // %-11s reserva 11 espaços e alinha o texto à esquerda (sinal de menos)
    printf("%-11s %s\n", "ALUNO(A)", "NOTA");
    printf("%-11s %s\n", "=========", "=====");
    
    // %.1f garante que a nota seja impressa com exatamente 1 casa decimal
    printf("%-11s %.1f\n", "ALINE", 9.0);
    printf("%-11s %s\n", "MARIO", "DEZ"); // "DEZ" é texto, então usamos %s
    printf("%-11s %.1f\n", "SERGIO", 4.5);
    printf("%-11s %.1f\n", "SHIRLEY", 7.0);

    system("PAUSE");
    return 0;
}