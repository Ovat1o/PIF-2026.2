Questão 03.

a) A segunda linha usa o operador ternário `? :` para fazer uma verificação rápida. O programa testa se `media >= 7.0`: se for verdadeiro, escolhe `'A'`; se for falso, escolhe `'R'`. Como a média é 6.8, a condição é falsa e a variável `situacao` recebe o caractere `'R'`.

b) Reescrita com `if-else`:

```c
media = (nota1 + nota2) / 2.0;

if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

c) Não. O operador ternário foi feito para retornar um valor direto em uma atribuição ou expressão simples. Ele não é adequado para substituir estruturas `if-else` que executam vários comandos, declarações de variáveis ou instruções como `return`, `break` e laços de repetição.
