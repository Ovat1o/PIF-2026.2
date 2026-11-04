Questão 06.

a) Saída para `idade = 65`:

```text
Idoso
Adulto
Jovem
```

Múltiplas mensagens aparecem porque os `if` foram escritos de forma independente. O programa testa cada um deles em sequência: como 65 é maior ou igual a 60, a 18 e a 12, as três condições são verdadeiras e disparam o `printf`. O `else` estava ligado apenas ao último `if`, por isso não foi executado.

b)
- Com comandos `if` independentes: o programa sempre avalia cada um dos testes, permitindo que vários blocos sejam executados.
- Com a cadeia `else-if`: as condições são exclusivas. Quando uma delas é atendida, seu bloco é executado e o restante da cadeia é ignorado.

c) Código reescrito com `else-if`:

```c
#include <stdio.h>

int main() {
    int idade = 25;

    if (idade >= 60) {
        printf("Idoso\n");
    } else if (idade >= 18) {
        printf("Adulto\n");
    } else if (idade >= 12) {
        printf("Jovem\n");
    } else {
        printf("Criança\n");
    }

    return 0;
}
```

Com essa estrutura, apenas a primeira faixa compatível é impressa.
