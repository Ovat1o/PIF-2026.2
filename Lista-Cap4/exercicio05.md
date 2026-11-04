Questão 05.

a) Saída impressa:

```text
a = 0, b = 5, c = 8
```

Como `a` vale 0, a condição `(a != 0)` é falsa. No operador `&&`, quando o primeiro lado é falso, o segundo lado nem chega a ser avaliado. Por isso, o incremento `++b` foi ignorado e `b` continuou valendo 5. Com o resultado falso, o programa entrou no `else` e subtraiu 2 de `c` (`10 - 2 = 8`).

b) A avaliação de curto-circuito ocorre quando a linguagem interrompe o teste lógico assim que o resultado final já estiver garantido:
- No operador `&&` (E): se a primeira condição for falsa, a expressão inteira será falsa, então a segunda parte não é executada.
- No operador `||` (OU): se a primeira condição for verdadeira, a expressão inteira será verdadeira, então a segunda parte não é executada.

c) Com a condição `if (a == 0 || ++b > 5)`:
- Como `a == 0` é verdadeiro, o operador `||` encerra o teste e não executa o `++b`. Com isso, `b` continua valendo **`5`**.
- Como o resultado foi verdadeiro, o bloco do `if` é acionado (`c += 10`), fazendo com que `c` passe a valer **`20`**.
