Questão 05.

a) O laço executa 5 iterações. Elas ocorrem com `i` igual a 0, 1, 2, 3 e 4. Após a quinta atualização, `i` e `j` passam a valer 5 e a condição `i < j` se torna falsa.

b) Saída exata:

```text
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

c) Versão com `while`:

```c
int i = 0, j = 10;

while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```
