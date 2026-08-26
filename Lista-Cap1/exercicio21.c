#include <stdio.h>
#include <stdlib.h>

int main() {
    // Versão 1: Uma única chamada de função
    printf("Treinamento em programacao.\nLinguagem C.\n\n");
    
    // Versão 2: Duas instruções independentes
    printf("Treinamento em programacao.\n");
    printf("Linguagem C.\n\n");
    
    // Versão 3: Frases emolduradas utilizando caracteres gráficos de caixa
    printf("+-----------------------------+\n");
    printf("| Treinamento em programacao. |\n");
    printf("| Linguagem C.                |\n");
    printf("+-----------------------------+\n\n");
    
    system("PAUSE");
    return 0;
}