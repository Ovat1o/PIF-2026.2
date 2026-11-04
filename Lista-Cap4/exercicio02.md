Questão 02.

a) Será impressa a mensagem `Opção B`. Como não foram usadas chaves, o `else` se associa ao `if` mais próximo (`if (y > 10)`). Como `x = 15`, a primeira condição é verdadeira e o programa entra no teste interno. Como `y = 5`, a condição `y > 10` é falsa, acionando o `else` correspondente e imprimindo a Opção B.

b) Na ausência de chaves (`{ }`), o `else` sempre se liga ao `if` mais próximo que ainda não possui um `else`.

c) Código reescrito com chaves:

```c
int x = 15, y = 5;

if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```

Dessa forma, o `else` fica associado ao primeiro `if`, garantindo que a Opção B só seja impressa quando `x <= 10`.
