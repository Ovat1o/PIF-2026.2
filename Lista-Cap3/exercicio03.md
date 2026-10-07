Questão 03.

a) O Trecho A imprime:

```text
36	18	9	4	2	1
```

Como `a` é inteiro, cada divisão por 2 descarta a parte fracionária. Depois de imprimir 1, a atualização faz `a` valer 0 e o laço termina.

b) No Trecho B, cada caractere lido é armazenado em `ch`. Enquanto o caractere não for `X`, o programa imprime o caractere seguinte na tabela de códigos, pois `ch + 1` soma uma unidade ao código numérico do caractere. Os parênteses garantem que a leitura seja atribuída primeiro a `ch` e só depois comparada com `X`. Sem eles, devido à precedência dos operadores, o resultado da comparação seria atribuído a `ch`.

c) O laço infinito pode ser encerrado com `break` quando uma condição definida pelo programa for satisfeita. Também seria possível encerrar a função com `return`, mas `break` é a opção adequada quando se deseja apenas sair do laço e continuar o restante da função.
