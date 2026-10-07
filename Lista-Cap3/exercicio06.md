Questão 06.

a) O valor final impresso será `6`.

b) O operador pós-fixado usa o valor atual de `x` na comparação e só depois incrementa a variável:

```text
Compara 0 < 5 e depois x passa a 1: verdadeiro
Compara 1 < 5 e depois x passa a 2: verdadeiro
Compara 2 < 5 e depois x passa a 3: verdadeiro
Compara 3 < 5 e depois x passa a 4: verdadeiro
Compara 4 < 5 e depois x passa a 5: verdadeiro
Compara 5 < 5 e depois x passa a 6: falso
```

Mesmo na comparação que encerra o laço, o incremento é realizado.

c) Uma forma explícita de obter o mesmo resultado é:

```c
int x = 0;

do {
    x++;
} while (x <= 5);

printf("Valor final de x = %d\n", x);
```
