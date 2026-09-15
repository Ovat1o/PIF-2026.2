Questão 06.

a) No incremento prefixado, a variável é incrementada antes de seu valor ser usado. Assim, em `int x = ++n`, primeiro `n` passa de 5 para 6 e depois esse valor é atribuído a `x`.

```text
Trecho A: n = 6, x = 6
```

No incremento pós-fixado, o valor atual é usado antes do incremento. Em `int y = m++`, o valor 5 é atribuído a `y` e somente depois `m` passa a valer 6.

```text
Trecho B: m = 6, y = 5
```

b) Na instrução `printf("%d\t%d\t%d\n", n, n+1, n++);`, a variável `n` é lida e também modificada entre pontos de sequenciamento sem uma ordem definida de avaliação dos argumentos. Isso causa comportamento indefinido: o resultado pode mudar entre compiladores, níveis de otimização ou execuções. O correto é incrementar `n` em uma instrução separada e só depois chamar `printf()` com valores bem definidos.
