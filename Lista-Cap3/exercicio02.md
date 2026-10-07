Questão 02.

a) A variável `soma` foi declarada dentro do bloco do `for`. Sua visibilidade termina no fechamento desse bloco, então o `printf` que está fora dele não consegue acessá-la.

b) Se o `printf` fosse colocado dentro do `for`, o resultado também estaria incorreto. A variável seria criada novamente com valor zero em cada iteração, somaria apenas o quadrado do valor atual de `i` e deixaria de existir ao final daquela iteração.

c) Código corrigido:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    system("PAUSE");
    return 0;
}
```

A variável `soma` foi declarada no bloco de `main`, portanto permanece visível e viva durante toda a execução da função. Uma variável declarada dentro do bloco do `for` só existe e pode ser acessada naquele bloco. O resultado impresso pelo código corrigido é `Soma final = 285`.
