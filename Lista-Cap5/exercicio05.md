Questão 05.

a) Saída de cada "printf":

```text
25
8
```

As macros fazem substituição direta de texto antes da compilação:
- "SQR(2+3)" vira "((2+3)*(2+3))", que resulta em "5 * 5 = 25". Os parênteses garantem que a soma seja feita antes da multiplicação.
- "DOBRO(2+3)" vira "2+3*2". Sem parênteses protegendo "x", a multiplicação tem precedência sobre a soma, resultando em "2 + 6 = 8".

b) O "#define" não termina com ponto e vírgula porque o pré-processador substitui o nome exatamente pelo texto que está à direita. Se houvesse ";", ele seria colado no meio das expressões e causaria erros de sintaxe (por exemplo, "float a = 2 * 3.14; * r;"). Por convenção, usamos maiúsculas para diferenciar facilmente constantes e macros de variáveis e funções comuns.

c) Em "#define PRN (n) printf("%d", n)", o espaço entre "PRN" e "(n)" faz o pré-processador entender que "PRN" é uma macro sem argumentos, cujo texto de substituição começa com "(n)". A forma correta é sem espaço:

```c
#define PRN(n) printf("%d", (n))
```

Uma diferença importante é que a macro faz substituição de texto no pré-processamento e não verifica os tipos dos argumentos, enquanto uma função comum existe em tempo de execução, faz checagem de tipos e recebe os valores já calculados.
