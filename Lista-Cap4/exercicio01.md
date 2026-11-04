Questão 01.

a) Escrever `if (x = 0)` faz uma atribuição em vez de uma comparação (`==`). O valor `0` é guardado em `x`, e o resultado da expressão passa a ser `0`. Como zero é considerado falso em C, o bloco do `if` nunca será executado (vai para o `else`, se existir). Já com `if (x == 0)`, o valor de `x` não é alterado e o programa apenas testa se ele é igual a zero.

b) Em C, qualquer valor diferente de zero é tratado como verdadeiro, seja ele positivo, negativo, inteiro ou decimal. O número zero (`0`) é o único valor considerado falso.

c) O bloco será executado. A expressão atribui `-5` a `x`, e como `-5` é um valor diferente de zero, a condição é considerada verdadeira.
