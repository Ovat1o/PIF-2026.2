Questão 02.

a) Por que o uso de funções contidas em <conio.h> deve ser evitado em sistemas modernos
(Linux, macOS, servidores)?
```text
Não é padrão ANSI C. Foi criada para Windows antigo e não compila em Linux, macOS ou servidores modernos sem bibliotecas extras.
```

b) Quais são as funções equivalentes e portáveis fornecidas pela biblioteca padrão <stdio.h>
para entrada e saída de caracteres?
```text
Entrada: getchar() e fgetc(stdin)
Saída: putchar() e fputc()
```

c) Escreva um pequeno trecho de código padrão C que leia um caractere do console de maneira
robusta, ignorando eventuais quebras de linha ('\n') residuais no buffer do teclado.
```c
#include <stdio.h>

int main(void) {
    char c;
    printf("Digite um caractere: ");
    scanf(" %c", &c); // O espaço antes de %c consome o '\n' residual
    printf("Lido: %c\n", c);
    return 0;
}
```
